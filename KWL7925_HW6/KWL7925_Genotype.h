//Sample Solution Provided by Dr. Gieser
#ifndef KWL7925_GENOTYPE_H
#define KWL7925_GENOTYPE_H

#include "KWL7925_Allele.h"

class Genotype
{
	public:
		Genotype() {};
		Genotype(Allele *a_one, Allele *a_two);
		Allele* get_allele_one() const;
		Allele* get_allele_two() const;
		bool operator<(const Genotype& rhs) const;
	private:
		Allele *allele_one;
		Allele *allele_two;
};

#endif // KWL7925_GENOTYPE_H
