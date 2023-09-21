g++ -Iheaders/include -c main.cpp
g++ main.o -o main -Lheaders/lib -lsfml-graphics -lsfml-system -lsfml-audio -lopengl32 -lsfml-window
main