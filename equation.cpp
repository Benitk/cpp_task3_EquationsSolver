#include "solver.hpp"
#include "equation.hpp"

namespace solver {

    // ax^2 + bx + c
    equation operator + (equation A, equation B){ // Same x -> if A.x == 0 or B.x == 0 or A.x == B.x
        equation C;
        C.c = A.c + B.c;
        C.b = A.b+ B.b;
        C.a = A.a + B.a;
        if(A.x != 0)
            C.x = A.x;
        else   
            C.x = B.x;
        return C;
    }

    equation operator - (equation A, equation B){ // Same x -> if A.x == 0 or B.x == 0 or A.x == B.x
        equation C;
        C.c = A.c - B.c;
        C.b = A.b - B.b;
        C.a = A.a - B.a;
        if(A.x != 0)
            C.x = A.x;
        else   
            C.x = B.x;
        return C;
    }

    // ax^2 + bx + c * ax^2 + bx + c
    equation operator * (equation A, equation B){ // Same x -> if A.x == 0 or B.x == 0 or A.x == B.x
        equation C;
        C.c = A.c * B.c;
        C.b = A.b * B.a + A.a * B.b;
        C.a = A.a * B.c + B.a * A.c + A.b * B.b;
        if(A.x != 0)
            C.x = A.x;
        else   
            C.x = B.x;
        return C;
    }

    equation operator / (equation A, equation B){ // assume B.x == 0
        equation C;
	    C.c = A.c / B.c;
	    C.b = A.b / B.c;
        C.a = A.a / B.c;
	    C.x = A.x;
	    return C;
    }

    equation operator ^ (equation A, int B){
        equation C(A.get_x,'q');
        return C;
    }

    void operator == (equation A, equation B){
        equation C = A - B;
        if(C.a == 0)
            C.x = -C.c/C.b;
        else {
            std::complex<double> determinant = C.b*C.b - 4*C.a*C.c;
    
            if (determinant.real >= 0.0) 
                C.x = (-C.b + sqrt(determinant)) / (2*C.a);

            else {
                if(C.isReal)
                    throw std::runtime_error("No Solution to the real numbers");
                else
                    C.x = (-C.b + sqrt(determinant)) / (2*C.a);
            }
        }
    }
}