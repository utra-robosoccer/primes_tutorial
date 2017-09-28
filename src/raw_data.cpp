#include "ros/ros.h"

// main is what gets called when the program starts up
int main(int argc, char** argv)
{
	// Setup this ros node
	ros::init(argc, argv, "raw_data");
	ros::NodeHandle n;

	// Initalization goes here
	// (e.g. seeding your random number generator, if you want to)

	// Setup publishers here
	// (You should publish to the 'raw_data' topic)

	// Produce a random data point 200 times a second (200 Hz)
	ros::Rate loop_rate(200);

	// Before entering the main loop, wait for a little while so that
	// other nodes have a chance to start up

	// Repeat until somebody asks us to shutdown
	while (ros::ok())
	{
		// Publish a random number here

		// This tells ros to sleep before perfoming the next loop
		loop_rate.sleep();
	}

	return 0;	
}
