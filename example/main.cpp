
#include <iostream>
#include <thread>
#include <chrono>

#include <progress_bar/progress_bar.h>

int main(int argc, const char* argv[])
{
    
    
    size_t length = 100;
    bool run_animation = true;
    for (size_t i = 0; i < length; i++)
    {
        progress_bar::run_busy_animation("Doing something important ", &run_animation);
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
    run_animation = false;
    std::this_thread::sleep_for(std::chrono::seconds(1));
    std::cout << "Hello" << std::endl;
}