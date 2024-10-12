
#ifndef STRUT_COMMON_H
#define STRUT_COMMON_H

#include <Arduino.h>

#define FLAG_SLEEP_LIFTER1_READY 1<<0
#define FLAG_SLEEP_LIFTER2_READY 1<<1
#define FLAG_SLEEP_BASE_READY 1<<2
#define FLAG_SLEEP_FILTER_READY 1<<3
#define FLAG_SLEEP_LED_READY 1<<4
#define FLAG_SLEEP_UART_READY 1<<5
#define FLAG_SLEEP_WIFI_READY 1<<6

#define FLAG_SLEEP_ALL_READY (FLAG_SLEEP_LIFTER1_READY | FLAG_SLEEP_LIFTER2_READY | FLAG_SLEEP_BASE_READY | FLAG_SLEEP_FILTER_READY | FLAG_SLEEP_LED_READY | FLAG_SLEEP_UART_READY | FLAG_SLEEP_WIFI_READY)

#define HARDWARE_CODE_STRUT_PLUS 3
#define HARDWARE_CODE_STRUT 2
#define HARDWARE_CODE_PROTO 1 // origin ICRA version, deperacated
#define HARDWARE_CODE_UNKNOWN 0

#endif