#include "unity.h"
#include "file_man.h"

static Generic_Sensor_t sensor;

void setUp(void) {
	sensor.raw_value = 5.0f;
	sensor.state[0] = 3.0f;
	sensor.covariance[0] = 1.0f;
	sensor.R[0] = 0.1f;
	sensor.Ht[0] = 1.0f;
	sensor.kalman_status = -1;
	sensor.filtered_value = 0.0f;
	sensor.chi2 = 0.0f;
}
void tearDown(void) {}

void test_simple_addition(void)
{
	TEST_ASSERT_EQUAL_INT(2, 1 + 1);
}

void test_apply_kalman_calls_kalman_and_updates_filtered_value(void)
{
	apply_kalman_to_sensor(&sensor);

	TEST_ASSERT_EQUAL_INT(0, sensor.kalman_status);
	TEST_ASSERT_FLOAT_WITHIN(1e-6, 5.0f, sensor.filtered_value);
}
