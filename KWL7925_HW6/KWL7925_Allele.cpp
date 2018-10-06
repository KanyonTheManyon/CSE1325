//Sample Solution Provided by Dr. Gieser
#include "KWL7925_Allele.h"

char Allele::get_letter() const
{
	return letter;
}

bool Allele::get_dominance() const
{
	return dominance;
}

string Allele::get_type() const
{
	return type;
}

ostream &operator<<(ostream &ost, const Allele &rhs){
	ost << "Using  " << rhs.get_type() << endl;
	ost << "Letter: " << rhs.get_letter() << "\t Dominance:  " << rhs.get_dominance() << endl << endl;
	return ost;
}
