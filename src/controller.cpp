#include "controller.h"

LightController::LightController(int output, float waitingTime){
    gpio_init(output);
    gpio_set_dir(output, GPIO_OUT);

    while (true)
    {
        gpio_put(output, 1);
        sleep_ms(waitingTime);
        gpio_put(output, 0);
        sleep_ms(waitingTime);
    }
}
