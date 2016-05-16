# time_invocation
C++ utility for measuring the mean time of a function call

# Usage

```
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

```

# API

```
template<class Duration, class Clock, class Function, class... Args>
Duration time_invocation_in(const Clock& clock, std::size_t num_trials, Function&& f, Args&&... args);

template<class Function, class... Args>
std::size_t time_invocation_in_nanoseconds(std::size_t num_trials, Function&& f, Args&&... args);

template<class Function, class... Args>
std::size_t time_invocation_in_microseconds(std::size_t num_trials, Function&& f, Args&&... args);

template<class Function, class... Args>
std::size_t time_invocation_in_milliseconds(std::size_t num_trials, Function&& f, Args&&... args);

template<class Function, class... Args>
std::size_t time_invocation_in_seconds(std::size_t num_trials, Function&& f, Args&&... args);
```

