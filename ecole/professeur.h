#ifndef PROFESSEUR_H
#define PROFESSEUR_H
#include<personne.h>
#include<iostream>
#include<string.h>
using namespace std;
class  professeur : public personne
{
    string    discipline ;
    public:
   professeur(string a="AA" ,string b="BB" ,string d="DD" ):personne(a,b){
  discipline = d;
    }
    string   getdiscipline(){return discipline;}
    void afficher(){
        personne::afficher();
    cout<<"discipline: "<<this->getdiscipline()<<endl;
    }
};

#endif // PROFESSEUR_H
