# morse
An arduino powered morse code sender.

For this project, I built a keyboard on a piece of stripboard. It currently has a "QWERTY" layout, with a space button and a send button. I hope to make use of these in a later version.

I have been using a Diecimila Arduino.

This project currently:
  Has an LED on pin13, which flashes to transmit the morse.
  When a key is pressed, the corresponding morse pattern flashes.
  
For the keyboard, I used a matrix design, using 6 columns and 5 rows which is scanned in the program.
![Picture of the matrix](https://github.com/The-Beccatron/morse/blob/master/back-of-stripboard.jpg)
