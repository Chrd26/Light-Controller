#include <pico/stdlib.h>
#include "hardware/gpio.h"
#include "hardware/adc.h"
#include <iostream>

class LightController{
public:
    LightController(int output, int ADCInput);
};
