#ifndef _PROGRESS_BAR_H_
#define _PROGRESS_BAR_H_



#ifdef _WIN32
#ifdef PROGRESS_BAR_EXPORTS 
#define PROGRESS_BAR_API __declspec(dllexport)
#else
#define PROGRESS_BAR_API __declspec(dllimport)
#endif
#else
#define PROGRESS_BAR_API 
#endif

#include <string>
#include <functional>

namespace progress_bar {

void PROGRESS_BAR_API run_progress_bar(const std::string &text, std::function<float()> &percentage_function);
/*! Displays a rotating "pipe" animation while doing some processing.
    @param text a text to be displayed along with the animation.
    @param monitor a pointer to a boolean monitor. the animation thread will be running as long as the
            monitor value is true. 
*/
void PROGRESS_BAR_API run_busy_animation(const std::string &text, bool &monitor);

}

#endif