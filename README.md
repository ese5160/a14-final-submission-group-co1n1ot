[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-24ddc0f5d75046c5622901739e7c5dd533143b0c8e959d652212380cedb1ea36.svg)](https://classroom.github.com/a/2yGso8Cl)
# Team
    * Team Name: Co1n1oT
    * Course: ESE5160 2023
    * Team Members: Qiming Zhang/ Mark Xia
# Video

https://drive.google.com/file/d/1hO6zPIGfDyBZ-z6QKKJkaqXucsmvbcgw/view?usp=drive_link
# OTAFU: https://drive.google.com/file/d/1PaVpMbMSJU6eB2cHe8P0BNUaxAxGv5d5/view?usp=sharing

# Pictures

<img src="https://github.com/ese5160/a14-final-submission-group-co1n1ot/assets/148792076/8fe135d6-f083-4530-a764-15494abd74f3" width="18%"></img><img src="https://github.com/ese5160/a14-final-submission-group-co1n1ot/assets/148792076/ae81090d-d764-4c65-a1b7-795b9e52543d" width="18%"></img><img src="https://github.com/ese5160/a14-final-submission-group-co1n1ot/assets/148792076/a23f4f5a-869e-4525-9987-d8ec7caccea7" width="18%"></img><img src="https://github.com/ese5160/a14-final-submission-group-co1n1ot/assets/148792076/e924025c-a6c5-443b-8f09-8dce25170e36" width="18%"></img><img src="https://github.com/ese5160/a14-final-submission-group-co1n1ot/assets/148792076/423a7d79-e656-44c9-bd99-6fdd94e680de" width="18%"></img><img src="https://github.com/ese5160/a14-final-submission-group-co1n1ot/assets/148792076/6eee205a-2b36-4377-8e0b-e1f90137d00c" width="18%"></img><img src="https://github.com/ese5160/a14-final-submission-group-co1n1ot/assets/148792076/2d5ad9dc-5214-42f4-8871-79f8fb80b70a" width="18%"></img><img src="https://github.com/ese5160/a14-final-submission-group-co1n1ot/assets/148792076/cb6c3313-38df-4215-a89b-583613a4f34f" width="18%"></img><img src="https://github.com/ese5160/a14-final-submission-group-co1n1ot/assets/148792076/6157aeb0-c890-476c-af7d-531c57d58670" width="18%"></img><img src="https://github.com/ese5160/a14-final-submission-group-co1n1ot/assets/148792076/57381f08-119a-4935-b475-3e374af47bb7" width="18%"></img>


# 1. Inspiration

This project aims to create a personal coin bank at home. Nowadays, physical currency transactions have been gradually replaced by electronic transfers. However, coin usage still exists in small transactions in our daily lives. With our intelligent personal bank powered by IoT technology, we can help you to manage coins. Get notified of the remaining coins of two kinds (dimes and quarters) in our mobile app so you can prepare more coins in advance! Plus, mobile app unlocking as a safety feature lets your piggy bank know who is its owner.

# 2. What it does

In this project, we're creating a sophisticated personal bank with two main features. Firstly, a coin counter utilizing two sets of light sensors differentiates coin types; larger coins like quarters block both sensors, and the light sensor detects more light input, whereas smaller ones block only one with more light input, allowing the system to accurately calculate the total amount of money deposited. Secondly, the bank incorporates an online UI with an unlocking feature for enhanced security. This is achieved using a servo motor-controlled electronic lock, integrated with cloud technology and a mobile app. Additionally, an LCD display on the piggy bank, along with the mobile app, informs users of the total coin count. Users can enjoy these features by logging in on any mobile device.

# 3. How we built it

Firstly, we determined the functionalities of this piggy bank and selected suitable chips to realize the functionality.
Then we designed a compact PCB that holds all the sensors to make all sensors and devices that have proper power feed and can be assembled into our piggy bank.
After this PCB was manufactured, we wrote the drivers for the light sensors, motors, and screens.
Algorithms for the two light sensors for detecting the exact coin were also designed and the functionality of the proper motor was also tested.
We designed the UI on Nodered and tested the connectivity between our piggy bank and the MQTT online control.
Finally, we conducted the complete test and all functionalities worked well.

# 4. Challenges we ran into

Hardware:
The power regulator of the 5V boost is not functioning properly on our customized PCD. Therefore we used the public SAMW25 Xplain Pro to hold and implement the OLED and motor which require the 5V power supply.

Software:
The SPI communication utilized in the ST7735 screen driver is relatively slow, and it is not functioning in our Clithread, thus we used another OLED screen SSD1306 which used I2C communication.

# 5. Accomplishments that we're proud of

We build our slope dedicatedly, with the help of two light sensors, so it can recognize two different types of coins precisely with more than 95% accuracy.
The online UI is able to show the balance accordingly with real-time updates.
The motor works to automatically unlock the piggy bank, unlike the traditional one which needs to open it manually.

# 6. What we learned

Creating a PCBA in line with specific guidelines to guarantee its effective operation.
Acquiring knowledge about various communication protocols like SPI, UART, and I2C.
Grasping the fundamentals of FreeRTOS and applying it in our project.
Exchanging data through MQTT and showcasing it on a dashboard with Node-RED.
Recognizing the significance of integrating mechanical and electrical components.

# 7. What's next for ESE516 IoT Piggy Bank

Advanced Coin Recognition Technology: Expanding the coin recognition capability to include a wider range of coins, potentially even recognizing and sorting coins from different currencies. This enhancement will involve refining the sensor technology and algorithms for greater accuracy and versatility.

Enhanced User Interface and Experience: Developing a more intuitive and user-friendly mobile app interface. This could include features like setting savings goals, tracking spending habits, or receiving personalized insights based on coin deposit patterns.

Integration with Financial Management Tools: Linking the piggy bank with personal finance management software or apps. This integration would allow users to view their savings in the piggy bank as part of their broader financial portfolio, aiding in comprehensive financial planning.


# 8. Link to our Node-RED demo URL

http://172.190.188.203:1880/ui
