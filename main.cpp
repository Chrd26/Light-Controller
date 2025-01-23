#include <iostream>
#include <pico/stdlib.h>

int main(int argc, char *argv[])
{
    gpio_init(3);
    gpio_set_dir(3, GPIO_OUT);

    while (true)
    {
        gpio_put(3, 1);
    }
    return 0;
}
