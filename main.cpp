#include <iostream>

#include "complejo.h"


int main(){

    Complejo<int> variable(4,3);
    std::cout << "Muestro el complejo variable, constructor sin parametro" <<std::endl;
 

    Complejo<int> auxiliar(2,3);
    std::cout << "Muestro el complejo auxiliar, constructor con parametro" <<std::endl;


    
    return 0;
}
