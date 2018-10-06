#include "KWL7925_Multiple_Allele.h"

Multiple_Allele::Multiple_Allele(char l, bool d, char l_two) {
	letter = l;
	dominance = d;
	letter_two = l_two;
	type = "Multiple Allele";
}

char Multiple_Allele::get_letter_two() const{
	return letter_two;
}

ostream &operator<<(ostream &ost, const Multiple_Allele &rhs) {
	ost << "Using " << rhs.get_type() << endl;
	ost << "Allele One: " << rhs.get_letter() << "\t Dominance:  " << rhs.get_dominance() << endl;
	ost << "Allele Two: " << rhs.get_letter_two() << endl;
	return ost;
}