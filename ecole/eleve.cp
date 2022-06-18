#include "eleve.h"
void eleve::ajoutnote(float n){
notes.push_back(n);
}
void eleve::enlevedernierenote(){
    notes.pop_back();
}
void eleve::enleveunenote(int i){
    int j=0;
    if(i<notes.size()){
    for( j=0;j!=i && j!=notes.size();j++) ;
    if(i==j) {
        j=0;
        list<float>::iterator it;
for(it=notes.begin()
    ;j!=i && it!=notes.end()
        ;it++,j++);
notes.erase(it);
return;
    }}
    cout<<"la note inexistante !!!!!!!!!!!"<<endl;
}

int eleve::getnbrnote(){
    return notes.size();
}
float eleve::getnote(int i){
    int j=0;
    for( j=0;j!=i;j++) ;
    if(j!=notes.size() && i==j) {
        j=0;
        list<float>::iterator it;
for(it=notes.begin()
    ;j==i
        ;++it,j++);
return *it;
    }
    return -1;
}
float eleve::getmoyenne(){
    float m=0;
    list<float>::iterator it;
for(it=notes.begin();it!=notes.end();++it)
    m+=*it/this->getnbrnote();
return m;
}
float eleve::getnotemax(){
  float max;
 list<float>::iterator it=notes.begin();
 max=*it;
 for(;it!=notes.end();++it)
     if(max<*it) max=*it;
 return max;
}
float eleve::getnotmin(){
  float max;
 list<float>::iterator it=notes.begin();
 max=*it;
 for(;it!=notes.end();++it)
     if(max>*it) max=*it;
 return max;
}
void eleve::afficher(){
    cout<<"********************************************************************"<<endl;
   personne::afficher();
    list<float>::iterator it=notes.begin();
    for(int i = 0;it!=notes.end();++it,i++)
 cout<<"la valeur de l'indice "<<i<<" est : "<<*it<<endl;
       cout<<"*********************************************************************************"<<endl;
}

















