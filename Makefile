rating2: rating2.o main.o
	g++ -o rating2 main.o rating2.o

rating2.o: rating2.cpp rating2.h
	g++ -c rating2.cpp

main.o: main.cpp rating2.h
	g++ -c main.cpp
clean:
	rm rating2 *.o
