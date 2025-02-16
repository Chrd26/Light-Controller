#include "controller.h"

LightController::LightController(int output, int ADCgpio, int ADCInput){

    gpio_init(output);
    gpio_set_dir(output, GPIO_OUT);

    adc_init();
    adc_gpio_init(ADCgpio);
    adc_select_input(ADCInput);

    while (true)
    {
        float readADC = adc_read(); 
        float calcWaitingTime = (0.245 * readADC) - 6.37;
        std::cout << calcWaitingTime << std::endl;

        gpio_put(output, 1);

        if (calcWaitingTime >= 50)
        {
            sleep_ms(calcWaitingTime);
            gpio_put(output, 0);
            sleep_ms(calcWaitingTime);
        }
    }
}
