/*
 * File: timer.h
 *
 * First Version: February 2026
 * Lead Developer: Aritrash Sarkar
 *
 * Last Updated: -
 * Updating Developer(s): -
 *
 * Description:
 * Timer initialization and interrupt handling functions.
 */

#ifndef TIMER_H
#define TIMER_H

#include <stdint.h>

void timer_init(void);
void handle_timer_irq(void);
uint64_t get_system_uptime_ms(void);

#endif