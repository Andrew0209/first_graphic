#include <iostream>
#include <SFML/Graphics.hpp>

int main() {
    sf::ContextSettings settings;
    settings.antialiasingLevel = 4;
    sf::RenderWindow window(sf::VideoMode::getDesktopMode(), "test", sf::Style::Default, settings);
    std::cout << "window size: " << window.getSize().x << '*' << window.getSize().y << '\n';
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
    }
}