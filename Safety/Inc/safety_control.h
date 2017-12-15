
#ifndef SAFETY_CONTROL_H
#define SAFETY_CONTROL_H

#define SAFETY_CHANNEL 4

#include <stdlib.h>
#include "Interchip_S.h"
#include "PWM.h"
#include "spi.h"

void Safety_Init();
void Safety_Run();

#endif // SAFETY_CONTROL_H
