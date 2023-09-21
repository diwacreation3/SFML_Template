
echo Building project..

g++ -Iheaders/sfml/include -c main.cpp

g++ main.o -o main -Lheaders/sfml/lib  -lsfml-graphics -lsfml-window -lsfml-system -lopengl32 -lsfml-audio

echo Build Complete

main