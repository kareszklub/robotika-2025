#include "pico/stdlib.h"
#include "pwm.h"

int main() {
    stdio_init_all();

    PWM buzzer(4);

    buzzer.duty(0.5);
    buzzer.freq(2000);

    sleep_ms(2000);

    buzzer.duty(0);
}
