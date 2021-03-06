#include <BQ76920.h>

#ifndef APPLICATIONTESTS_H_
#define APPLICATIONTESTS_H_


void test_set_UV_threshold(float threshold);
void test_set_OV_threshold(float threshold);
void test_set_UV_and_OV_delay(int UV_delay, int OV_delay);
void test_UV_and_OV_application(float UV_threshold, float OV_threshold, int UV_delay, int OV_delay);

void test_turn_DSG_on_and_off();

void test_set_SCD(int threshold, int delay, int RSNS);
void test_set_OCD(int threshold, int delay);
void test_SCD_and_OCD_application(int SCD_threshold, int SCD_delay, int OCD_threshold, int OCD_delay, int RSNS);


void test_basic_cell_voltage_read();
void test_read_cell_voltages();
void test_basic_read_battery_voltage();
void test_read_battery_voltage();

#endif /* APPLICATIONTESTS_H_ */
