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
    

    RenderWindow window(VideoMode(_width, _height), _title);
    CircleShape shape(100.f);
    shape.setFillColor(Color::Green);
    shape.setPosition(100.f, 100.f);

    
    while (window.isOpen())
    {
        Event event;
        while (window.pollEvent(event))
        
        {
        
            if (event.type == Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(shape);
        window.display();
    }

    return 0;
}