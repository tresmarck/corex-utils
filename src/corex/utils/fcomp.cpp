#include <algorithm>
#include <cmath>

#include <corex/utils/fcomp.hpp>

namespace cx
{
  bool floatEquals(float x, float y, float tolerance)
  {
    return fabs(x - y)
           <= (tolerance * std::max(std::max(fabs(x), fabs(y)), 1.0f));
  }

  bool floatAbsEquals(float x, float y, float tolerance)
  {
    return fabs(x - y) <= tolerance;
  }

  bool floatRelEquals(float x, float y, float tolerance)
  {
    return fabs(x - y) <= (tolerance * std::max(fabs(x), fabs(y)));
  }

  bool floatGreEqual(float x, float y, float tolerance)
  {
    return (x > y) || floatEquals(x, y, tolerance);
  }

  bool floatAbsGreEqual(float x, float y, float tolerance)
  {
    return (x > y) || floatAbsEquals(x, y, tolerance);
  }

  bool floatRelGreEqual(float x, float y, float tolerance)
  {
    return (x > y) || floatRelEquals(x, y, tolerance);
  }

  bool floatLessEqual(float x, float y, float tolerance)
  {
    return (x < y) || floatEquals(x, y, tolerance);
  }

  bool floatAbsLessEqual(float x, float y, float tolerance)
  {
    return (x < y) || floatAbsEquals(x, y, tolerance);
  }

  bool floatRelLessEqual(float x, float y, float tolerance)
  {
    return (x < y) || floatRelEquals(x, y, tolerance);
  }

  bool floatGreater(float x, float y, float tolerance)
  {
    return !floatEquals(x, y, tolerance) && x > y;
  }

  bool floatAbsGreater(float x, float y, float tolerance)
  {
    return !floatAbsEquals(x, y, tolerance) && x > y;
  }

  bool floatRelGreater(float x, float y, float tolerance)
  {
    return !floatRelEquals(x, y, tolerance) && x > y;
  }

  bool floatLessThan(float x, float y, float tolerance)
  {
    return !floatEquals(x, y, tolerance) && x < y;
  }

  bool floatAbsLessThan(float x, float y, float tolerance)
  {
    return !floatAbsEquals(x, y, tolerance) && x < y;
  }

  bool floatRelLessThan(float x, float y, float tolerance)
  {
    return !floatRelEquals(x, y, tolerance) && x < y;
  }

  bool isFloatInclusiveBetween(float a, float val, float b)
  {
    if (floatGreater(a, b)) {
      std::swap(a, b);
    }

    return floatLessEqual(a, val) && floatLessEqual(val, b);
  }
}
