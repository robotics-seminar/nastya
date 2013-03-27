/*
 * cvra_param_robot.h
 *
 *  Created on: 10 avr. 2012
 *      Author: Flopy
 */

#ifndef CVRA_PARAM_ROBOT_H_
#define CVRA_PARAM_ROBOT_H_

//*******************************************************************************************
//                                             ROBOT
//*******************************************************************************************

//                       *********************************************
//                                             PID
//                       *********************************************

#define ROBOT_PID_WHEEL0_P 30
#define ROBOT_PID_WHEEL0_I 1
#define ROBOT_PID_WHEEL0_D 10

#define ROBOT_PID_WHEEL1_P 30
#define ROBOT_PID_WHEEL1_I 0
#define ROBOT_PID_WHEEL1_D 10

#define ROBOT_PID_WHEEL2_P 30
#define ROBOT_PID_WHEEL2_I 1
#define ROBOT_PID_WHEEL2_D 10


//                       *********************************************
//                                         Dimensions
//                       *********************************************
#define ROBOT_RADIUS_WHEEL0_MM  37
#define ROBOT_RADIUS_WHEEL1_MM  37
#define ROBOT_RADIUS_WHEEL2_MM  37

#define ROBOT_DISTANCE_WHEEL0_MM 77.75
#define ROBOT_DISTANCE_WHEEL1_MM 77.75
#define ROBOT_DISTANCE_WHEEL2_MM 77.75

#define ROBOT_BETA_WHEEL0_RAD  60*M_PI/180 
#define ROBOT_BETA_WHEEL1_RAD  180*M_PI/180 
#define ROBOT_BETA_WHEEL2_RAD  300*M_PI/180 

#define ROBOT_ENCODER_RESOLUTION 16384

//                       *********************************************
//                                             Blocage
//                       *********************************************
//#define ROBOT_ANGLE_BD 10000
//#define ROBOT_DIST_BD 5000

//                       *********************************************
//                                    Vitesse/Accélérations
//                       *********************************************
//#define ROBOT_DIST_SPEED_FAST 500 // MM PAR S
//#define ROBOT_DIST_SPEED_SLOW 300
//#define ROBOT_ANGL_SPEED_FAST 300 // DEG PAR S
//#define ROBOT_ANGL_SPEED_SLOW 100

//#define ROBOT_DIST_ACC 8 // MM PAR S^2
//#define ROBOT_ANGL_ACC 1 // DEG PAR S^2  // 4 normalement

//#define NB_COINS 38
//#define NB_LINGOT 7
//#define NB_POS_PRISE 4

#define TABLE_X_MM 3000
#define TABLE_Y_MM 2000
#endif /* CVRA_PARAM_ROBOT_H_ */
