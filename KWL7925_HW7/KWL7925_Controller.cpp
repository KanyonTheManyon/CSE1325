#include "KWL7925_Controller.h"

Controller::Controller() {}

Controller::Controller(Pea_Plant& pp, View& v) : view(v), pea_plant(pp) {
	
}


void Controller::cli(){

    int cmd = -1;
    while(cmd != 0)
    {
        view.get_menu();
        cin >> cmd;
        execute_cmd(cmd);
    }
}

void Controller::gui() {

	int cmd = -1;
	while (cmd != 0) {
		cmd = view.get_menu();
		execute_cmd(cmd);
	}
}
void Controller::execute_cmd(int cmd){
    switch(cmd)
    {
        case 0 : break;
		case 1: pea_plant.view_all_traits();
            break;
        case 2 : add_trait();
            break;
		default: break;
    }

}


void Controller::add_trait(){
	
	char l1, l2;
	string ans, ans2, name, phen;
	bool b1, b2;


	view.prompt_for_allele_letter();
	cin >> l1;
	view.prompt_for_allele_dominance();
	cin >> ans;
	if (ans=="true")
		b1 = true;
	else
		b1 = false;
	view.prompt_for_allele_letter();
	cin >> l2;
	view.prompt_for_allele_dominance();
	cin >> ans2;
	if (ans2 == "true")
		b2 = true;
	else
		b2 = false;

	Allele a1 = { l1, b1 };
	Allele a2 = { l2, b2 };
	Genotype gen = { a1, a2 };

	view.prompt_for_trait_name();
	cin.ignore();
	getline(cin, name);
	

	if (gen.get_allele_one().get_letter() == 'Y' || gen.get_allele_one().get_letter() == 'y') {
		phen = pptm.get_seed_color_phenotype(gen);
		Trait t = { name, gen, phen };
		pea_plant.add_seed_color(t);
	}
	else if (gen.get_allele_one().get_letter() == 'R' || gen.get_allele_one().get_letter() == 'r') {
		phen = pptm.get_seed_shape_phenotype(gen);
		Trait t = { name, gen, phen };
		pea_plant.add_seed_shape(t);
	}
	else if (gen.get_allele_one().get_letter() == 'I' || gen.get_allele_one().get_letter() == 'i') {
		phen = pptm.get_pod_shape_phenotype(gen);
		Trait t = { name, gen, phen };
		pea_plant.add_pod_shape(t);
	}
	else if (gen.get_allele_one().get_letter() == 'G' || gen.get_allele_one().get_letter() == 'g') {
		phen = pptm.get_pod_color_phenotype(gen);
		Trait t = { name, gen, phen };
		pea_plant.add_pod_color(t);
	}
	else if (gen.get_allele_one().get_letter() == 'P' || gen.get_allele_one().get_letter() == 'p') {
		phen = pptm.get_flower_color_phenotype(gen);
		Trait t = { name, gen, phen };
		pea_plant.add_flower_color(t);
	}
	else if (gen.get_allele_one().get_letter() == 'A' || gen.get_allele_one().get_letter() == 'a') {
		phen = pptm.get_flower_position_phenotype(gen);
		Trait t = { name, gen, phen };
		pea_plant.add_flower_position(t);
	}
	else if (gen.get_allele_one().get_letter() == 'T' || gen.get_allele_one().get_letter() == 't') {
		phen = pptm.get_plant_height_phenotype(gen);
		Trait t = { name, gen, phen };
		pea_plant.add_plant_height(t);
	}

}
