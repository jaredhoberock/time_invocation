#include "time_invocation.hpp"
#include <iostream>

int main()
{
  auto msecs = time_invocation_in_microseconds(10, []
  {
    std::cout << "hello, world!" << std::endl;
  });

  std::cout << "Average time of function is " << msecs << " microseconds" << std::endl;

  return 0;
}

