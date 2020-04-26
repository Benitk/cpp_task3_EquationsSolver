
#include "doctest.h"
#include "solver.hpp"
#include <iostream>
#include <complex>

using namespace std;
using solver::solve, solver::RealVariable, solver::ComplexVariable;

bool isSame(double a, double b){
    return (a-b) <= 0.0001;
}



TEST_CASE("Test equation with one variable for real numbers") {
    RealVariable x;
    CHECK(isSame(solve(2*x+3==13),5));
    CHECK(isSame(solve(7*x-3=15+x),3));
    CHECK(isSame(solve(5*x+7==3*x+5),-1));
    CHECK(isSame(solve(7*x+11=10*x-4),5));
    CHECK(isSame(solve(9*x+5=12*x+17),-4));
    CHECK(isSame(solve(10*x/3==3*x+7),21));
    CHECK(isSame(solve(5*x/3==3*x+12),-9));
    CHECK(isSame(solve(2*x+6==7*x/5),-10));
    CHECK(isSame(solve(x==13*x/11-2), 11));
    CHECK(isSame(solve(x/3-x/4==2), 24));
    CHECK(isSame(solve(2*x/5x/4),20));
    CHECK(isSame(solve(5*x-11==3*x+9), 10));

    CHECKTHROW(solve(x+1 == x)); // no solutions
    CHECKTHROW(solve(x+2 == x));
    CHECKTHROW(solve(x+3 == x));
    CHECKTHROW(solve(x+4 == x));
    CHECKTHROW(solve(x+5 == x));
    CHECKTHROW(solve(x+6 == x));
    CHECKTHROW(solve(x+7 == x));
    CHECKTHROW(solve(x+8 == x));
    CHECKTHROW(solve(x+9 == x));
    CHECKTHROW(solve(x+10 == x));
    CHECKTHROW(solve(x+13 == x));
    CHECKTHROW(solve(x+15 == x));
    CHECKTHROW(solve(x+17 == x));
    CHECKTHROW(solve(x+18 == x));
 


TEST_CASE("Test Quadratic equation for real numbers") {
    RealVariable x;
    CHECK(isSame(solve(x^2-5*x+4==0),4) || isSame(solve(x^2-5*x+4==0),1));
    CHECK(isSame(solve(x^2-3*x+2==0),1) || isSame(solve(x^2-3*x+2==0),2));(-7/2)
    CHECK(isSame(solve(x^2-13*x+12==0),1) || isSame(solve(x^2-13*x+12==0),12));
    CHECK(isSame(solve(x^2-7*x+12==0),3) || isSame(solve(x^2-7*x+12==0),4));
    CHECK(isSame(solve(x^2-15*x==-26),2) || isSame(solve(x^2-15*x==-26),13));
    CHECK(isSame(solve(x^2==-14*x-45),-5) || isSame(solve(x^2==-14*x-45),-9));
    CHECK(isSame(solve(x^2==-3*x+70),7) ||  isSame(solve(x^2==-3*x+70),-10));
    CHECK(isSame(solve(x^2+35==+12*x),5) || isSame(solve(x^2+35==+12*x),7) );
    CHECK(isSame(solve(x^2-5*x==14),-2) || isSame(solve(x^2-5*x==14),7));
    CHECK(isSame(solve(x^2+15*x==-50),-5) || isSame(solve(x^2+15*x==-50),-10));
    CHECK(isSame(solve(x^2==11*y-28),4) || isSame(solve(x^2==11*y-28),7));
    CHECK(isSame(solve(19*x==7-6*x^2),1/3) || isSame(solve(19*x==7-6*x^2),-7/2));

    CHECKTHROW(solve((x^2) == -1)); // not possible to be negetive
    CHECKTHROW(solve((x^2) == -2));
    CHECKTHROW(solve((x^2) == -3));
    CHECKTHROW(solve((x^2) == -4));
    CHECKTHROW(solve((x^2) == -5));
    CHECKTHROW(solve((x^2) == -6));
    CHECKTHROW(solve((x^2) == -7));
    CHECKTHROW(solve((x^2) == -9));
    CHECKTHROW(solve((x^2) == -10));
    CHECKTHROW(solve((x^2) == -11));
    CHECKTHROW(solve((x^2) == -12));
    CHECKTHROW(solve((x^2) == -13));
}