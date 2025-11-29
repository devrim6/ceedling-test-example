#include "file_man.h"
#include "kalman_takasu.h"


// Test values test function
void apply_kalman_to_sensor(Generic_Sensor_t* sensor){
    // Measurement residual (measurement vs. expected state)
    float dz[1] = {(float)sensor->raw_value - sensor->state[0]};
        
    // Apply Kalman filter update
    sensor->kalman_status = kalman_takasu(sensor->state,      // x (state vector)
                                   sensor->covariance,  // P (covariance)
                                   dz,                                // measurement residual
                                   sensor->R,           // measurement noise cov
                                   sensor->Ht,          // transposed H matrix
                                   1,                                 // n states
                                   1,                                 // m measurements
                                   7.8147f,               // chi2 threshold (95%)
                                   &sensor->chi2);
        
    // Update filtered value and status based on result
    if(sensor->kalman_status == 0) {
        sensor->filtered_value = sensor->state[0];
        sensor->kalman_status = 0;  // Success
    } else if(sensor->kalman_status == -2) {
        sensor->kalman_status = 2;  // Outlier rejected
    } else {
        sensor->kalman_status = 1;  // Error
    }
}