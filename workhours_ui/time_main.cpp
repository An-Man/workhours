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
    workday.calculate_lengths(); 
    
    // print workday
    workday.print_start_end();
    workday.print_length_in_hh_mm();
    workday.print_length_in_decimal();

    return 0;
}