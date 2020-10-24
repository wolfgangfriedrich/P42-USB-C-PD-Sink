# P42-USB-C-PD-Sink
USB-C PD Sink CYPD3177

USB-C PD offers the option to negotiate power delivery from a compatible power supply. The USB-C PD-Sink plays the role of a sink device, enabling any device to be powered from a USB-PB power supply. Any type of power connector can be attached through a 2-pin screw terminal or directly soldered into the PCB for a lower profile. The voltage can be set to 5V, 9V, 12V, or 20V and current can be set to 1A, 2A, 3A, or 5A. BCR stands for Barrel Connector Replacement, the term is invented by Cypress, the manufacturer of the controller chip in use here. This board has the goal to replace random power adapters with a standardized way to use a USB-C power delivery (USB PD) adapter instead. For regular operation, no programming or software configuration is involved with this design. All options are set through the switches or resistor values. If needed an I2C interface to a microcontroller is available, to access status and control registers. This part of the board is separated through a break-off tab (mouse bites) and can be snapped off. I made the conscious design decision to not add a USB-A connector option at the output end. I did not want to build a device, that is capable of putting more than 5V on the VBUS pin of a regular USB cable and potentially destroy the device that is plugged in. A heatshrink tube is provided to protect the board in a permanent installation.

This is a set and forget device. Set your current and voltage needs before plugging the device to your USB-PD source and enjoy the power at the output. This is not a power supply to change voltage and current during operation.

All Features:

    USB-C PD Power Delivery Sink
    Selector switch S1 for 5V, 9V, 12V, or 20V
    Selector switch S2 for 1A, 2A, 3A, or 5A
    Max current 5A, settable in 250mA steps through resistor options
    Red LED to indicate failed power request
    I2C telemetry interface to controller chip
    Snap off option for telemetry interface
    For fixed voltage, the switch can be replaced by wire jumper
    Small form factor to be heat shrinked as part of the power cable
    Size 53mm x 15.4mm (without telemetry interface)
    Height 12mm with screw terminal and switch, 6mm without.
    3" (7.5cm) heatshrink tube for protected installation
    2oz copper to safely handle 5A
    Lead free assembly

Why did you make it?

I wanted to provide small form factor, easy to use, no software involved solution.
What makes it special?

The USB-C PD Sink can be built in-line with an existing power cable to make almost every device USB-C compatible.
