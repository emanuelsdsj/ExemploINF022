#include <string>
#include "imparpar.h"

std::string ImparPar::imparOuPar(int num)
{
    if(num % 2 == 0)
        return "Num par";
    return "Num impar";
}
