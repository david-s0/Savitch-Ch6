grades: main.o gradesFuncs.o
	g++ -g -Wall main.o gradesFuncs.o -o grades

main.o: main.cpp gradesFuncs.hpp
	g++ -c -g -Wall main.cpp 

gradesFuncs: gradesFuncs.cpp gradesFuncs.hpp
	g++ -c -g -Wall gradesFuncs.cpp

clean:
	rm grades *.o results.txt
