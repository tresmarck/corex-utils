#ifndef COREX_UTILS_RANDOM_HPP
#define COREX_UTILS_RANDOM_HPP

#include <random>

namespace cx
{
  template <class T>
  T generateRandomInt(std::uniform_int_distribution<T> distribution)
  {
    std::random_device randDevice;
    std::mt19937 mt(randDevice());

    return distribution(mt);
  }

  template <class T>
  T generateRandomReal(std::uniform_real_distribution<T> distribution)
  {
    std::random_device randDevice;
    std::mt19937 mt(randDevice());

    return distribution(mt);
  }
}

#endif
