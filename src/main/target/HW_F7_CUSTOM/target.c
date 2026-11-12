#include <stdint.h>

#include "platform.h"

#include "drivers/bus.h"
#include "drivers/io.h"
#include "drivers/pwm_mapping.h"
#include "drivers/timer.h"
#include "drivers/pinio.h"

timerHardware_t timerHardware[] = {
    DEF_TIM(TIM3, CH4, PB1,  TIM_USE_MOTOR, 0, 0), // Motor 1
    DEF_TIM(TIM3, CH1, PB4,  TIM_USE_MOTOR, 0, 0), // Motor 2
    DEF_TIM(TIM2, CH2, PB3,  TIM_USE_MOTOR, 0, 0), // Motor 3
    DEF_TIM(TIM2, CH1, PA15, TIM_USE_MOTOR, 0, 0), // Motor 4
    DEF_TIM(TIM8, CH3, PC8,  TIM_USE_MOTOR, 0, 1), // Motor 5
    DEF_TIM(TIM8, CH4, PC9,  TIM_USE_MOTOR, 0, 0), // Motor 6
    DEF_TIM(TIM1, CH3, PA10, TIM_USE_SERVO, 0, 0), // Servo 1 (S7)

    DEF_TIM(TIM1, CH1, PA8,  TIM_USE_LED,   0, 0), // LED Strip
};

const int timerHardwareCount = sizeof(timerHardware) / sizeof(timerHardware);
