#include "time_invocation.hpp"
#include <iostream>

int main()
{
  auto usecs = time_invocation_in_microseconds(10, []
  {
    std::cout << "hello, world!" << std::endl;
  });

  std::cout << "Average time of function is " << usecs << " microseconds" << std::endl;

  return 0;
}

