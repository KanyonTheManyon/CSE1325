CXXFLAGS=-std=c++11

all: executable

executable: KWL7925_main.o KWL7925_Allele.o KWL7925_Genotype.o KWL7925_Trait.o KWL7925_Pea_Plant.o KWL7925_Pea_Plant_Trait_Maps.o KWL7925_View.o KWL7925_Controller.o 
	$(CXX) $(CXXFLAGS) -o executable KWL7925_main.o KWL7925_Allele.o KWL7925_Genotype.o KWL7925_Trait.o KWL7925_Pea_Plant.o KWL7925_Pea_Plant_Trait_Maps.o KWL7925_View.o KWL7925_Controller.o 

KWL7925_main.o: KWL7925_main.cpp KWL7925_Allele.h KWL7925_Genotype.h KWL7925_Trait.h KWL7925_Pea_Plant.h KWL7925_Pea_Plant_Trait_Maps.h KWL7925_View.h KWL7925_Controller.h
	$(CXX) $(CXXFLAGS) -c KWL7925_main.cpp

KWL7925_Allele.o: KWL7925_Allele.cpp KWL7925_Allele.h
	$(CXX) $(CXXFLAGS) -c KWL7925_Allele.cpp

KWL7925_Genotype.o: KWL7925_Genotype.cpp KWL7925_Genotype.h
	$(CXX) $(CXXFLAGS) -c KWL7925_Genotype.cpp

KWL7925_Trait.o: KWL7925_Trait.cpp KWL7925_Trait.h
	$(CXX) $(CXXFLAGS) -c KWL7925_Trait.cpp

KWL7925_Pea_Plant.o: KWL7925_Pea_Plant.cpp KWL7925_Pea_Plant.h
	$(CXX) $(CXXFLAGS) -c KWL7925_Pea_Plant.cpp

KWL7925_Pea_Plant_Trait_Maps.o: KWL7925_Pea_Plant_Trait_Maps.cpp KWL7925_Pea_Plant_Trait_Maps.h
	$(CXX) $(CXXFLAGS) -c KWL7925_Pea_Plant_Trait_Maps.cpp

KWL7925_View.0: KWL7925_View.cpp KWL7925_View.h
	$(CXX) $(CXXFLAGS) -c KWL7925_View.cpp

KWL7925_Controller.o: KWL7925_Controller.cpp KWL7925_Controller.h
	$(CXX) $(CXXFLAGS) -c KWL7925_Controller.cpp

clean:
	rm -f *.o executable
