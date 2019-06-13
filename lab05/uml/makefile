Main: Main.o Instructor.o Student.o Person.o 
	g++ -o Main Main.o Student.o Person.o Instructor.o

Instructor.o: Instructor.cpp Instructor.h
	g++ -c Instructor.cpp

Student.o: Student.cpp Student.h
	g++ -c Student.cpp

Person.o: Person.cpp Person.h
	g++ -c Person.cpp

Main.o: Main.cpp
	g++ -c Main.cpp

clean:
	rm *.o
	rm Main
