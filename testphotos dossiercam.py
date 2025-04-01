import serial
import numpy as np
import time
import os
from PIL import Image, ImageEnhance

# Configuration
PORT = "COM5"  # Change to match your Arduino port
BAUDRATE = 460800  # Must match the Arduino Serial.begin(460800)
WIDTH, HEIGHT = 320, 240  # QVGA Resolution
SAVE_DIR = "pomme"  # Directory to save images

# Create directory if it does not exist
if not os.path.exists(SAVE_DIR):
    os.makedirs(SAVE_DIR)

# Open the serial port
ser = serial.Serial(PORT, BAUDRATE, timeout=5)

while True:
    line = ser.readline().decode().strip()
    if line == "READY":  # Arduino is ready to send a grayscale image
        print("Receiving grayscale image...")
        frame = np.zeros((HEIGHT, WIDTH), dtype=np.uint8)

        for y in range(HEIGHT):
            for x in range(WIDTH):
                pixel = ser.read(1)  # Read 1 byte at a time
                if pixel:
                    frame[y, x] = int.from_bytes(pixel, "big")

        img = Image.fromarray(frame, mode="L")  # Convert to grayscale image
        enhancer = ImageEnhance.Contrast(img)
        img = enhancer.enhance(1.5)  # Increase contrast

        timestamp = time.strftime("%Y%m%d_%H%M%S")
        filename = os.path.join(SAVE_DIR, f"image_{timestamp}.png")
        img.save(filename)  # Save image
        print(f"Image saved: {filename}")
    
    time.sleep(5)  # Wait for 5 seconds before capturing the next image
