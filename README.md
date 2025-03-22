# Still SAO though

[SAO (Simple Add-on/Shitty Add-on)](https://hackaday.io/project/52950-shitty-add-ons/log/159806-introducing-the-shitty-add-on-v169bis-standard) board celebrating our _eggcelent_ friends.
As seen at Hackaday Supercon 2024 and Hackaday Europe 2025.

<p align="center">
  <img src="readme/preview.gif" />
</p>

Built around ATTINY85, with two bottom-throwing LEDs. I tried adding I2C support using TinyWire's stack and failed miserably, likely due to [clock stretching](https://en.wikipedia.org/wiki/I²C#Clock_stretching_using_SCL) issues.