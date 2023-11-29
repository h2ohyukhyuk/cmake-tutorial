#include "MathFunctions.h"
#include <iostream>
#include <cmath>

#ifdef USE_MYMATH
#  include "mysqrt.h"
#endif

namespace mathfunctions {
double sqrt(double x)
{
// which square root function should we use?
#ifdef USE_MYMATH
  std::cout << "detail::mysqrt" << std::endl;
  return detail::mysqrt(x);
#else
  std::cout << "std::sqrt" << std::endl;
  return std::sqrt(x);
#endif
}
}