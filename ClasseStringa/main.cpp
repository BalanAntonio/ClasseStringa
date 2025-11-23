#include "stringa.h"

int main()
{
    stringa test1 = "Prima stringa";
    stringa test2 = "Seconda stringa";

    test2.Reverse();
    test2.Flip();
    test1 << test2;
    
    test1.Stampa();
}