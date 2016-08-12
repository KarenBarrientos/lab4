Point:	main.o Point.o
	g++ main.o Point.o -o point

main.o:	main.cpp Point.h
	g++ -c main.cpp

Point.o:	Point.cpp Point.h
	g++ -c Point.cpp