/**
 *  Copyright 2018 rohith jayarajan
 *  @file    PIDController.hpp
 *  @author  rohithjayarajan (driver) and harshkakashaniya (navigator)
 *  @date    9/22/2018
 *  @version 1.0
 *
 *  @brief UMD ENPM 808X, Week 4, Test Driven Development
 *
 *  @section DESCRIPTION
 *
 *  Implementation to support PID control
 *
 */

#ifndef INCLUDE_PIDCONTROLLER_HPP_
#define INCLUDE_PIDCONTROLLER_HPP_

class PIDController {
 public:
  /**
   *   @brief Default constructor for PIDController
   *          with Kp, Ki and Kd initialized to
   *          random values
   *
   *   @param nothing
   *   @return nothing
   */
  PIDController();
  /**
   *   @brief Default destructor for PIDController
   *
   *   @param nothing
   *   @return nothing
   */

  virtual ~PIDController();
  /**
   *   @brief Function to compute velocity given
   *          a known target setpoint and the
   *          actual velocity
   *
   *   @param targetSetpoint is a double value of the
   *          setpoint of the target
   *   @param actualVelocity is the actual velocity of
   *          the type double
   *   @return double value of the computed velocity
   */

  double computeVelocity(double targetSetpoint, double actualVelocity);
  /**
   *   @brief Function to set PID gains Kp, Ki and Kd
   *
   *   @param double value of proportional gain
   *   @param double value of integral gain
   *   @param double value of differential gain
   *   @return nothing
   */
  void setGains(double Kp, double Ki, double Kd);

  /**
   *   @brief Function to display present values of
   *          PID gains Kp, Ki and Kd
   *
   *   @param nothing
   *   @return nothing
   */
  void displayGains();
  double dt;  // time step

 private:
  double Kp;  // declare proportional gain Kp
  double Ki;  // declare integral gain Ki
  double Kd;  // declare differential gain Kd
};

#endif  // INCLUDE_PIDCONTROLLER_HPP_
