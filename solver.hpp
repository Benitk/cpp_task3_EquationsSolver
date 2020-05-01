# pragma once

# include <iostream>
# include <complex>

namespace solver {
   
    class RealVariable {
        double i;
        public:
            double get_i() { return i; }
            void set_i(double i){i=i;}
    };

    class ComplexVariable {
        std::complex<double> i;
        public:
            std::complex<double> get_i() { return i; }
            void set_i(double i){
                this->i.real=i;
                this->i.imag=0;
            }
    };

    //double solve(RealVariable);
    //std::complex<double> solve(equation);

} 

