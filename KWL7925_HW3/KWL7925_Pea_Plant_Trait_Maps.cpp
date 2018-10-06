#include "KWL7925_Pea_Plant_Trait_Maps.h"

Pea_Plant_Trait::Pea_Plant_Trait()
{
	
	Allele ss1 = { 'R', true};
	Allele ss2 = { 'r', false };
	Allele sc1 = { 'Y', true };
	Allele sc2 = { 'y', false };
	Allele ps1 = { 'I', true };
	Allele ps2 = { 'i', false };
	Allele pc1 = { 'G', true };
	Allele pc2 = { 'g', false };
	Allele fc1 = { 'P', true };
	Allele fc2 = { 'p', false };
	Allele fp1 = { 'A', true };
	Allele fp2 = { 'a', false };
	Allele ph1 = { 'T', true };
	Allele ph2 = { 't', false };

	Genotype ssg1 = { ss1, ss1 }; //Round
	Genotype ssg2 = { ss1, ss2 }; //Round
	Genotype ssg3 = { ss2, ss2 }; //Wrinkled
	Genotype scg1 = { sc1, sc1 }; //Yellow
	Genotype scg2 = { sc1, sc2 }; //Yellow
	Genotype scg3 = { sc2, sc2 }; //Green
	Genotype psg1 = { ps1, ps1 }; //Inflated
	Genotype psg2 = { ps1, ps2 }; //Inflated
	Genotype psg3 = { ps2, ps2 }; //Constricted
	Genotype pcg1 = { pc1, pc1 }; //Green
	Genotype pcg2 = { pc1, pc2 }; //Green
	Genotype pcg3 = { pc2, pc2 }; //Yellow
	Genotype fcg1 = { fc1, fc1 }; //Purple
	Genotype fcg2 = { fc1, fc2 }; //Purple
	Genotype fcg3 = { fc2, fc2 }; //White
	Genotype fpg1 = { fp1, fp1 }; //Axial
	Genotype fpg2 = { fp1, fp2 }; //Axial
	Genotype fpg3 = { fp2, fp2 }; //Terminal
	Genotype phg1 = { ph1, ph1 }; //Tall
	Genotype phg2 = { ph1, ph2 }; //Tall
	Genotype phg3 = { ph2, ph2 }; //Short

	seed_shape.insert(make_pair(ssg1, "Round"));
	seed_shape.insert(make_pair(ssg2, "Round"));
	seed_shape.insert(make_pair(ssg3, "Wrinkled"));
	seed_color.insert(make_pair(scg1, "Yellow"));
	seed_color.insert(make_pair(scg2, "Yellow"));
	seed_color.insert(make_pair(scg3, "Green"));
	pod_shape.insert(make_pair(psg1, "Inflated"));
	pod_shape.insert(make_pair(psg2, "Inflated"));
	pod_shape.insert(make_pair(psg3, "Constricted"));
	pod_color.insert(make_pair(pcg1, "Green"));
	pod_color.insert(make_pair(pcg2, "Green"));
	pod_color.insert(make_pair(pcg3, "Yellow"));
	flower_color.insert(make_pair(fcg1, "Purple"));
	flower_color.insert(make_pair(fcg2, "Purple"));
	flower_color.insert(make_pair(fcg3, "White"));
	flower_position.insert(make_pair(fpg1, "Axial"));
	flower_position.insert(make_pair(fpg2, "Axial"));
	flower_position.insert(make_pair(fpg3, "Terminal"));
	plant_height.insert(make_pair(phg1, "Tall"));
	plant_height.insert(make_pair(phg2, "Tall"));
	plant_height.insert(make_pair(phg3, "Short"));

}

string Pea_Plant_Trait::get_seed_shape_phenotype(Genotype genotype) {
	map<Genotype, string>::iterator it = seed_shape.begin();
	for (; it != seed_shape.end(); it++){
		if (it->first.get_allele_one().get_letter() == genotype.get_allele_one().get_letter())
			if (it->first.get_allele_two().get_letter() == genotype.get_allele_two().get_letter())
				return it->second;
	}
}

string Pea_Plant_Trait::get_seed_color_phenotype(Genotype genotype){
	map<Genotype, string>::iterator it = seed_color.begin();
	for (; it != seed_color.end(); it++) {
		if (it->first.get_allele_one().get_letter() == genotype.get_allele_one().get_letter())
			if (it->first.get_allele_two().get_letter() == genotype.get_allele_two().get_letter())
				return it->second;
	}
}

string Pea_Plant_Trait::get_pod_shape_phenotype(Genotype genotype){
	map<Genotype, string>::iterator it = pod_shape.begin();
	for (; it != pod_shape.end(); it++) {
		if (it->first.get_allele_one().get_letter() == genotype.get_allele_one().get_letter())
			if (it->first.get_allele_two().get_letter() == genotype.get_allele_two().get_letter())
				return it->second;
	}
}

string Pea_Plant_Trait::get_pod_color_phenotype(Genotype genotype){
	map<Genotype, string>::iterator it = pod_color.begin();
	for (; it != pod_color.end(); it++){
		if (it->first.get_allele_one().get_letter() == genotype.get_allele_one().get_letter())
			if (it->first.get_allele_two().get_letter() == genotype.get_allele_two().get_letter())
				return it->second;
	}
}

string Pea_Plant_Trait::get_flower_color_phenotype(Genotype genotype){
	map<Genotype, string>::iterator it = flower_color.begin();
	for (; it != flower_color.end(); it++) {
		if (it->first.get_allele_one().get_letter() == genotype.get_allele_one().get_letter())
			if (it->first.get_allele_two().get_letter() == genotype.get_allele_two().get_letter())
				return it->second;
	}
}

string Pea_Plant_Trait::get_flower_position_phenotype(Genotype genotype) {
	map<Genotype, string>::iterator it = flower_position.begin();
	for (; it != flower_position.end(); it++){
		if (it->first.get_allele_one().get_letter() == genotype.get_allele_one().get_letter())
			if (it->first.get_allele_two().get_letter() == genotype.get_allele_two().get_letter())
				return it->second;
	}
}

string Pea_Plant_Trait::get_plant_height_phenotype(Genotype genotype) {
	map<Genotype, string>::iterator it = plant_height.begin();
	for (; it != plant_height.end(); it++){
		if (it->first.get_allele_one().get_letter() == genotype.get_allele_one().get_letter())
			if (it->first.get_allele_two().get_letter() == genotype.get_allele_two().get_letter())
				return it->second;
	}
}
