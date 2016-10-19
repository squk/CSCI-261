#include <iostream>
using namespace std;

#include <SFML/Graphics.hpp>
using namespace sf;

int main() {

	/***** PLACE YOUR FILE PROCESSING CODE HERE *****/

	/***** END OF FILE PROCESSING *****/

    // creates the window object with an 640x640 resolution window
    RenderWindow window(VideoMode(640, 640), "SFML Template");
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);
    sf::Vertex line[2] =
    {
            sf::Vertex( sf::Vector2f( 10, 10 ) ),
                sf::Vertex( sf::Vector2f( 150, 150 ) )
    };


    // Draw loop: Each iteration of this loop draws a single frame
    while (window.isOpen()) {

        // Erase the screen with black (because space)
        window.clear();

        /***** PLACE YOUR DRAWING CODE HERE *****/

        /***** END OF DRAWING	*****/

        // Apply all the draws to the screen
        window.clear();
        window.draw(shape);
    window.draw( line, 2, sf::Lines );
        window.display();

        Event event;
        while (window.pollEvent(event)) {
            if (event.type == Event::Closed)
                window.close();
        }
    }

    return EXIT_SUCCESS;
}
