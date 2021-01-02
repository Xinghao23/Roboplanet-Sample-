#include "main.h"
#include "timing.hpp"

//define timer slot arrays
int start_times[20] = {
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};



//define start timer function
void startTimer(int slot) {
  start_times[slot] = pros::millis();
}


//define get time function 
int getTime(int slot) {
  return (pros::millis() - start_times[slot]);
}
