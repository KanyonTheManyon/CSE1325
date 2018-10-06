//Sample Solution Provided by Dr. Gieser
#ifndef KWL7925_ALLELE_H
#define KWL7925_ALLELE_H
#include <iostream>
#include <string> 

using namespace std;

class Allele
{
	public:
		Allele() {};
		Allele(char l, bool d) : letter(l), dominance(d) {};
		char get_letter() const;
		bool get_dominance() const;
	private:
		char letter;
		bool dominance;
};

#endif // KWL7925_ALLELE_H
