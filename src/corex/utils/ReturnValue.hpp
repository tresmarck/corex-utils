#ifndef COREX_UTILS_RETURN_VALUE_HPP
#define COREX_UTILS_RETURN_VALUE_HPP

#include <corex/utils/ReturnState.hpp>

namespace cx
{
  template <class T>
  struct ReturnValue
  {
    T value;
    ReturnState status;
  };
}

#endif
