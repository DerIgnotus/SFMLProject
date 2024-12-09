#include "SFML-2.6.2/include/SFML/Graphics.hpp"

sf::Vector2f viewSize(1024, 768);
sf::VideoMode vm(viewSize.x, viewSize.y);
sf::RenderWindow window(vm, "VARY BEAUTIFUL SFML GAME MATE BYE ME", sf::Style::Default);

sf::Texture skyTexture;
sf::Sprite skySprite;

void draw() {
	// Draw Sky Sprite
	window.draw(skySprite);
}

void init() {
	// Load Sky Texture
	skyTexture.loadFromFile("Assets/graphics/sky.png");

	// Set and Attach Texture to Sprite
	skySprite.setTexture(skyTexture);
}

int main() {
	init();

	while (window.isOpen()) {
		window.clear(sf::Color::Red);
		draw();

		window.display();
	}

	return 0;
}