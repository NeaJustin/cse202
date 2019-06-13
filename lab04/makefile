Person: Person_main.o Person.o 
	g++ -o Person Person_main.cpp Person.o

Person_main.o: Person.h Person.cpp
	g++ -c Person_main.cpp

Person.o: Person.cpp
	g++ -c Person.cpp

clean:
	rm *.o Person
