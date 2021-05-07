#include <iostream>
#include "complejo.h"

template<class TIPO>
Complejo<TIPO>::Complejo(TIPO re, TIPO im){
    real= re;
    imag= im;
}

template<class TIPO>
void Complejo<TIPO>::setRe(TIPO re){

    real= re;
}

template<class TIPO>
void Complejo<TIPO>::setImag(TIPO im){
    
    imag= im;
}

template<class TIPO>
TIPO Complejo<TIPO>::getRe(){

    return real;
}

template<class TIPO>
TIPO Complejo<TIPO>::getImag(){

    return imag;
}
