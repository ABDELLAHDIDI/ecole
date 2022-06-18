#ifndef PERSONNE_H
#define PERSONNE_H
#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;

class personne
{
    string    nom ;
  string    prenom  ;
public:
  personne(string a="AA" ,string b="BB" ){
   nom=a;
   prenom=b;
  }
string   getnom(){return nom;}
string   getprenom(){return prenom;}
virtual void afficher(){
    cout<<"nom : "<<this->getnom()<<endl;
    cout<<"prenom :"<<this->getprenom()<<endl;
}
};

#endif // PERSONNE_H
