#include "solver.hpp"
#include <iostream>

namespace solver {


    double solve(RealVariable){
      return 0;
    }

    std::complex<double> solve(ComplexVariable){
      std::complex<double> s = 0;
      return s;
    }


    RealVariable& operator * (RealVariable& rv, double d){
      return rv;
    }
    RealVariable& operator * (double d, RealVariable& rv){
      return rv;
    }
    RealVariable& operator * (RealVariable& rv1,RealVariable& rv2){
      return rv1;
    }

    RealVariable& operator - (RealVariable& rv, double m){
      return rv;
    }
    RealVariable& operator - (double m, RealVariable& rv){
      return rv;
    } 
     RealVariable& operator - (RealVariable& rv1,RealVariable& rv2){
      return rv1;
    }

    RealVariable& operator + (double m, RealVariable& rv){
      return rv;
    }
    RealVariable& operator + (RealVariable& rv, double m){
      return rv;
    }
     RealVariable& operator + (RealVariable& rv1,RealVariable& rv2){
      return rv1;
    }

    RealVariable& operator / (double m, RealVariable& rv){
      return rv;
    }
    RealVariable& operator / (RealVariable& rv, double m){
      return rv;
    }
    RealVariable& operator / (RealVariable& rv1,RealVariable& rv2){
      return rv1;
    }

    RealVariable& operator ^ (RealVariable& rv,double m){
      return rv;
    }
    RealVariable& operator == (double m, RealVariable& rv){
      return rv;
    }
    RealVariable& operator == (RealVariable& rv, double m){
      return rv;
    }
    RealVariable& operator == (RealVariable& rv1,RealVariable& rv2){
      return rv1;
    }


    //operators overloading ComplexVaribale
    ComplexVariable& operator * (ComplexVariable& rv, std::complex<double> d){
      return rv;
    }
    ComplexVariable& operator * (std::complex<double> d, ComplexVariable& rv){
      return rv;
    }
    ComplexVariable& operator * (ComplexVariable& rv1,ComplexVariable& rv2){
      return rv1;
    }


    ComplexVariable& operator - (ComplexVariable& rv, std::complex<double> m){
      return rv;
    }
    ComplexVariable& operator - (std::complex<double> m, ComplexVariable& rv){
      return rv;
    }  
    ComplexVariable& operator - (ComplexVariable& rv1,ComplexVariable& rv2){
      return rv1;
    }


    ComplexVariable& operator + (std::complex<double> m, ComplexVariable& rv){
      return rv;
    }
    ComplexVariable& operator + (ComplexVariable& rv, std::complex<double> m){
      return rv;
    }
     ComplexVariable& operator + (ComplexVariable& rv1,ComplexVariable& rv2){
      return rv1;
    }


    ComplexVariable& operator / (std::complex<double> m, ComplexVariable& rv){
      return rv;
    }
    ComplexVariable& operator / (ComplexVariable& rv, std::complex<double> m){
      return rv;
    }
    ComplexVariable& operator / (ComplexVariable& rv1,ComplexVariable& rv2){
      return rv1;
    }
    
    ComplexVariable& operator ^ (ComplexVariable& rv,std::complex<double> m){
      return rv;
    }

    ComplexVariable& operator == (std::complex<double> m, ComplexVariable& rv){
      return rv;
    }
    ComplexVariable& operator == (ComplexVariable& rv, std::complex<double> m){
      return rv;
    }
    ComplexVariable& operator == (ComplexVariable& rv1,ComplexVariable& rv2){
      return rv1;
    }


}