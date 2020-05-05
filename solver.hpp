# pragma once

#include <iostream>
#include <complex>
namespace solver {


   
    class RealVariable {
      double a=0.0 ,b=1.0, c=0.0;

      public:
      RealVariable(){}
	    RealVariable(double c) : a(0), b(0), c(c) {}
      
      double get_a(){
        return a;
      }
      double get_b(){
        return b;
      }
      double get_c(){
        return c;
      }

      friend RealVariable operator +  (RealVariable A, RealVariable B);
      friend RealVariable operator -  (RealVariable A, RealVariable B);
      friend RealVariable operator *  (RealVariable A, RealVariable B);
      friend RealVariable operator /  (RealVariable A, RealVariable B);
      friend RealVariable operator ^  (RealVariable A, RealVariable B);
      friend RealVariable operator == (RealVariable A, RealVariable B);         

    };
    class ComplexVariable {
            std::complex<double> a=0.0 ,b=1.0, c=0.0;

             public:
              ComplexVariable(){}
	            ComplexVariable(double c) : a(0), b(0), c(c) {}
              ComplexVariable(std::complex<double> c) : a(0), b(0), c(c) {}

              std::complex<double> get_a(){
                return a;
              }
              std::complex<double> get_b(){
                return b;
              }
              std::complex<double> get_c(){
                return c;
              }

            friend ComplexVariable operator +  (ComplexVariable A, ComplexVariable B);
            friend ComplexVariable operator -  (ComplexVariable A, ComplexVariable B);
            friend ComplexVariable operator *  (ComplexVariable A, ComplexVariable B);
            friend ComplexVariable operator /  (ComplexVariable A, ComplexVariable B);
            friend ComplexVariable operator ^  (ComplexVariable A, ComplexVariable B);
            friend ComplexVariable operator == (ComplexVariable A, ComplexVariable B);
            };


    double solve(RealVariable);
    std::complex<double> solve(ComplexVariable);

} 

