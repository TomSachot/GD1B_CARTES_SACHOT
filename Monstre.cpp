#ifndef MONSTRE_CPP
#define MONSTRE_CPP

#include "Monstre.h"
#include <iostream>

    Monstre::Monstre() :

    void Monstre::attaqueMonstre1(){


    }

    bool Monstre::testVictoire(){
        if(pvMonstre1==0 && pvMonstre2>0){
            std::cout << "Victoire du joueur 2 !";
        }
        if(pvMonstre1>0 && pvMonstre2==0){
            std::cout << "Victoire du joueur 1 !";
        }
        if(pvMonstre1==0 && pvMonstre2==0){
            std::cout << "Egalité..."
        }

    }

    void Monstre::attaqueMonstre2(){


    }

    bool Monstre::testVictoire(){
        if(pvMonstre1==0 && pvMonstre2>0){
            std::cout << "Victoire du joueur 2 !";
        }
        if(pvMonstre1>0 && pvMonstre2==0){
            std::cout << "Victoire du joueur 1 !";
        }
        if(pvMonstre1==0 && pvMonstre2==0){
            std::cout << "Egalité..."
        }

    }

    void Monstre::finTour(){
        
    }