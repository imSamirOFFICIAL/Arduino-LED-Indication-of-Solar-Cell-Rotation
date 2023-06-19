# LED Indication of Solar Cell Rotation using Arduino Uno in Proteus
Suppose, there are two LDR sensors connected to two sides of a solar cell. If the solar cell is rotating counterclockwise, then the first LED will be lit. On the other hand, if the solar cell is rotating clockwise, then the second LED will be lit.

<p align="center"><img src="https://user-images.githubusercontent.com/52858312/245674456-86778e71-57a3-4bf5-8ee0-9940cb4b9fd6.png"width=50% height=50%></p>

# How to run this?
Now, first clone the repository. Then, inside the `Experiment` folder, open the `Experiment.ino` file in the Arduino IDE. If the `Arduino IDE` is opening for the first time on your operating system, after opening the Experiment.ino file, go to `File` > `Preferences` > tick the `Compile` option beside `Show verbose output during`. Then, click `OK`. (No need to repeat this task from the second time onwards.)

Now, click the `Verify` button located in the upper left corner, and from the output, copy the following path: `C:\Users\Username\AppData\Local\Temp\arduino\sketches\XXXXXXXXXX/Experiment.ino.elf`.

![Screenshot](https://github.com/imSamirOFFICIAL/Arduino-LED-Indication-of-Solar-Cell-Rotation/assets/52858312/1b1cf211-7535-4908-bed3-522c9ed852b2)

Next, open the `Experiment.pdsprj` file in Proteus. Double-click on `Arduino Uno` and paste the `...ino.elf` link into the `Program File` field. Then, click `OK`.

![Screenshot](https://github.com/imSamirOFFICIAL/Arduino-LED-Indication-of-Solar-Cell-Rotation/assets/52858312/ab26af9a-ed1a-4785-ad65-89c2da9e41c1)

Boom! Everything is set up properly. Now, just click the `Run` button located in the bottom left corner and simulate the experiment.

# Note
After running the simulation, a `Virtual Terminal` will pop up. Now, by increasing or decreasing the value of the 1st and 2nd LDR sensors, the rotation of the solar cell can be observed in the Virtual Terminal.

<p align="center"><img src="https://user-images.githubusercontent.com/52858312/246844367-a6268ccf-4bbd-47ec-b08e-73e959ebad78.png"width=40% height=40%></p>
