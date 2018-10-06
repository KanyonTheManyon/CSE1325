#include "KWL7925_View.h"

View::View(){}

View::View(Pea_Plant& pp)
{
    pp = pea_plant;
}


void View::get_menu() {

	string menu = R"(
========================
   Pea Plant Creator
========================

(0) Exit
(1) View Current Traits
(2) Add Trait


)";

	cout << menu << endl;

}


void View::prompt_for_allele_letter(){
	cout << "Please enter your Allele: ";
}


void View::prompt_for_allele_dominance(){
	cout << "Is it dominant? Please enter true or false: ";
}


void View::prompt_for_trait_name(){
	cout << "Please enter the Trait name: ";
}


void View::view_all_traits(){

	pea_plant.view_all_traits();
}
