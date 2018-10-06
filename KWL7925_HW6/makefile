CXXFLAGS=-std=c++11

all: executable

executable: KWL7925_main.o KWL7925_Allele.o KWL7925_Multiple_Allele.o KWL7925_Genotype.o
	$(CXX) $(CXXFLAGS) -o executable KWL7925_main.o KWL7925_Allele.o KWL7925_Multiple_Allele.o KWL7925_Genotype.o

KWL7925_main.o: KWL7925_main.cpp KWL7925_Genotype.h KWL7925_Multiple_Allele.h
	$(CXX) $(CXXFLAGS) -c KWL7925_main.cpp

KWL7925_Allele.o: KWL7925_Allele.cpp KWL7925_Allele.h
	$(CXX) $(CXXFLAGS) -c KWL7925_Allele.cpp

KWL7925_Multiple_Allele.o: KWL7925_Multiple_Allele.cpp KWL7925_Multiple_Allele.h
	$(CXX) $(CXXFLAGS) -c KWL7925_Multiple_Allele.cpp

KWL7925_Genotype.o: KWL7925_Genotype.cpp KWL7925_Genotype.h
	$(CXX) $(CXXFLAGS) -c KWL7925_Genotype.cpp
clean:
	rm -f *.o executable
