//Sample Solution Provided by Dr. Gieser
#include "KWL7925_Trait.h"

std::string Trait::get_name() const
{
	return name;
}

Genotype Trait::get_genotype() const
{
	return genotype;
}

std::string Trait::get_phenotype() const
{
	return phenotype;
}

std::ostream& operator<<(std::ostream& ost, const Trait& t)
{
	std::string output = "Name: " + t.name +"\nGenotype: " + std::string(1,t.get_genotype().get_allele_one().get_letter()) + std::string(1,t.get_genotype().get_allele_two().get_letter()) + "\nPhenotype: " + t.get_phenotype() + "\n";

	ost << output;

	return ost;
}
