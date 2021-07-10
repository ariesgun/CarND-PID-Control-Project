#include "PID.h"

/**
 * TODO: Complete the PID class. You may add any additional desired functions.
 */

PID::PID() {}

PID::~PID() {}

void PID::Init(double Kp_, double Ki_, double Kd_) {
  /**
   * TODO: Initialize PID coefficients (and errors, if needed)
   */
  Kp = Kp_;
  Ki = Ki_;
  Kd = Kd_;
}

void PID::UpdateError(double cte) {
  /**
   * TODO: Update PID errors based on cte.
   */
  p_error = cte;
  d_error = cte - cte_prev;
  i_error = cte + i_error;
  cte_prev = cte;

  std::cout << "p: " << p_error << "; d: " << d_error << "; i: " << i_error << "\n";
}

double PID::TotalError() {
  /**
   * TODO: Calculate and return the total error
   */
  double total = Kp * p_error + Kd * d_error + Ki * i_error;
  return total;  // TODO: Add your total error calc here!
}
