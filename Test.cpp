#include "doctest.h"
#include "solver.hpp"
#include <iostream>
#include <complex>

using namespace std;
using solver::solve, solver::RealVariable, solver::ComplexVariable;


bool isSame(double a, double b) {
    return fabs(a-b) <= 0.0001;
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
    CHECK(isSame(solve(2*x/5*x/4),20));
    CHECK(isSame(solve(5*x-11==3*x+9), 10));

    CHECK_THROWS(solve(x+1 == x)); // no solutions
    CHECK_THROWS(solve(x+2 == x));
    CHECK_THROWS(solve(x+3 == x));
    CHECK_THROWS(solve(x+4 == x));
    CHECK_THROWS(solve(x+5 == x));
    CHECK_THROWS(solve(x+6 == x));
    CHECK_THROWS(solve(x+7 == x));
    CHECK_THROWS(solve(x+8 == x));
    CHECK_THROWS(solve(x+9 == x));
    CHECK_THROWS(solve(x+10 == x));
    CHECK_THROWS(solve(x+13 == x));
    CHECK_THROWS(solve(x+15 == x));
    CHECK_THROWS(solve(x+17 == x));
    CHECK_THROWS(solve(x+18 == x));
}
 

TEST_CASE("Test Quadratic equation for real numbers") {
    RealVariable x;
    CHECK((isSame(solve(x^2-5*x+4==0),4) || isSame(solve(x^2-5*x+4==0),1)));
    CHECK((isSame(solve(x^2-3*x+2==0),1) || isSame(solve(x^2-3*x+2==0),2)));
    CHECK((isSame(solve(x^2-13*x+12==0),1) || isSame(solve(x^2-13*x+12==0),12)));
    CHECK((isSame(solve(x^2-7*x+12==0),3) || isSame(solve(x^2-7*x+12==0),4)));
    CHECK((isSame(solve(x^2-15*x==-26),2) || isSame(solve(x^2-15*x==-26),13)));
    CHECK((isSame(solve(x^2==-14*x-45),-5) || isSame(solve(x^2==-14*x-45),-9)));
    CHECK((isSame(solve(x^2==-3*x+70),7) ||  isSame(solve(x^2==-3*x+70),-10)));
    CHECK((isSame(solve(x^2+35==12*x),5) || isSame(solve(x^2+35==+12*x),7)));
    CHECK((isSame(solve(x^2-5*x==14),-2) || isSame(solve(x^2-5*x==14),7)));
    CHECK((isSame(solve(x^2+15*x==-50),-5) || isSame(solve(x^2+15*x==-50),-10)));
    CHECK((isSame(solve(x^2==11*x-28),4) || isSame(solve(x^2==11*x-28),7)));
    CHECK((isSame(solve(19*x==7-6*x^2),1/3) || isSame(solve(19*x==7-6*x^2),-7/2)));

    CHECK_THROWS(solve((x^2) == -1)); // not possible to be negetive
    CHECK_THROWS(solve((x^2) == -2));
    CHECK_THROWS(solve((x^2) == -3));
    CHECK_THROWS(solve((x^2) == -4));
    CHECK_THROWS(solve((x^2) == -5));
    CHECK_THROWS(solve((x^2) == -6));
    CHECK_THROWS(solve((x^2) == -7));
    CHECK_THROWS(solve((x^2) == -9));
    CHECK_THROWS(solve((x^2) == -10));
    CHECK_THROWS(solve((x^2) == -11));
    CHECK_THROWS(solve((x^2) == -12));
    CHECK_THROWS(solve((x^2) == -13));
}


