#include "classe.h"
#include<string.h>
void  classe::ajoutereleve(string a, string b){
personne * x =new eleve(a,b);
per.push_back(*x);
eleve * n;
n=dynamic_cast<eleve * > (x);
elv.push_back(*n);
}
void  classe::ajouterprofesseur(string a, string b , string c){
//personne *x= new professeur (a,b,c);
//per.push_back(*x);
//professeur * n;
//n=dynamic_cast<professeur * > (x);
//prof.push_back(*n);
    professeur x(a,b,c);
    per.push_back(x);
    prof.push_back(x);
}
void classe::listpersonne(){
    list<personne>::iterator it;
    for(it=per.begin();it!=per.end();it++)
        it->afficher();
}
void classe::listeleve(){
    list<eleve>::iterator it;
    for(it=elv.begin();it!=elv.end();it++)
        it->afficher();
}
void classe::listprof(){
    list<professeur>::iterator it;
    for(it=prof.begin();it!=prof.end();it++)
    {it->afficher();}
}
void classe::enlevederniereleve(){
    elv.pop_back();
}

void classe::enlevedernierprof(){
    prof.pop_back();
}
void classe::ajouternote(float a , string b){
    list<eleve>::iterator it = elv.begin();
for(;it!=elv.end() && b.compare(it->getnom())==0 ;it++)
{it->ajoutnote(a);return;}
cout<<"l'eleve inexistant !!!!!!!!!!!!!"<<endl;return;
}
void classe::enlevenote(int i , string a){
   this->rechercheeleve(a).enleveunenote(i);

}
eleve  classe::rechercheeleve(string  a){
    list<eleve>::iterator it=elv.begin();
    for(; a.compare(it->getnom())!= 0  && it!=elv.end(); it++);
    if( a.compare(it->getnom())==0) {
        it->afficher();return *it;
    }
    cout<<"l'eleve inexistant!!!!!"<<endl;
}
