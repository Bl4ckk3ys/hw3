#include <iostream>
#include "Fraction.h"

int main(){
    Fraction fract1 = Fraction(1,2);
    Fraction fract2 = Fraction(1,2);
    Fraction res1 = fract1+fract2;
    std::cout<< res1 << std::endl;
    
    bool res2 = fract1 < fract2;
    std::cout<< res2 << std::endl;
    
    bool res3 = fract1 <= fract2;
    std::cout<< res3 << std::endl;
    
    bool res4 = fract1 > fract2;
    std::cout<< res4 << std::endl;
    
    bool res5 = fract1 >= fract2;
    std::cout<< res5 << std::endl;

    bool res6 = fract1 == fract2;
    std::cout<< res6 << std::endl;

    bool res7 = fract1 != fract2;
    std::cout<< res7 << std::endl;
    
    Fraction fract3 = Fraction(1,2);
    std::cout << ++fract3 << std::endl;

    Fraction fract4 = Fraction(1,2);
    std::cout << fract4++ << std::endl;
    
    Fraction fract5 = Fraction(1,2);
    std::cout << ~fract5 << std::endl;

}