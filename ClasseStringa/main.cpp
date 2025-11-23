#include "stringa.h"

int main()
{
    stringa test1 = "asd";
    stringa test2 = "qwerty";

    test2.Reverse();
    test1 << test2;
    
    test1.Stampa();
}