<h1> NUM rev.2 build guide </h1>
<h2> Important note: ProMicro direction </h2>
<p>The side with the chip should be faced upward which is different from R1</p>
<br>
<h2> Tools needed: </h2>
<ul>
  <li>A soldering iron (better with temperature control)</li>
  <li>A hex key</li>
  <li>Solder for connecting the component to the PCB</li>
  <li>Tweezers (for holding the component during soldering</li>
  <li>Solder sucker (extremely useful for desoldering through hole component</li>
  <li>Wire cutter (for cutting the leg of component after soldering)</li>
</ul>
<br>
<h2> Firmware: </h2>
<ul>
<li>You can get the firmware for the board in <a href=https://github.com/2L1P/NUM_rev.2> this</a> repository (source code is also provided)</li>
</ul>
<br>
<h2>How to flash your ProMicro:</h2>
<ol>
  <li>Download the qmk Toolbox application from <a href="https://github.com/qmk/qmk_toolbox">here</a></li>
  <li>Confirm MCU have been set to atmega 32U4</li>
  <li>Check the auto-flash box so that the controller would be flashed once it enters the bootloder mode</li>
  <li>Short the GND and RST pins (which means connect the 2 pins by eletrical conductors, e.g. tweezers) twice fast to enter the bootloader mode</li>
</ol>
<p>Expected output from the screen:<p>
<img src="https://user-images.githubusercontent.com/85400245/121808448-23518e80-cc8b-11eb-85b8-9533cbccc7ea.png"></img>
<p>If you flashed your ProMicro with the "NUM_rev.2_vial.hex" firmware, your device could use the vial software for keymapping, you can get vial from <a href="https://get.vial.today/download/">here. </a></p>
<br>
<h2>How to use vial:</h2>
<p>Once you plug in your ProMicro, click the refresh button on the right left corner</p>
<p>The followings should show up:</p>
<img src="https://user-images.githubusercontent.com/85400245/121808770-ae7f5400-cc8c-11eb-956b-61c9a939fe1d.png"></img>
<p>choose the key you want to remap and then click the keys below to apply changes!</p>
<br>
<h2>Hardware build guide</h2>
<ol>
  <li>Solder all surface mount component on the PCB (including 8 RGB LEDs)</li>
  <li>Bend and solder the diodes on the PCB</li>
  <li>Solder the pins(or the sockets) for the ProMicro on the PCB</li>
  <li>Put the switch through the upper plate and solder them onto the pcb</li>
  <li>Solder the ProMicro/ plug it into the socket</li>
  <li>Stick the bumpons onto the bottom plate</li>
  <li>Finally stack the acrylic pieces, put standoffs in position and tighten the screws and your build is done!</li>
</ol>
<br>
<h2>Important notes regarding soldering</h2>
<h3>Diodes direction</h3>
<img src="https://user-images.githubusercontent.com/85400245/121809760-aa553580-cc90-11eb-9110-a874be3b5501.jpg" width="600"></img>
<br>
<h3>RGB LED direction: triangle of the LED should be opposite to number 1 on the pcb<h3>
<img src="https://user-images.githubusercontent.com/85400245/121810140-361b9180-cc92-11eb-9a19-97192be1b37a.jpg" width="600"></img>
<br>
<p>Congratulations! You have finished reading the whole build guide for the your NUM numpad (rev.2)! It is my pleasure to be in this journey with all of you! Hope you enjoy your numpad!</p>
