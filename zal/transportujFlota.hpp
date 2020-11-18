#pragma once

#include "Stocznia.hpp"

unsigned int transportujFlota(unsigned int towar)
{
    unsigned int licznikTowaru{0};
    unsigned int liczniZaglowcow{0};
    if (towar!=0){
        Stocznia stocznia{};

        while(towar<licznikTowaru){
            Statek* s1 = stocznia();
            licznikTowaru += s1->transportuj();
            Zaglowiec* test = dynamic_cast<Zaglowiec*>(s1);
            if(test!=nullptr){
                liczniZaglowcow++;
            }       
            delete s1;
        };
    };
    return liczniZaglowcow;
}