#include <iostream>
#include "Cercle.h"
#include <string>
using namespace std;

int main()
{
    Cercle Cer1=Cercle();
    Cer1.nom="Cercle1";
    Cer1.setrayon(4.2);
    Cer1.afficher();
Cercle Cer2=Cercle();
    Cer2.nom="Cercle2";
    Cer2.setrayon(5);
    Cer2.afficher();

    return 0;
}
