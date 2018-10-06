#ifndef KWL7925_VIEW_H
#define KWL7925_VIEW_H
#include "KWL7925_Pea_Plant.h"
#include <iostream>

class View
{
    public:
		View();
        View(Pea_Plant& pp);
        void get_menu();
        void prompt_for_allele_letter();
        void prompt_for_allele_dominance();
        void prompt_for_trait_name();
        void view_all_traits();

    private:
        Pea_Plant pea_plant;
};

#endif // KWL7925_VIEW_H
