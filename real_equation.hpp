# pragma once

# include "solver.hpp"
# include <iostream>

namespace solver {

    class real_equation {  // form: ax^2+bx+c

        double a, b, c;
        RealVariable* x;

        public:
        
        // constructors
        real_equation() {}
        real_equation(double c): a(0), b(0), c(c), x(0) {}
        real_equation(RealVariable& x): a(0), b(1), c(0), x(&x) {}
        real_equation(RealVariable& x, char q): a(1), b(0), c(0), x(&x) {}
    };

    // operators overloading
    real_equation operator + (real_equation A, real_equation B);
    real_equation operator - (real_equation A, real_equation B);
    real_equation operator * (real_equation A, real_equation B);
    real_equation operator / (real_equation A, real_equation B);
    void operator == (real_equation A, real_equation B);
}