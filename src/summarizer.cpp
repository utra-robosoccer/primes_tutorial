#include "ros/ros.h"

// Global variables (e.g. counters) go here

// Write a callback function here for the raw_data topic

// Write a callback function here for the all_primes topic

// Write a callback function here for the unique_primes topic

// main is what gets called when the program starts up
int main(int argc, char** argv)
{
	// Setup this ros node
	ros::init(argc, argv, "summarizer");
	ros::NodeHandle n;

	// Setup subscribers here
	// (You should subscribe to the 'raw_data', 'all_primes', and
	// 'unique_primes' topics)

	// Loop at a rate of 1 Hz (one cycle per second)
	ros::Rate loop_rate(1);

	// Repeat until somebody asks us to shutdown
	while (ros::ok())
	{
		// This tells ros to process any incoming messages
		ros::spinOnce();

		// Print a status message here

		// This tells ros to sleep before perfoming the next loop
		loop_rate.sleep();
	}

	return 0;	
}
