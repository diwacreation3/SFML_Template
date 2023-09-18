#include <SFML/Graphics.hpp>
#include <iostream>

using namespace std;
using namespace sf;

//window properties
int _width = 800;
int _height = 600;
string _title = "Sfml Window";


int main()
{
    

    sf::RenderWindow window(sf::VideoMode(_width, _height), _title);
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        
        {
        
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(shape);
        window.display();
    }

    return 0;
}