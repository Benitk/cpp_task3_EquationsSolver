# pragma once

#include "solver.hpp"
#include <complex>

namespace solver {

    class equation { // ax^2 + bx + c
            
        std::complex<double> a, b, c;
	    ComplexVariable* x;
        bool isReal = false;

        public:

            // constructors
            equation() {}
	        equation(std::complex<double> c) : a(0), b(0), c(c), x(0) {}
	        equation(ComplexVariable& v) : a(0), b(1), c(0), x(&v) {}
            equation(ComplexVariable& v, char q) : a(1), b(0), c(0), x(&v) {}
            equation(RealVariable& v) {
                ComplexVariable temp;
                temp.set_i(v.get_i()); 
                isReal = true;   
                this->a=0;
                this->b=1;
                this->c=0;
                this->x=&temp;        
            }

            equation(RealVariable& v, char q) {
                ComplexVariable temp;
                temp.set_i(v.get_i()); 
                isReal = true;   
                this->a=1;
                this->b=0;
                this->c=0;
                this->x=&temp;   
            }
            
            // getters & setters
            std::complex<double>& a() { return a; }
            const std::complex<double> & a() const { return a; }
            std::complex<double> & b() { return b; }
            const std::complex<double> & b() const { return b; }
            std::complex<double> & c() { return c; }
            const std::complex<double> & c() const { return c; }
            ComplexVariable* get_x() { return x; }
            bool get_isReal() { return isReal; }

            // operators overloading
            friend equation operator + (equation A, equation B);
            friend equation operator - (equation A, equation B);
            friend equation operator * (equation A, equation B);
            friend equation operator / (equation A, equation B);
            friend equation operator ^ (equation A, equation B);
            friend void operator == (equation A, equation B);
    };

    std::complex<double> solve(equation eq) {
        return eq.get_x() -> get_i();
    }
}