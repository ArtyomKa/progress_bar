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

void PROGRESS_BAR_API run_busy_animation(const std::string &text, bool &monitor);

}

#endif