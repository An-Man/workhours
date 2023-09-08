#include <iostream>
#include "include/time.h"


int main()
{
    Workday workday;

    // ask start hours
    std::cout << "Start time:\n";
    workday.start = ask_time();

    // ask end hours
    std::cout << "End time:\n";
    workday.end = ask_time();

    // calculate workday
    workday.calculate_length(); 
    
    // print workday
    workday.print_length();
    
    // add rounding to nearest 0.25
    // UI!

    return 0;
}