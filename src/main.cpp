#include "controller.h"

int main(int argc, char *argv[])
{
    
    int getTimeWait = 1000;

    LightController lightController = LightController(1, getTimeWait);
    return 0;
}

