#ifndef MONSTRE.H
#define MONSTRE.H

#include <string>

class Monstre{

    private:
        int attaqueMonstre1;
        int attaqueMonstre2;
        int pvMonstre1;
        int pvMonstre2;
        int _numeroTour;

    public:
        Monstre();
        void attaqueMonstre1();
        bool testVictoire();
        void attaqueMonstre2();
        bool testVictoire();

        void finTour();

};

#endif