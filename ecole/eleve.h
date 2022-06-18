#ifndef ELEVE_H
#define ELEVE_H
#include<personne.h>
#include<list>

class eleve : public personne
{
protected :

    list< float >notes;

 public:
      eleve(string a="AA" ,string b="BB"):personne(a,b){}
    void ajoutnote(float );
    void enlevedernierenote();
    void enleveunenote(int);
    int getnbrnote();
    float getnote(int);
    float getmoyenne();
    float getnotemax();
    float getnotmin();
    void afficher();

};

#endif // ELEVE_H
