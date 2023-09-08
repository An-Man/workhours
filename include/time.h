#ifndef TIME_H
#define TIME_H
#include <iostream>

struct Time {
    int hours {};
    int minutes {};
};

class Workday {

    public:

        Time start {};
        Time end {};

        void calculate_length();
        void print_length();

    private:

        float length;
};

Time ask_time(); 


#endif