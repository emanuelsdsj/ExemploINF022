#include <iostream>
#include <imparpar.h>
#include <string>

int main(int argc, char *argv[])
{
    int numRecebido = atoi(argv[1]);
    std::string resposta = ImparPar::imparOuPar(numRecebido);
    std::cout << resposta;
}
