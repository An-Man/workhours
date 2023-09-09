#ifndef TIME_H
#define TIME_H
#include <iostream>
#include <string>

struct Time {
    int hours {};
    int minutes {};
};

class Workday {

    public:

        Time start {};
        Time end {};

        void calculate_length();
        void print_length_in_decimal();
        void print_length_in_hh_mm();

    private:

        float length_in_decimal;
        Time length_in_hh_mm;
        Time length_in_hh_mm_no_lunch;
};

Time ask_time(); 


#endif