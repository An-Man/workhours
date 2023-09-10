#ifndef TIME_H
#define TIME_H

#include <iostream>
#include <string>

static const int LUNCH_BREAK = 30;

struct Time {
    int hours {};
    int minutes {};
};

class Workday {

    public:

        Time start {};
        Time end {};

        void calculate_lengths();
        void print_start_end();
        void print_length_in_decimal();
        void print_length_in_hh_mm();

    private:

        float length_in_decimal {};
        float length_in_decimal_minus_lunch {};
        Time length_in_hh_mm {};
        Time length_in_hh_mm_minus_lunch {};
};

Time ask_time(); 

#endif