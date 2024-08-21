#include "Cercle.h"
#include <iostream>
#include <cmath>
Cercle::Cercle()
{

}
void Cercle::setrayon(float r)
{
    rayon=r;
}
void Cercle:: afficher()
{
    float d,P,A;
    double pi=M_PI;
    d=rayon*2;
    P=rayon*pi*2;
    A=pi*rayon*rayon;
    cout<<"Nom: "<<nom<<endl;
    cout<<"Aire: "<<A<<endl;
    cout<<"Perimetre: "<<P<<endl;
    cout<<"diametre: "<<d<<endl;


}
