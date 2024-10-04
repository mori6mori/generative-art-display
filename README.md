# generative-art-display
**Arduino Art Display - Expanding Sound Circles** 

*A GIF showing the expanding circles mimiking sound wages*


https://github.com/user-attachments/assets/2565bb11-f60b-4d7b-afd5-d99c5768b738


**About**

This project creates an Arduino-powered generative art display using concentric circles in alternating colors (orange, blue, and green). 

For more details on this project, check out [this blog post]([https://www.notion.so/mori-liu/link_to_blog_post)](https://mori-liu.notion.site/Generative-Art-Installation-Blog-1152195ca68280989a64c50d74bce56c?pvs=4).

**Design Goals**

The goal of this project was to:

•	Create an interactive art piece using an Arduino and a TFT display.

•	Generate concentric circles with dynamic expansion and a carved “M” in the center.

•	Provide a modular design that allows for easy customization of colors, speed, and radius.

**Features**

•	Expanding concentric circles in alternating colors.

•	Configurable speed and radius of circle expansion.

**Installation & Setup**

**Hardware Requirements**

•	**Arduino** (compatible with TFT screens)

•	**TFT Display** (such as the ILI9341)

•	**Jumper wires**

•	**Breadboard** (optional)

**Wiring Diagram**

•	Connect the TFT display to the Arduino according to the screen’s specifications. You can refer to the [TFT screen guide](https://www.notion.so/mori-liu/link_to_TFT_guide) for wiring details.

**Software Requirements**

•	**Arduino IDE** installed on your computer.

•	**TFT_eSPI library** for controlling the TFT display (install via Arduino Library Manager).

**Installation Steps**

1.	**Clone this repository**:

git clone https://github.com/yourusername/arduino-art-display.git

cd arduino-art-display

2.	**Open the project in the Arduino IDE**:

•	Open the expanding_circles.ino file in the Arduino IDE.

3.	**Upload the code**:

•	Connect your Arduino to your computer and upload the code to the board.

4.	**Wiring the TFT**:

•	Connect the TFT screen to your Arduino 

**Customization**

You can modify the following parameters in the code:

•	**Circle Colors**: Change the colors[] array to use different colors.

•	**Expansion Speed**: Modify the expansionSpeed variable to adjust the speed of the circles.

•	**Carved “M”**: You can replace the “M” with other text or shapes using the carveOutM() function.
