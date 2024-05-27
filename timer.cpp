#include <chrono>
#include "timer.h"
#include <iostream>

Timer_t::Timer_t(){
    start_time = std::chrono::system_clock::now();
}

bool Timer_t::check_timer(){
    auto now = std::chrono::system_clock::now();
    auto time_diff = std::chrono::duration_cast<std::chrono::milliseconds>(now - start_time).count();
    if(time_diff >= 1){
        std::cout << "yay";
        return true;
    }    
    return false;
}

void Timer_t::activate(){
    std::cout << "asdfasdfasd";
}