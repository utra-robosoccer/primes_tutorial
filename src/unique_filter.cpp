#include "ros/ros.h"

// You can declare your publisher here, so it is available globally

// Any other global declarations go here

// Write a callback function here, to be called whenever you get a
// new 'all_primes' message

// main is what gets called when the program starts up
int main(int argc, char** argv)
{
	// Setup this ros node
	ros::init(argc, argv, "unique_filter");
	ros::NodeHandle n;

	// Perform any necessary initialization here

	// Setup publishers and subscribers here
	// (You should subscribe to the 'all_primes' topic,
	// and publish to the 'unique_primes' topic)

	// This tells ros to continually process incoming messages
	// and call the appropriate callback functions
	ros::spin();

	return 0;
}
