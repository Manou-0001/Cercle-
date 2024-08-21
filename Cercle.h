#ifndef CERCLE_H_INCLUDED
#define CERCLE_H_INCLUDED
#include <string>
using namespace std;

class Cercle
{
    public:
        Cercle();
        void setrayon(float r);
    string nom;
    void afficher();
    private:
        float rayon;
};



#endif // CERCLE_H_INCLUDED
