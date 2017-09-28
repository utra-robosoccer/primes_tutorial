#include "ros/ros.h"

const char* raw_data_filename = "raw_data.log";
const char* all_primes_filename = "all_primes.log";
const char* unique_primes_filename = "unique_primes.log";

// Global variables (e.g. file handles) go here

// Write a callback function here for the raw_data topic

// Write a callback function here for the all_primes topic

// Write a callback function here for the unique_primes topic

// main is what gets called when the program starts up
int main(int argc, char** argv)
{
	// Setup this ros node
	ros::init(argc, argv, "logger");
	ros::NodeHandle n;

	// Initalization code (e.g. opening files) goes here

	// Setup subscribers here
	// (You should subscribe to the 'raw_data', 'all_primes', and
	// 'unique_primes' topics)

	// This tells ros to continually process incoming messages
	// and call the appropriate callback functions
	ros::spin();

	// Do cleanup here (e.g. closing files)

	return 0;
}
