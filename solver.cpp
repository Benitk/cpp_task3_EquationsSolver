#include "solver.hpp"
#include <iostream>
#include <complex>

namespace solver {

    ComplexVariable operator + (ComplexVariable A, ComplexVariable B){
        ComplexVariable C;
        C.c = A.c + B.c;
        C.b = A.b + B.b;
        C.a = A.a + B.a;
        return C;
    }

    ComplexVariable operator - (ComplexVariable A, ComplexVariable B){ 
        ComplexVariable C;
        C.c = A.c - B.c;
        C.b = A.b - B.b;
        C.a = A.a - B.a;
        return C;
    }

    // (ax^2 + bx + c) * (ax^2 + bx + c)
    ComplexVariable operator * (ComplexVariable A, ComplexVariable B){ 
        ComplexVariable C;
        C.c = A.c * B.c;
        C.b = A.b * B.c + A.c * B.b;
        C.a = A.a * B.c + B.a * A.c + A.b * B.b;
        return C;
    }

    ComplexVariable operator / (ComplexVariable A, ComplexVariable B){ // assume B.x == 0
      ComplexVariable C;
	    C.c = A.c / B.c;
	    C.b = A.b / B.c;
      C.a = A.a / B.c;
	    return C;
    }

    ComplexVariable operator ^ (ComplexVariable A, ComplexVariable B){
      if(B.c.real() != 2){
         throw std::invalid_argument("Power must be 2");
      }
        ComplexVariable C;
        C.c = 0;
        C.b = 0;
        C.a = 1.0;
        return C;
    }

    ComplexVariable operator == (ComplexVariable A, ComplexVariable B){
        ComplexVariable C = A - B;
        return C;
    }

    std::complex<double> solve(ComplexVariable A){
      std::complex<double> a = A.a;
      std::complex<double> b = A.b;
      std::complex<double> c = A.c;
      std::complex<double> ans;

      if(a.real() == 0.0 && a.imag() == 0.0)
        ans = -c/b;
      else{
         std::complex<double> d = std::sqrt(b*b - 4.0*a*c);
         ans = (- b + d) / (2.0*a);
      }
      return ans;
    }

    
    RealVariable operator + (RealVariable A, RealVariable B){
        RealVariable C;
        C.c = A.c + B.c;
        C.b = A.b + B.b;
        C.a = A.a + B.a;
        return C;
    }

    RealVariable operator - (RealVariable A, RealVariable B){ 
        RealVariable C;
        C.c = A.c - B.c;
        C.b = A.b - B.b;
        C.a = A.a - B.a;
        return C;
    }

    // (ax^2 + bx + c) * (ax^2 + bx + c)
    RealVariable operator * (RealVariable A, RealVariable B){ 
        RealVariable C;
        C.c = A.c * B.c;
        C.b = A.b * B.c + A.c * B.b;
        C.a = A.a * B.c + B.a * A.c + A.b * B.b;
        return C;
    }

    RealVariable operator / (RealVariable A, RealVariable B){ // assume B.x == 0
      RealVariable C;
	    C.c = A.c / B.c;
	    C.b = A.b / B.c;
      C.a = A.a / B.c;
	    return C;
    }

    RealVariable operator ^ (RealVariable A, RealVariable B){
      if(B.c != 2){
         throw std::invalid_argument("Power must be 2");
      }
        RealVariable C;
        C.c = 0;
        C.b = 0;
        C.a = 1.0;
        return C;
    }

    RealVariable operator == (RealVariable A, RealVariable B){
        RealVariable C = A - B;
        return C;
    }

    double solve(RealVariable A){
      double a = A.a;
      double b = A.b;
      double c = A.c;
      double ans;

      if(a == 0.0)
        ans = -c/b;
      else{
        double d = b*b - 4.0*a*c;
        if(d >= 0)
          ans = (- b + std::sqrt(d)) / (2.0*a);
        else
          throw std::runtime_error("No solution to the real numbers");
      }
      return ans;
    }
}