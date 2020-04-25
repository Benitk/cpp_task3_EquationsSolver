# pragma once

#include <iostream>

namespace solver {

    double solve(RealVariable);
    std::complex<double> solve(ComplexVariable);

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


        friend RealVariable operator* (const RealVariable &c1, const RealVariable &c2);
        friend const RealVariable operator* (const RealVariable& c1, int d);

    };

    class ComplexVariable {

    };
} 
