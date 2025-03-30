//d'abord lancer le code .cpp puis celui ci
import serial
import numpy as np
from PIL import Image, ImageEnhance

# Configuration
PORT = "COM13"  # Change to match your Arduino port
BAUDRATE = 460800  # Must match the Arduino Serial.begin(460800)
WIDTH, HEIGHT = 320, 240  # QVGA Resolution

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
        img_contrasted = enhancer.enhance(2.0)  # Increase contrast by a factor of 2
        img_contrasted.show()  # Show the image with increased contrast
        img_contrasted.save("captured_image_contrasted.png")  # Save it
        print("Image received and saved with increased contrast.")
