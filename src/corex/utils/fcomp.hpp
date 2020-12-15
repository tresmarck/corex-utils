#ifndef COREX_UTILS_FCOMP_HPP
#define COREX_UTILS_FCOMP_HPP

#include <limits>

namespace cx
{
  constexpr float float_epsilon = std::numeric_limits<float>::epsilon();

  bool floatEquals(float x, float y, float tolerance = float_epsilon);
  bool floatAbsEquals(float x, float y, float tolerance = float_epsilon);
  bool floatRelEquals(float x, float y, float tolerance = float_epsilon);
  bool floatGreEqual(float x, float y, float tolerance = float_epsilon);
  bool floatAbsGreEqual(float x, float y, float tolerance = float_epsilon);
  bool floatRelGreEqual(float x, float y, float tolerance = float_epsilon);
  bool floatLessEqual(float x, float y, float tolerance = float_epsilon);
  bool floatAbsLessEqual(float x, float y, float tolerance = float_epsilon);
  bool floatRelLessEqual(float x, float y, float tolerance = float_epsilon);
  bool floatGreater(float x, float y, float tolerance = float_epsilon);
  bool floatAbsGreater(float x, float y, float tolerance = float_epsilon);
  bool floatRelGreater(float x, float y, float tolerance = float_epsilon);
  bool floatLessThan(float x, float y, float tolerance = float_epsilon);
  bool floatAbsLessThan(float x, float y, float tolerance = float_epsilon);
  bool floatRelLessThan(float x, float y, float tolerance = float_epsilon);
  bool isFloatInclusiveBetween(float a, float val, float b);
}

#endif
