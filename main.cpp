#include <iostream>
#include "timer.h"
#include <unistd.h>

int main(){

    Timer_t my_timer;
    while(true){
        my_timer.check_timer();
        sleep(1);
    }
    std::cout << "yay, you did it!";
    return 0;
}