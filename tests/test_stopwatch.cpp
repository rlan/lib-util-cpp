#include "stopwatch.hpp"

#include <iostream>
#include <math.h>

int main(void) {

  StopWatch sw;
  
  sw.start();
  sw.stop();
  std::cout << sw << std::endl;

  return 0;
}
