# InfraRed_Arduino
Control your Arduino with InfraRed

Imagine the front panel of your Arduino (or Pi) project with no buttons! This IR unit can give you that and just requires some simple code logic to interpret the codes sent from the transmitter to carry out push button or switch action you might want.

I've been grappling with how to control a Real Time Clock (RTC), particularly when having to reset it twice a year to cater for Daylight Saving Time (DST). This IR remote could easily be the answer for me and I'm sure you can think of many situations where a remote control can do the work of several buttons.

This saves many pins on your Arduino as well as the physical construction to support switches and buttons - can you imagine the uproar if your TV did not have a remote? Just buttons? Nope, neither can I so this device could be the answer for your project too.

I've included a couple of sketches (based on the original example from the IRRemote library). Watch the caveat in the library's ReadMe file about removing the original IR library that comes with the Arduino IDE as standard (and which this library now supersedes).

Finally, and as a quick aside and apropos nothing in this video, I share information of my favourite MOSFET for use with the Arduino - is this the perfect MOSFET for you?

---------------------------------------------
The IRRemote library link
---------------------------------------------
https://github.com/z3t0/Arduino-IRremote 


---------------------------------------------
Useful links:
---------------------------------------------
VS1838 pdf
http://tinkbox.ph/sites/tinkbox.ph/files/downloads/Keyes%20-%20Infrared%20Receiver%20Module%20.pdf

AX-1838-HS datasheet
http://dalincom.ru/datasheet/AX-1838HS.pdf

MOSFET delight! IRLZ44N
https://www.aliexpress.com/item/10Pcs-IRLZ44N-MOSFET-N-CH-55V-47A-TO-220AB-New/32599971025.html?spm=2114.13010608.0.0.zotTiL

MOSFET IRLZ44N datasheet
http://www.irf.com/product-info/datasheets/data/irlz44n.pdf
