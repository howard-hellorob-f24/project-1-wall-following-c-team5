// #include <iostream>
// #include <cmath>

// #include <mbot_bridge/robot.h>
// #include <wall_follower/common/utils.h>


// int main(int argc, const char *argv[])
// {
//     // Initialize the robot.
//     mbot_bridge::MBot robot;

//     /**
//      * TODO: (P1.1) Write code to make the robot drive in a square. Then,
//      * modify your code so that the robot drives in a square 3 times.
//      *
//      * HINT: A function to send velocity commands to the robot is provided. To
//      * use it, use the following code:
//      *
//      *      robot.drive(vx, vy, wz);
//      *
//      * Replace vx, vy, and wz with the velocity in the x direction (vx), y
//      * direction (vy), and the angular velocity (wz). You can also use this code:
//      *
//      *      sleepFor(secs);
//      *
//      * to sleep for "secs" seconds (replace with desired number of seconds).
//      */

//     // Stop the robot.
//     std::cout << "Stopping the robot!!" << std::endl;
//     robot.stop();
//     return 0;
// }

#include <iostream>
#include <cmath>
#include <mbot_bridge/robot.h>
#include <wall_follower/common/utils.h>

int main(int argc, const char *argv[])
{
    // Initialize the robot.
    mbot_bridge::MBot robot;

    // Define time intervals
    const double forward_time = 2.0;  // Time to drive straight (adjust as needed)
    const double turn_time = 1.0;     // Time to turn (adjust as needed)

    // Number of times to drive in a square
    const int repetitions = 3;

    // Drive in a square three times
    for (int i = 0; i < repetitions; ++i) {
        // Drive forward
        robot.drive(0.5, 0.0, 0.0); // Forward at vx = 0.5, vy = 0, wz = 0
        sleepFor(forward_time);      // Sleep for the forward duration

        // Turn 90 degrees
        robot.drive(0.0, 0.0, 1.0); // Rotate at wz = 1.0
        sleepFor(turn_time);         // Sleep for the turn duration

        // Drive forward
        robot.drive(0.5, 0.0, 0.0);  // Forward at vx = 0.5, vy = 0, wz = 0
        sleepFor(forward_time);       // Sleep for the forward duration

        // Turn 90 degrees
        robot.drive(0.0, 0.0, 1.0); // Rotate at wz = 1.0
        sleepFor(turn_time);         // Sleep for the turn duration

        // Drive forward
        robot.drive(0.5, 0.0, 0.0);  // Forward at vx = 0.5, vy = 0, wz = 0
        sleepFor(forward_time);       // Sleep for the forward duration

        // Turn 90 degrees
        robot.drive(0.0, 0.0, 1.0); // Rotate at wz = 1.0
        sleepFor(turn_time);         // Sleep for the turn duration

        // Drive forward
        robot.drive(0.5, 0.0, 0.0);  // Forward at vx = 0.5, vy = 0, wz = 0
        sleepFor(forward_time);       // Sleep for the forward duration

        // Turn 90 degrees to complete the square
        robot.drive(0.0, 0.0, 1.0); // Rotate at wz = 1.0
        sleepFor(turn_time);         // Sleep for the turn duration
    }

    // Stop the robot.
    std::cout << "Stopping the robot!!" << std::endl;
    robot.stop();
    return 0;
}
