#ifndef INC_FILE_MAN_H
#define INC_FILE_MAN_H

#include <stdint.h>

typedef struct {
  float raw_value;
  float filtered_value;
  int8_t kalman_status;    // Last Kalman filter status
  
  // Kalman filter state
  float state[1];           // State vector (1x1 for single value)
  float covariance[1];      // Covariance matrix (1x1)
  float R[1];               // Measurement noise covariance
  float Ht[1];              // Transposed measurement matrix (1x1 identity)
  float chi2;               // Chi-square test statistic
} Generic_Sensor_t;

void apply_kalman_to_sensor(Generic_Sensor_t* sensor);

#endif /* INC_TEST_FILE_H */
