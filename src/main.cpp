#include "controller.h"

int main(int argc, char *argv[])
{
    stdio_init_all();

    LightController lightController = LightController(1, 26, 0);

    return 0;
}

