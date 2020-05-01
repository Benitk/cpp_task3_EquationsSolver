#include "solver.hpp"
#include "complex_equation.hpp"

namespace solver {

    // ax^2 + bx + c
    complex_equation operator + (complex_equation A, complex_equation B){ // Same x -> if A.x == 0 or B.x == 0 or A.x == B.x
        complex_equation C;
        C.c = A.c + B.c;
        C.b = A.b + B.b;
        C.a = A.a + B.a;
        if(A.x != 0)
            C.x = A.x;
        else   
            C.x = B.x;
        return C;
    }
    complex_equation operator - (complex_equation A, complex_equation B){ // Same x -> if A.x == 0 or B.x == 0 or A.x == B.x
        complex_equation C;
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
    complex_equation operator * (complex_equation A, complex_equation B){ // Same x -> if A.x == 0 or B.x == 0 or A.x == B.x
        complex_equation C;
        C.c = A.c * B.c;
        C.b = A.b * B.a + A.a * B.b;
        C.a = A.a * B.c + B.a * A.c + A.b * B.b;
        if(A.x != 0)
            C.x = A.x;
        else   
            C.x = B.x;
        return C;
    }
    complex_equation operator / (complex_equation A, complex_equation B){}
    complex_equation operator ^ (complex_equation A, complex_equation B);
    complex_equation operator == (complex_equation A, complex_equation B);

}