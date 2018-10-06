#ifndef KWL7925_MULTIPLE_ALLELE_H
#define KWL7925_MULTIPLE_ALLELE_H

#include "KWL7925_Allele.h"

class Multiple_Allele : public Allele {
public:
	Multiple_Allele() {};
	Multiple_Allele(char l, bool d, char l_two);
	char get_letter_two() const;
	friend ostream &operator<<(ostream &ost, const Multiple_Allele &rhs);

private:
	char letter_two;

};
#endif //KWL7925_MULTIPLE_ALLELE_H
