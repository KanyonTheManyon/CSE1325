#include "KWL7925_Pea_Plant.h"
#include <sstream>

Pea_Plant::Pea_Plant()
{
	Allele a1 = { ' ', false };
	Genotype g1 = { a1, a1 };

	seed_color = { "Seed Color", g1, "" };
	seed_shape = { "Seed Shape", g1, "" };
	pod_color = { "Pod Color", g1, "" };
	pod_shape = { "Pod Shape", g1, "" };
	flower_color = { "Flower Color", g1, "" };
	flower_position = { "Flower Position", g1, "" };
	plant_height = { "Plant Height", g1, "" };

	
}

 void Pea_Plant::view_all_traits(){


	 cout << seed_color << endl;
	 cout << seed_shape << endl;
	 cout << pod_color << endl;
	 cout << pod_shape << endl;
	 cout << flower_color << endl;
	 cout << flower_position << endl;
	 cout << plant_height << endl;
	 
 }


void Pea_Plant::add_seed_color(Trait t){
	seed_color = t;
}


void Pea_Plant::add_seed_shape(Trait t){
	seed_shape = t;
}


void Pea_Plant::add_pod_color(Trait t){
	pod_color = t;
}


void Pea_Plant::add_pod_shape(Trait t){
	pod_shape = t;
}


void Pea_Plant::add_flower_color(Trait t){
	flower_color = t;
}


void Pea_Plant::add_flower_position(Trait t){
	flower_position = t;
}


void Pea_Plant::add_plant_height(Trait t){
	plant_height = t;
}
