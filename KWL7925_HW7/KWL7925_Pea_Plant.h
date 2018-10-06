#ifndef KWL7925_PEA_PLANT_H
#define KWL7925_PEA_PLANT_H
#include "KWL7925_Trait.h"


class Pea_Plant
{
    public:
        Pea_Plant();
        void view_all_traits();
        void add_seed_color(Trait t);
        void add_seed_shape(Trait t);
        void add_pod_color(Trait t);
        void add_pod_shape(Trait t);
        void add_flower_color(Trait t);
        void add_flower_position(Trait t);
        void add_plant_height(Trait t);

    private:
        Trait seed_color;
        Trait seed_shape;
        Trait pod_color;
        Trait pod_shape;
        Trait flower_color;
        Trait flower_position;
        Trait plant_height;
};

#endif // KWL7925_PEA_PLANT_H
