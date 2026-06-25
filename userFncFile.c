#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "inc/userFncFile.h"
#include "inc/systemTimer.h"
#include "inc/led_Led1.h"
#include "inc/led_Led2.h"
#include "inc/timer_api1.h"
#include "inc/Ohmmeter_Temp.h"
#include "inc/conversionFunctions.h"
#include "inc/EMICBus.h"

/* User Variables */
uint16_t TEMP = 0;

void onReset()
{
    setTime1(1000, 'A');
    LEDs_Led1_state(1);
}


void etOut1()
{
    TEMP = Ohmmeter_Temp_getResistance();
    pI2C("TEMP\t%u", TEMP);
}



