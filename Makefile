all: part1 part2

part1: part1.cpp Vector.h List.h dsexceptions.h
	g++ -o test1 part1.cpp
	./test1

part2: part2.cpp Vector2.h List.h dsexceptions.h
	g++ -o test2 part2.cpp
	./test2
	
clean:
	rm -f test1 test2