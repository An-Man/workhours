#include "../include/time.h"

void Workday::calculate_length() {
    int total_minutes {((end.hours * 60) + end.minutes) - ((start.hours * 60) + start.minutes)};
    length = static_cast<float>(total_minutes) / 60.0f;
}

void Workday::print_length() {
    std::cout << "Workday total: " << length << '\n';
    std::cout << "Workday minus 30 min lunch: " << length - 0.50f << '\n'; 
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