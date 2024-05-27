#include <chrono>

#ifndef TIMER_H
#define TIMER_H

class Timer_t{
    public:
        Timer_t();
        bool check_timer();
    private:
        int thing = 1;
        void activate();
        std::chrono::_V2::system_clock::time_point start_time;
};

#endif