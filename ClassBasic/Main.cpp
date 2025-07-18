#include <iostream>
#include "Player.h"

int main()
{
	// RAII.
	// Type Puning.
	Engine::Player player;
	//player.x = 10;
	player.SetX(10);

	std::cout << "Hello\n";

	std::cin.get();
}