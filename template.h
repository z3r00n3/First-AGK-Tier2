#pragma once

// Link to GDK libraries
#include "AGK.h"

#define DEVICE_WIDTH 1024
#define DEVICE_HEIGHT 768
#define DEVICE_POS_X 32
#define DEVICE_POS_Y 32
#define FULLSCREEN false

// used to make a more unique folder for the write path
#define COMPANY_NAME "My Company"

// Global values for the app
class app
{
private:
	int random;
	float xPixels;
	float yPixels;

public:

	// constructor
	app() { random = 0, xPixels = 0.0, yPixels = 0.0; }

	// main app functions - mike to experiment with a derived class for this..
	void Begin(void);
	int Loop(void);
	void End(void);
};

extern app App;

// Allow us to use the LoadImage function name
#ifdef LoadImage
 #undef LoadImage
#endif