# FLAGS
Comp = g++ -std=c++11
Flags = -c -Wall -O3

# Rules
All: Main.o Random_Walk.o
	$(Comp) -o ./Walk Main.o Random_Walk.o

Main.o: Main.cc Random_Walk.h
	$(Comp) $(Flags) Main.cc

Random_Walk.o: Random_Walk.cc Random_Walk.h
	$(Comp) $(Flags) Random_Walk.cc

Clean:
	rm *.o Walk
