#ifndef KWL7925_PEA_PLANT_TRAIT_MAPS_H
#define KWL7925_PEA_PLANT_TRAIT_MAPS_H
#include "KWL7925_Genotype.h"
#include <map>

using namespace std;

class Pea_Plant_Trait
{
    public:
        Pea_Plant_Trait();
        string get_seed_shape_phenotype(Genotype genotype);
        string get_seed_color_phenotype(Genotype genotype);
        string get_pod_shape_phenotype(Genotype genotype);
        string get_pod_color_phenotype(Genotype genotype);
        string get_flower_color_phenotype(Genotype genotype);
        string get_flower_position_phenotype(Genotype genotype);
        string get_plant_height_phenotype(Genotype genotype);
    private:
        map<Genotype, string> seed_shape;
        map<Genotype, string> seed_color;
        map<Genotype, string> pod_shape;
        map<Genotype, string> pod_color;
        map<Genotype, string> flower_color;
        map<Genotype, string> flower_position;
        map<Genotype, string> plant_height;
};

#endif // KWL7925_PEA_PLANT_TRAIT_MAPS_H
