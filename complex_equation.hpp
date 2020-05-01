# pragma once
#include "solver.hpp"
#include <complex>
namespace solver {

    class complex_equation{ // ax^2 + bx + c
        	std::complex<double> a, ,b, c;
	        ComplexVariable* x;

            public:
                complex_equation(){}
	            complex_equation(std::complex<double> c) : a(0), b(0), c(c), x(0) {}
	            complex_equation(ComplexVariable& v) : a(0), b(1), c(0), x(&v) {}
                complex_equation(ComplexVariable& v, char q) : a(1), b(0), c(0), x(&v) {}
            };

    complex_equation operator + (complex_equation A, complex_equation B);
    complex_equation operator - (complex_equation A, complex_equation B);
    complex_equation operator * (complex_equation A, complex_equation B);
    complex_equation operator / (complex_equation A, complex_equation B);
    complex_equation operator ^ (complex_equation A, complex_equation B);
    complex_equation operator == (complex_equation A, complex_equation B);

}