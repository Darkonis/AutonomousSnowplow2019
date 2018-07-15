#pragma once

#include <vector>
#include <tuple>

using namespace std;

/*---------------------------------------
Set these to 1 to compile the timing code
and see output in the console
---------------------------------------*/
#define LIDAR_TIMING ( 0 )
#define MAIN_TIMING ( 0 )

#define TIM_551 ( 0 )
#define LMS_511 ( 1 )

/*---------------------------------------
define the lidar currently being used
---------------------------------------*/
#define LIDAR_IN_USE TIM_551

/*---------------------------------------
This defines macros based off of which
lidar is in use so switching is wa
---------------------------------------*/
#if ( LIDAR_IN_USE == TIM_551 )
	#define LIDAR_IP_ADDR     ( "169.254.185.233" )
	#define LIDAR_PORT        ( 2111 )
	#define LIDAR_START_ANGLE ( -45.0 )
	#define LIDAR_ANG_RES     ( 1.0 )
	#define LIDAR_DATA_POINTS ( 271 )

#elif ( LIDAR_IN_USE == LMS_511 )
	/*---------------------------------------
	These macros needs to be updated
	with the actual lms 511 info
	---------------------------------------*/
	#define LIDAR_IP_ADDR     ( "169.254.185.233" )
	#define LIDAR_PORT        ( 2112 )
	#define LIDAR_START_ANGLE ( -5.0 )
	#define LIDAR_ANG_RES     ( 0.5 )
	#define LIDAR_DATA_POINTS ( 271 )

#endif

typedef vector<tuple<double, double>>     lidar_data_packet;
typedef vector<vector<int>>               lidar_hit_map;