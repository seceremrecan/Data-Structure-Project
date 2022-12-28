all:derle bagla calistir

derle:
	g++ -c -I "./include" ./src/Satir_Dugum.cpp -o ./lib/Satir_Dugum.o
	g++ -c -I "./include" ./src/ReadFile.cpp -o ./lib/ReadFile.o
	g++ -c -I "./include" ./src/Satir_Liste.cpp -o ./lib/Satir_Liste.o
	g++ -c -I "./include" ./src/Yonetici_Dugum.cpp -o ./lib/Yonetici_Dugum.o
	g++ -c -I "./include" ./src/Yonetici_Liste.cpp -o ./lib/Yonetici_Liste.o
	g++ -c -I "./include" ./src/main.cpp -o ./lib/main.o

bagla:
	g++ ./lib/Yonetici_Dugum.o ./lib/Yonetici_Liste.o ./lib/ReadFile.o ./lib/Satir_Dugum.o ./lib/Satir_Liste.o ./lib/main.o -o ./bin/program

calistir:
	./bin/program	