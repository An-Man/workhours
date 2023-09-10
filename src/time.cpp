#include "../include/time.h"
#include <cmath>
#include <iomanip>

void Workday::calculate_lengths() {
    // count total minutes with and without lunch break
    int total_minutes {((end.hours * 60) + end.minutes) - ((start.hours * 60) + start.minutes)};
    int total_min_minus_lunch {total_minutes - LUNCH_BREAK};

    // calc total hours 
    int total_hours             {total_minutes / 60};
    int total_hours_minus_lunch {total_min_minus_lunch / 60};

    length_in_decimal = static_cast<float>(total_minutes) / 60.0f; // in decimal form

    length_in_hh_mm.hours   = total_hours;
    length_in_hh_mm.minutes = total_minutes - (total_hours * 60);

    length_in_hh_mm_minus_lunch.hours   = total_min_minus_lunch / 60;
    length_in_hh_mm_minus_lunch.minutes = total_min_minus_lunch - (total_hours_minus_lunch * 60);
     
    // multiply by 4 to get quarter hours
    float rounding {4.0f * length_in_decimal};

    // check which is nearest integer, floor or ceiling, and round to it. Ternary operator.
    (rounding - floorf(rounding)) <= (ceilf(rounding) - rounding) ? rounding = floorf(rounding) : rounding = ceilf(rounding);

    // divide by 4 to get actual value
    length_in_decimal = rounding / 4.0f;
    length_in_decimal_minus_lunch = length_in_decimal - 0.50f;  
}

void Workday::print_start_end() {
    std::cout << "Working hours: " << start.hours << ":" << start.minutes << " - ";
    std::cout << end.hours << ":" << end.minutes << '\n';
} 

void Workday::print_length_in_decimal() {
    std::cout << "Workday total in dec: " << std::fixed << std::setprecision(2) << length_in_decimal << '\n';
    std::cout << "Workday minus lunch in dec: " << std::fixed << std::setprecision(2) << length_in_decimal_minus_lunch << '\n';
    std::cout << '\n';
}

void Workday::print_length_in_hh_mm() {
    std::cout << "Workday total: " << length_in_hh_mm.hours << " h " << length_in_hh_mm.minutes << " min\n";

    std::cout << "Workday minus lunch: " << length_in_hh_mm_minus_lunch.hours << " h " 
                                         << length_in_hh_mm_minus_lunch.minutes << " min\n";
    std::cout << '\n';
}

Time ask_time() {
    Time time;
    while (true)
    {
        std::cout << "Enter hours (hh):";
        std::string input_hours;
        std::getline(std::cin, input_hours);

        time.hours = stoi(input_hours);

        if (time.hours < 0 || time.hours > 23) {
            std::cout << "Invalid hours, try again\n";
        } else {
            break;
        }        
    }
    
    while (true)
    {
        std::cout << "Enter minutes (mm):";
        std::string input_minutes;
        std::getline(std::cin, input_minutes);

        time.minutes = stoi(input_minutes);

        if (time.minutes < 0 || time.minutes > 59) {
            std::cout << "Invalid minutes, try again\n";
        } else {
            break;
        }
    }
    
    std::cout << '\n';
    return time;
}