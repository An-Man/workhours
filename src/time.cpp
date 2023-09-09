#include "../include/time.h"
#include <cmath>

void Workday::calculate_length() {
    int total_minutes {((end.hours * 60) + end.minutes) - ((start.hours * 60) + start.minutes)};

    int total_hours {total_minutes/ 60};
    float total_hours_f {static_cast<float>(total_minutes) / 60.0f}; // in decimal form

    length_in_hh_mm.hours = total_hours;
    length_in_hh_mm.minutes = total_minutes - (total_hours * 60);
    
    // multiply by 4 to get quarter hours
    total_hours *= 4.0f;

    // check which is nearest integer, floor or ceiling, and round to it. Ternary operator.
    (total_hours - floorf(total_hours)) <= (ceilf(total_hours) - total_hours) ? 
        total_hours = floorf(total_hours) : total_hours = ceilf(total_hours);

    // divide by 4 to get actual value
    length_in_decimal = total_hours / 4.0f; 
}

void Workday::print_length_in_decimal() {
    std::cout << "Workday total: " << length_in_decimal << '\n';
    std::cout << "Workday minus 30 min lunch: " << length_in_decimal - 0.50f << '\n';
}

void Workday::print_length_in_hh_mm() {
    std::cout << "Workday total: " << length_in_hh_mm.hours << " h " << length_in_hh_mm.minutes << "min\n";
    std::cout << "Workday minus 30 min lunch: " << length_in_hh_mm_no_lunch.hours << " h " << length_in_hh_mm_no_lunch.minutes << "min\n"; 
}

Time ask_time() {
    Time time;
    std::cout << "Enter hours (hh):";
    std::string input_hours;
    std::getline(std::cin, input_hours);

    std::cout << "Enter minutes (mm):";
    std::string input_minutes;
    std::getline(std::cin, input_minutes);

    time.hours = stoi(input_hours);
    time.minutes = stoi(input_minutes);
    return time;
}