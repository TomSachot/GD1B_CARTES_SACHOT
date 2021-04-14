#include "Monstre.cpp"
#include <iostream>
#include <string>

int main(){

    bool partiegagnee = false;
    Cartes jeu = Monstre();


    while(!partiegagnee){
        jeu.attaqueMonstre1;
        partiegagnee = jeu.testVictoire();
        jeu.attaqueMonstre2;
        partiegagnee = jeu.testVictoire();
        jeu.finTour;
    }


    return 0;
}