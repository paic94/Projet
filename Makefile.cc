/*CXX = g++-4.7
CC  = $(CXX)

CXXFLAGS = -std=c++11  # C++11

# Partie commentée : choisissez les options que vous voulez avoir
#                    en décommentant la/les lignes correspondantes
#
# CXXFLAGS += -pedantic -Wall         # pour les purs et durs
# CXXFLAGS += -g                      # pour debugger
# CXXFLAGS += -pg                     # pour profiler
# LDFLAGS  += -pg                     # pour profiler
# CXXFLAGS += -O2                     # pour optimiser la vitesse

all: testVecteur2D

Vecteur2D.o: Vecteur2D.cc Vecteur2D.h

testVecteur2D.o: testVecteur2D.cc Vecteur2D.h

testVecteur2D: testVecteur2D.o Vecteur2D.o

Montagne.o: Montagne.cc Montagne.h

Potentiel.o: Potentiel.cc Potentiel.h

ChampPotentiel.o: ChampPotentiel.cc ChampPotentiel.h

CubedAir.o: CubedAir.cc CubedAir.h

Dessinable.o: Dessinable.cc Dessinable.h

Ciel.o: Ciel.cc Ciel.h
*/





