# Air Quality Monitor
A portable, Bluetooth-enabled device that can monitor CO, Ammonia, Ethanol, H2, Methane, Propane, and Iso-Butane.

### Background

This is the first Printed Circuit Board (PCB) I have ever designed, and was started in order to get PCB design practice as I am interested
in pursuing a career related to hardware design. PCB design is not taught formerly at my school, so I am mostly learning through a quick, iterative process.

### Design Requirements

- Bluetooth-enabled
- Small enough to fit in a pocket
- Rechargeable
- Low-power sensor for optimal battery life
- Screen for standalone use
- Single button for user interaction


### Original Design

The initial commit of this repository included one major design revision which was not included in the commit. The initial design included
USB-C with Dual Role Port (DRP) functionality with an intent to use the device as a portable phone charger as well. Due to this added functionality,
the design also used a 18650 battery for extra capacity. However, this design faced many issues. The initial design had the following issues:

- 18650 Holder would not properly fit a protected cell (would lead to more parts in cell protection) (also made overall product too bulky)
- USB-C port chosen was not hand-solderable (used stencil but pins are not visible once the part is placed, making troubleshooting near impossible)
- Footprint for MiCS-5524 Gas Sensor was inverted
- SMD Header for screen was a unique, non-stocked part at almost all distributors, manufacturer would only sell in 1000 quantity

### Design Revisions

- 18650 cell was replaced with a 1Ah battery pack from [Sparkfun](https://www.sparkfun.com/products/13813), slim profile was the deciding factor
- USB-C was replaced with USB Micro for soldering (also saved cost by eliminating 2 IC's specific to USB-C)
- Footprint fixed for MiCS-5524 Gas Sensor
- SMD Header for screen was changed to a through-hole header for availability

### Progress

<img src="/Pictures/PCB/PCB%20-%20Screen%20and%20Charging.jpg" width="50%" height="50%">

  At this point, all hardware is operating as expected, however, there is more testing to verify this. A quick I2C scan indicated that both the
  fuel guage and screen are responding (this was clear based on the above image). 
  
  ## 2019-05-22 Update:
  
  The air quality monitor successfully runs a ethanol measurment sequence on button press and displays the result. However, the conversion from ADC value to ppm appears to be incorrect in comparison to results from BACtrack's product. SGX has been contacted for technical inquiry about the conversion specifically for the MiCS5524 sensor. The current 5th order regression equation to approximate ppm from ADC value was taken from an example using another type of sensor which only has a range of 50 to 500ppm for ethanol, while the MiCS5524 sensor has a range of 10 to 1000ppm, so I suspect this equation is throwing off the results dramatically. I was still able to verify that the measurement sequence operates as expected by blowing 91% isopropyl alcohol directly in front of the sensor to get a response regardless of the incorrect equation. 
  
  **Task list:**
  - [x] Assemble board
  - [x] Ensure battery can be charged
  - [x] Use screen demo from Adafruit to ensure screen is functioning
  - [x] Ensure MiCS-5524 gas sensor is providing data
  - [x] Check fuel guage functionality with example code from Sparkfun
  - [x] Enable sensor based on interrupt from button press
  - [x] Add functionality for reading fuel gauge
  - [ ] Reevaluate ADC to ppm conversion
  - [ ] Design quick two-part, snap-together case to be 3D-printed
  - [ ] Research sleep functionality with ESP32
  - [x] Enable bluetooth communication
  - [ ] Develop simple Android app to receive data from device
  - [ ] Styling and making the app look nice
