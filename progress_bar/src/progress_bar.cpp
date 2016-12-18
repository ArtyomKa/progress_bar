// progress_bar.cpp : Defines the exported functions for the DLL application.
//


#include <progress_bar/progress_bar.h>

#include <thread>
#include <iostream>

using std::string;

static const std::string states[4] = {"|", "/", "--", "\\"};

void run_progress_bar(const std::string& text, std::function<float()>& percentage_function)
{
	std::thread* th = new std::thread([&percentage_function, text, th]()
	{
		auto perc = 0.0;
		while (perc < 1.)
		{
			printf("\r%s [%-50s] %d %%", text.c_str(), std::string(perc * 50, '#').c_str(), int(perc * 100));
			std::this_thread::sleep_for(std::chrono::milliseconds(500));
			perc = percentage_function();
		}
		delete th;
	});
}

void run_busy_animation(const std::string &text, bool &monitor)
{
	std::thread* th = new std::thread([&monitor, text, th]()
	{
		int state = 0;
		while (monitor)
		{	
			printf("\r%s%s ", text.c_str(),states[state++].c_str());
			std::this_thread::sleep_for(std::chrono::milliseconds(500));
			if (state >= 4) state = 0;
			
		}
		delete th;
	});
}
