#ifndef CLASSE_H
#define CLASSE_H
#include<eleve.h>
#include<professeur.h>
class classe : public eleve , professeur
{
    string nom;
    list<eleve> elv;
    list<professeur> prof;
    list<personne> per;
eleve  rechercheeleve(string  );
  void listpersonne();
public:
    classe(string a="GINF1"){nom=a;}
 string  getnom(){return nom; }
    void  ajoutereleve(string , string );
    void ajouterprofesseur(string , string, string );
      void enlevederniereleve();
        void enlevedernierprof();
        void listeleve();
        void listprof();
        void ajouternote(float , string );
        void enlevenote(int,string);
};

#endif // CLASSE_H
