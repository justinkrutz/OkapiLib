#include "api.h"

#include "okapi/api.hpp"

using namespace okapi;

void opcontrol() {
  task_delay(100);

  while (true) {
    task_delay(15);
    // ADIButton btn(2);
    // btn.isPressed();
    // btn.edge();
    // btn.risingEdge();
    // btn.fallingEdge();

    // ControllerButton btn2(E_CONTROLLER_MASTER, E_CONTROLLER_DIGITAL_A);

    // Motor mtr = 1_m;
    // Motor r_mtr = 2_rm;

    // SkidSteerModel model1(MotorGroup<2>({1_m, 2_m}), MotorGroup<2>({3_m, 4_m}),
    //                       ADIEncoder(1, 2, true), ADIEncoder(3, 4));

    // ChassisControllerIntegrated int1(1_m,  // One motor on left side
    //                                  2_m); // One motor on right side

    // ChassisControllerIntegrated int2(MotorGroup<3>({1_m, 2_m, 3_m}), // Three motors on left side
    //                                  MotorGroup<2>({4_m, 5_m}));     // Two motors on right side

    // int1.driveStraight(0);            // Closed-loop control
    // int1.pointTurn(0);                // Closed-loop control
    // int1.driveForward(0);             // Open-loop control
    // int1.turnClockwise(0);            // Open-loop control
    // int1.driveVector(0, 0);           // Open-loop control
    // int1.tank(0, 0);                  // Tank drive
    // int1.arcade(0, 0);                // Arcade drive
    // int1.left(0);                     // Left drive side
    // int1.right(0);                    // Right drive side
    // int1.stop();                      // Stop motors
    // auto vals = int1.getSensorVals(); // Read left and right sensors
    // int1.resetSensors();              // Set sensors to 0

    // XDriveModel model2(MotorGroup<1>({1_m}), // {2_m, 3_m, 4_m, 5_m}
    //                    MotorGroup<1>({2_m}), MotorGroup<1>({3_m}), MotorGroup<1>({4_m}),
    //                    ADIEncoder(1, 2, true), ADIEncoder(3, 4));

    // ChassisControllerPID controller1(
    //   SkidSteerModelParams(MotorGroup<2>({1_m, 2_m}), MotorGroup<2>({3_m, 4_m}),
    //                        ADIEncoder(1, 2, true), ADIEncoder(3, 4)),
    //   PosPIDControllerParams(0, 0, 0), PosPIDControllerParams(0, 0, 0));

    // ChassisControllerPID controller2(
    //   XDriveModelParams(MotorGroup<1>({1_m}), // {2_m, 3_m, 4_m, 5_m}
    //                     MotorGroup<1>({2_m}), MotorGroup<1>({3_m}), MotorGroup<1>({4_m}),
    //                     ADIEncoder(1, 2, true), ADIEncoder(3, 4)),
    //   PosPIDControllerParams(0, 0, 0), PosPIDControllerParams(0, 0, 0));

    // OdomChassisControllerPID controller3(
    //   OdometryParams(SkidSteerModelParams(MotorGroup<2>({1_m, 2_m}), MotorGroup<2>({3_m, 4_m}),
    //                                       ADIEncoder(1, 2, true), ADIEncoder(3, 4)),
    //                  0, 0),
    //   PosPIDControllerParams(0, 0, 0), PosPIDControllerParams(0, 0, 0));

    // OdomChassisControllerPID controller4(
    //   OdometryParams(XDriveModelParams(MotorGroup<1>({1_m}), // {2_m, 3_m, 4_m, 5_m}
    //                                    MotorGroup<1>({2_m}), MotorGroup<1>({3_m}),
    //                                    MotorGroup<1>({4_m}), ADIEncoder(1, 2, true),
    //                                    ADIEncoder(3, 4)),
    //                  0, 0),
    //   PosPIDControllerParams(0, 0, 0), PosPIDControllerParams(0, 0, 0));

    // PosPIDController pid1(0, 0, 0); // PID controller
    // MotorController mc1(1_m, pid1); // Motor controller with one motor and the PID controller
    // MotorController mc2(MotorGroup<2>({1_m, 2_m}),
    //                     pid1); // Motor controller with two motors and the PID controller

    // PosIntegratedController posI1(1_m);

    // AsyncPosPIDController apospid1(1_m, ADIEncoder(1, 2), PosPIDControllerParams(0, 0, 0));
    // AsyncPosPIDController apospid2(1_m, ADIEncoder(1, 2), 0, 0, 0);

    // PosPIDController pid2(0, 0, 0);
    // PosPIDController pid3(0, 0, 0, 0);
    // PosPIDController pid4(PosPIDControllerParams(0, 0, 0));
    // PosPIDController pid5(PosPIDControllerParams(0, 0, 0, 0));

    // VelMath velMath1(0);
    // VelMath velMath2(0, 0);
    // VelMath velMath3(0, 0, 0);

    // VelPIDController velPid1(0, 0);
    // VelPIDController velPid2(VelPIDControllerParams(0, 0));

    // ADIEncoder quad1(0, 0);
    // ADIEncoder quad2(0, 0, true);

    // MotorGroup<2> mg1({1_m, 2_m});

    // AverageFilter<1> avgFilt1;
    // avgFilt1.filter(0);
    // avgFilt1.getOutput();

    // DemaFilter demaFilt1(0, 0);

    // EKFFilter ekfFilter1();
    // EKFFilter ekfFilter2(0);
    // EKFFilter ekfFilter3(0, 0);

    // EmaFilter emaFilt1(0);

    // Odometry odom1(SkidSteerModelParams(MotorGroup<2>({1_m, 2_m}), MotorGroup<2>({3_m, 4_m}),
    //                                     ADIEncoder(1, 2, true), ADIEncoder(3, 4)),
    //                0, 0);

    // Timer timer1();
  }
}
