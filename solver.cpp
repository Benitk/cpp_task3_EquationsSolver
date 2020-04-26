#include "solver.hpp"
#include <iostream>

namespace solver {

  




    RealVariable& operator*(RealVariable &rv, double d){
      rv.setMul(rv.getMul()*d);
      return rv;
     }
    RealVariable& operator*(double d, RealVariable &rv){
      rv.setMul(rv.getMul()*d);
      return rv;
     }
    RealVariable& operator - (RealVariable& rv, double m){
         rv.setMinus(rv.getMinus()-m);
         return rv;
     }

}