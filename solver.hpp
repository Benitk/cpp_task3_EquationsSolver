# pragma once

#include <iostream>
#include <complex>
namespace solver {

   
    class RealVariable {
        double mul, div, plus, minus, power;
        
        public:

            RealVariable(){
                div=mul=power=1;
                plus=minus=0;
            }

        //getters
        double getMul(){return mul;}
        double getDiv(){return div;}
        double getPlus(){return plus;}
        double getMinus(){return minus;}
        double getPower(){return power;}

        //setters
        void setMul(double mul){ this->mul=mul; }
        void setDiv(double div){ this->div=div; }
        void setPlus(double plus){ this->plus=plus; }
        void setMinus(double minus){ this->minus=minus; }
        void setPower(double power){ this->power=power; }
 

    };

    class ComplexVariable {

    };


    //operators overloading RealVaribale

    RealVariable& operator * (RealVariable& rv, double d);
    RealVariable& operator * (double d, RealVariable& rv);
    RealVariable& operator * (RealVariable& rv1,RealVariable& rv2);


    RealVariable& operator - (RealVariable& rv, double m);
    RealVariable& operator - (double m, RealVariable& rv);  
    RealVariable& operator - (RealVariable& rv1,RealVariable& rv2);


    RealVariable& operator + (double m, RealVariable& rv);
    RealVariable& operator + (RealVariable& rv, double m);
    RealVariable& operator + (RealVariable& rv1,RealVariable& rv2);


    RealVariable& operator / (double m, RealVariable& rv);
    RealVariable& operator / (RealVariable& rv, double m);
    RealVariable& operator / (RealVariable& rv1,RealVariable& rv2);
    
    RealVariable& operator ^ (RealVariable& rv,double m);
    RealVariable& operator ^ (double m, RealVariable& rv);
    RealVariable& operator ^ (RealVariable& rv1,RealVariable& rv2);


    RealVariable& operator == (double m, RealVariable& rv);
    RealVariable& operator == (RealVariable& rv, double m);
    RealVariable& operator == (RealVariable& rv1,RealVariable& rv2);

    
    //operators overloading ComplexVaribale
    ComplexVariable& operator * (ComplexVariable& rv, std::complex<double> d);
    ComplexVariable& operator * (std::complex<double> d, ComplexVariable& rv);
    ComplexVariable& operator * (ComplexVariable& rv1,ComplexVariable& rv2);


    ComplexVariable& operator - (ComplexVariable& rv, std::complex<double> m);
    ComplexVariable& operator - (std::complex<double> m, ComplexVariable& rv);  
    ComplexVariable& operator - (ComplexVariable& rv1,ComplexVariable& rv2);


    ComplexVariable& operator + (std::complex<double> m, ComplexVariable& rv);
    ComplexVariable& operator + (ComplexVariable& rv, std::complex<double> m);
    ComplexVariable& operator + (ComplexVariable& rv1,ComplexVariable& rv2);


    ComplexVariable& operator / (std::complex<double> m, ComplexVariable& rv);
    ComplexVariable& operator / (ComplexVariable& rv, std::complex<double> m);
    ComplexVariable& operator / (ComplexVariable& rv1,ComplexVariable& rv2);
    
    ComplexVariable& operator ^ (ComplexVariable& rv,std::complex<double> m);
    ComplexVariable& operator ^ (std::complex<double> m, ComplexVariable& rv);
    ComplexVariable& operator ^ (ComplexVariable& rv1,ComplexVariable& rv2);

    ComplexVariable& operator == (std::complex<double> m, ComplexVariable& rv);
    ComplexVariable& operator == (ComplexVariable& rv, std::complex<double> m);
    ComplexVariable& operator == (ComplexVariable& rv1,ComplexVariable& rv2);


    std::complex<double> operator + (int, std::complex<double> m);

    std::complex<double> operator + (std::complex<double> m,int);

    std::complex<double> operator - (int, std::complex<double> m);
    std::complex<double> operator - (std::complex<double> m,int);
  






    double solve(RealVariable);
    std::complex<double> solve(ComplexVariable);

} 

