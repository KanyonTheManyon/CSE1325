#include "KWL7925_Genotype.h"
#include "KWL7925_Multiple_Allele.h"

int main() {

	Allele *a = new Allele('R', true);
	Allele *b = new Allele('r', false);
	Genotype g1(a, b);

	Allele *c = new Allele('G', true);
	Multiple_Allele d('g', false, 'g');
	Genotype g2(c, &d);

	cout << "Genotype One" << endl;
	cout << "First Allele type = " << g1.get_allele_one()->get_type() << endl;
	cout << "First Allele letter = " << g1.get_allele_one()->get_letter() << endl;
	cout << "First Allele dominance = " << g1.get_allele_one()->get_dominance() << endl;
	cout << "Second Allele type = " << g1.get_allele_two()->get_type() << endl;
	cout << "Second Allele letter = " << g1.get_allele_two()->get_letter() << endl;
	cout << "Second Allele dominance = " << g1.get_allele_two()->get_dominance() << endl << endl;

	cout << "Genotype Two" << endl;
	cout << "First Allele type = " << g2.get_allele_one()->get_type() << endl;
	cout << "First Allele letter = " << g2.get_allele_one()->get_letter() << endl;
	cout << "First Allele dominance = " << g2.get_allele_one()->get_dominance() << endl;
	cout << "Second Allele type = " << g2.get_allele_two()->get_type() << endl;
	cout << "Second Allele letter = " << g2.get_allele_two()->get_letter() << endl;
	cout << "Second Allele dominance = " << g2.get_allele_two()->get_dominance() << endl << endl;

}