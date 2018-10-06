//Sample Solution Provided by Dr. Gieser

#ifndef KWL7925_TRAIT_H
#define KWL7925_TRAIT_H
#include "KWL7925_Genotype.h"
#include <iostream>

class Trait
{
	public:
		Trait() {};
		Trait(std::string n, Genotype g, std::string p) : name(n), genotype(g), phenotype(p) {};
		std::string get_name() const;
		Genotype get_genotype() const;
		std::string get_phenotype() const;
		friend std::ostream& operator<<(std::ostream& ost, const Trait& t);
	private:
		std::string name;
		Genotype genotype;
		std::string phenotype;
};

#endif // KWL7925_TRAIT_H
