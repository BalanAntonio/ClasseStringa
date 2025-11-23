#include "stringa.h"
#include <iostream>

int main()
{
    stringa test1 = "Prima stringa";
    stringa test2 = "Seconda stringa";

    test2.Reverse();
    test2.Flip();
    test1 << test2;
    
    std::cout<< test1.Stampa();
}