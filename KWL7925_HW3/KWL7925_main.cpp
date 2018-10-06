#include "KWL7925_Controller.h"
#include "KWL7925_View.h"
#include "KWL7925_Pea_Plant_Trait_Maps.h"
#include "KWL7925_Pea_Plant.h"
#include "KWL7925_Trait.h"
#include "KWL7925_Genotype.h"
#include "KWL7925_Allele.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{

	Pea_Plant pp;
	View v;
	Controller c1(pp, v);
	c1.cli();

	return 0;
	
}


