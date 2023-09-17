# workhours - A simple tool for calculating length of a workday

## Description
This project 
- asks the user to enter start and end time of working day 
- calculates working time and presents it in
  - hours and minutes, including and excluding lunch (defaulted to 30 minutes)
  - decimal hours with precision of 0.25 (15 minutes)
 
## Instructions
Compile and run on linux at project directory:

$ g++ main.cpp src/time.cpp -o time

$ ./time

## TO-DO
- improve error handling
- add tests
- build with cmake
- GUI
- cross-platform functionality and/or instructions

## Possible new features
- save data to file
- enter hours for a week at once
- keep track of weekly/monthly/total hours ?
