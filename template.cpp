// Includes
#include "template.h"

// Namespace
using namespace AGK;

app App;

void app::Begin(void)
{
	agk::SetWindowTitle("TestWindow");
	agk::SetWindowSize(800, 600, false);
	agk::SetWindowPosition(200, 50);
	agk::SetWindowAllowResize(true);
	agk::SetVirtualResolution(1366, 768);
	agk::SetBorderColor(0, 0, 255);
	agk::SetClearColor(151, 170, 204); // light blue
	//agk::SetClearColor(agk::Random(0, 255), agk::Random(0, 255), agk::Random(0, 255));
	agk::UseNewDefaultFonts(true);
	agk::SetPrintColor(0, 0, 0, 127);
	//agk::SetPrintSize(agk::GetPrintSize() * 2);
	//agk::SetPrintSpacing(-10.0);
	agk::SetSyncRate(60, 0);
	agk::SetScissor(0, 0, 0, 0);
	agk::Message("Hello. Here is some info about your device");
}

int app::Loop(void)
{
	agk::PrintC("Current device's resolution: ");
	agk::PrintC(agk::GetMaxDeviceWidth());
	agk::PrintC("x");
	agk::Print(agk::GetMaxDeviceHeight());
	agk::PrintC("Current app's resolution: ");
	agk::PrintC(agk::GetDeviceWidth());
	agk::PrintC("x");
	agk::Print(agk::GetDeviceHeight());

	xPixels = agk::GetDeviceWidth() / 100.0;
	agk::PrintC("Pixels in 1% of X: ");
	agk::Print(xPixels);
	yPixels = agk::GetDeviceHeight() / 100.0;
	agk::PrintC("Pixels in 1% of Y: ");
	agk::Print(yPixels);

	agk::PrintC("FPS: ");
	agk::Print(agk::ScreenFPS());
	/*if (agk::GetSeconds() == 10)
		agk::ResetTimer();*/
	agk::PrintC("Running time: ");
	agk::Print(agk::Timer());
	agk::PrintC("Running time (sec): ");
	agk::Print(agk::GetSeconds());
	agk::PrintC("Running time (ms): ");
	agk::Print(agk::GetMilliseconds());

	if (agk::GetSeconds() % 5 == 0)
		random = agk::RandomSign(agk::Random(0, 99));
	agk::PrintC("Random number between -99 and 99 (generates every 5 sec): ");
	agk::Print(random);

	agk::Sync();
	//agk::Sleep(500);

	return 0; // return 1 to close app
}


void app::End(void)
{
	//agk::MinimizeApp();
	agk::Message("Bye Bye");
}
