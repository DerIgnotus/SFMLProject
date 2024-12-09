#include "SFML-2.6.2/include/SFML/Graphics.hpp"

sf::Vector2f viewSize(1024, 768);
sf::VideoMode vm(viewSize.x, viewSize.y);
sf::RenderWindow window(vm, "Hello SFMLGame !!!", sf::Style::Default);

int main() {
	// Initialize Game Objects

	while (window.isOpen()) {
		// Handle Keyboard Events
		// Update Game Objects in the scene
		// Render Game Objects
	}

	return 0;
}