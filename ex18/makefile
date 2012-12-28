svg: main.o svgFuncs.o
	g++ -g -Wall main.o svgFuncs.o -o svg

main.o: main.cpp svgFuncs.hpp
	g++ -g -Wall -c main.cpp

svgFuncs.o: svgFuncs.cpp svgFuncs.hpp
	g++ -g -Wall -c svgFuncs.cpp

clean:
	rm svg *.o
