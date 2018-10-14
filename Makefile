CXX=g++
main: Main.o Student.o Company.o Uprogram.o
	$(CXX) -o main Main.o Student.o Company.o Uprogram.o
Main.o: Main.cpp Student.h Company.h Uprogram.h
	$(CXX) -c Main.cpp
Student.o: Student.h
Company.o: Company.h Student.h
Uprogram.o: Uprogram.h Student.h
