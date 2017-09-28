// This is a new comment I just added!

#include "ros/ros.h"

using namespace ros;

// You can declare your publisher here, so it is available globally

// Write a callback function here, to be called whenever you get a
// new 'raw_data' message

// main is what gets called when the program starts up
int main(int argc, char** argv)
{
	// Setup this ros node
	ros::init(argc, argv, "prime_filter");
	NodeHandle n;

	// Setup publishers and subscribers here
	// (You should subscribe to the 'raw_data' topic,
	// and publish to the 'all_primes' topic)

	// This tells ros to continually process incoming messages
	// and call the appropriate callback functions
	spin();

	return 0;
}

