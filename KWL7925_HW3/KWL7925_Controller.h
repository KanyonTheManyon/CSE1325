#ifndef KWL7925_CONTROLLER_H
#define KWL7925_CONTROLLER_H
#include "KWL7925_View.h"

#include "KWL7925_Pea_Plant_Trait_Maps.h"
#include "KWL7925_View.h"
#include "KWL7925_Pea_Plant.h"

class Controller
{
    public:
		Controller();
        Controller(Pea_Plant& pp, View& v);
        void cli();
        void execute_cmd(int cmd);
        void add_trait();

    private:
        Pea_Plant pea_plant;
        View view;
        Pea_Plant_Trait pptm;
};

#endif // KWL7925_CONTROLLER_H