TEST_CASE("Test equation with one variable for complex numbers") {
    ComplexVariable y;
    CHECK(solve(y+5i == 2*y+3i) == 0.0+2i);
    CHECK(solve(y+4i == 2*y+3i) == 0.0+1i);
    CHECK(solve(y+33i == 2*y+3i) == 0.0+30i);
    CHECK(solve(y+1i == 2*y+3i) == 0.0-2i);
    CHECK(solve(y+5i == 2*y+3i) == 0.0+2i);
    CHECK(solve(y-1i == 2*y+3i) == 0.0+4i);
    CHECK(solve(y+6i == 2*y+3i) == 0.0+3i);
    CHECK(solve(y+5i == 2*y+3i) == 0.0+2i);
    CHECK(solve(y+2i == 2*y+3i) == 0.0-1i);
    CHECK(solve(y+5i == 2*y+3i) == 0.0+2i);
    CHECK(solve(y-1i == 2*y+3i) == 0.0+4i);
    CHECK(solve(y+6i == 2*y+3i) == 0.0+3i);
    CHECK(solve(y+5i == 2*y+3i) == 0.0+2i);
    CHECK(solve(y+4i == 2*y+3i) == 0.0+1i);

    CHECK_THROWS(solve(y-1 == y));
    CHECK_THROWS(solve(y-1000 == y));
    CHECK_THROWS(solve(y+5 == y+11));
    CHECK_THROWS(solve(y+1 == y));
    CHECK_THROWS(solve(13*y-1 == 13*y));
    CHECK_THROWS(solve(y-15 == y-15));
    CHECK_THROWS(solve(9*y-9 == 9*y));
    CHECK_THROWS(solve(y-10 == y-20));
    CHECK_THROWS(solve(y-3 == y));
    CHECK_THROWS(solve(5*y-3 == 5*y));
    CHECK_THROWS(solve(9*y-9 == 9*y));
}


TEST_CASE("Test Quadratic equation for complex numbers") {
    ComplexVariable y;
    CHECK((solve((y^2) == 16) == 4.0+0i || solve((y^2) == 16) == -4.0+0i));
    CHECK((solve((y^2) == -16) == 0.0+4i || solve((y^2) == -16) == 0.0-4i));
    CHECK((solve((y^2) + 2*y + 4.0 == 20 + 6*y/2 - y) == 4.0+0i || solve((y^2) + 2*y + 4 == 20 + 6*y/2 - y) == -4.0+0i));
    CHECK(solve((y^2) == -1) == 1i);
    CHECK(solve((y^2) == -9) == 3i);
    CHECK(solve((y^2) == -1) == 1i);
    CHECK((solve((y^2) + 4*y + 5 == 0) == -2.0+1i || solve((y^2) + 4*y + 5 == 0) == -2.0-1i));
    CHECK((solve(2*(y^2) - 2*y + 1 == 0) == 0.5+0.5i || solve(2*(y^2) - 2*y + 1 == 0) == 0.5-0.5i));
    CHECK((solve((y^2) == 16) == 4.0+0i || solve((y^2) == 16) == -4.0+0i));
    CHECK((solve((y^2) == -16) == 0.0+4i || solve((y^2) == -16) == 0.0-4i));
    CHECK((solve((y^2) + 2*y + 4 == 20 + 6*y/2 - y) == 4.0+0i || solve((y^2) + 2*y + 4 == 20 + 6*y/2 - y) == -4.0+0i));
    CHECK((solve((y^2) + 4*y + 5 == 0) == -2.0+1i || solve((y^2) + 4*y + 5 == 0) == -2.0-1i));
    CHECK((solve((y^2) == 16) == 4.0+0i || solve((y^2) == 16) == -4.0+0i));
    CHECK((solve((y^2) == -16) == 0.0+4i || solve((y^2) == -16) == 0.0-4i));
    CHECK((solve((y^2) + 2*y + 4 == 20 + 6*y/2 - y) == 4.0+0i || solve((y^2) + 2*y + 4 == 20 + 6*y/2 - y) == -4.0+0i));
    CHECK(solve((y^2) == -1) == 1i);
    CHECK((solve((y^2) + 4*y + 5 == 0) == -2.0+1i || solve((y^2) + 4*y + 5 == 0) == -2.0-1i));
    CHECK((solve(2*(y^2) - 2*y + 1 == 0) == 0.5+0.5i || solve(2*(y^2) - 2*y + 1 == 0) == 0.5-0.5i));
    CHECK((solve((y^2) == 16) == 4.0+0i || solve((y^2) == 16) == -4.0+0i));
    CHECK((solve((y^2) == -16) == 0.0+4i || solve((y^2) == -16) == 0.0-4i));

    CHECK_THROWS(solve(((2*y)^2)-1 == ((2*y)^2)+3));
    CHECK_THROWS(solve(((2*y)^2) == ((2*y)^2)+3));
    CHECK_THROWS(solve(((2*y)^2)-9 == ((2*y)^2)+3));
    CHECK_THROWS(solve(((15*y)^2) == ((15*y)^2)+90));
    CHECK_THROWS(solve(((3*y)^2) == ((3*y)^2)+3));
}