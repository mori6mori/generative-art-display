#include <TFT_eSPI.h> 
#include <SPI.h>

TFT_eSPI tft = TFT_eSPI(); 

void setup() {
  tft.init();
  tft.setRotation(1);   // 1 = landscape, 2 = portrait
  
  // Set text datum to middle-center for easy centering
  tft.setTextDatum(MC_DATUM);
  
  // Set text font and size (optional, but no longer needed if you are not displaying text)
  tft.setTextFont(2);    // Ensure the font size is set (use available fonts 1 to 7)
  tft.setTextSize(4);    // Text scaling factor (4 makes it larger)
}

void loop() {
  concentricCircles();
}

uint16_t colors[] = {TFT_ORANGE, 0xA65C, TFT_GREEN, TFT_BLUE};  // Orange, Brown, Green, Blue

void concentricCircles(){
  tft.fillScreen(TFT_BLACK); // Fill the screen with black background
  
  // Loop through colors while drawing the circles
  for (int16_t r = 10; r < tft.width() / 2; r += 10) {
    // Cycle through colors using modulo to loop through the array
    uint16_t color = colors[(r / 10) % 4];
    
    // Draw concentric circles with gradient colors
    tft.drawCircle(tft.width() / 2, tft.height() / 2, r, color);
    
    delay(500); // Adjust delay as needed
  }

  // Set text color and background (not needed if not drawing text)
  tft.setTextColor(TFT_WHITE, TFT_BLACK);  // White text with black background
  
  // Remove this line to avoid drawing "M" at the center:
  // tft.drawString("M", tft.width() / 2, tft.height() / 2);
}

