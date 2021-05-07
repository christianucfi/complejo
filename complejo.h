#ifndef COMPLEJO_H_
#define COMPLEJO_H_


template<class TIPO>
class Complejo
{
private:
    TIPO real;
    TIPO imag;
public:
    Complejo(TIPO re, TIPO im);

    void setRe(TIPO re);

    void setImag(TIPO im);

    TIPO getRe();

    TIPO getImag();

    


};





#endif
