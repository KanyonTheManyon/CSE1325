//Sample Solution Provided by Dr. Gieser

#include "KWL7925_Genotype.h"

Genotype::Genotype(Allele a_one, Allele a_two) 
{
	if(a_one.get_dominance()) //if input is RR or Rr
	{
		allele_one = a_one;
		allele_two = a_two;
	}
	else
	{
		allele_one = a_two; //if input is rR or rr
		allele_two = a_one;
	}
}

Allele Genotype::get_allele_one() const
{
	return allele_one;
}

Allele Genotype::get_allele_two() const
{
	return allele_two;
}

bool Genotype::operator<(const Genotype& rhs) const
{
	char lhs_a_one = allele_one.get_letter();
	char lhs_a_two = allele_two.get_letter();

	char rhs_a_one = rhs.get_allele_one().get_letter();
	char rhs_a_two = rhs.get_allele_two().get_letter();

	return lhs_a_one + lhs_a_two < rhs_a_one + rhs_a_two;
}
