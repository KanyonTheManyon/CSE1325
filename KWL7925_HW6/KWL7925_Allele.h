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
		Allele(char l, bool d) : letter(l), dominance(d), type("Allele") {};
		char get_letter() const;
		bool get_dominance() const;
		string get_type() const;
		friend ostream &operator<<(ostream &ost, const Allele &rhs);

	protected:
		char letter;
		bool dominance;
		string type;
};

#endif // KWL7925_ALLELE_H
