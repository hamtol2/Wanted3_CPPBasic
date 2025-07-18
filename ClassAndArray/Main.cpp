#include <iostream>
#include "Player.h"

int main()
{
	// 객체를 배열로 선언.
	Player players[5];

	// 루프.
	for (int ix = 0; ix < 5; ++ix)
	{
		players[ix].SetX(ix * 2);
		players[ix].SetY(ix * 3);
	}

	// 범위 기반 루프(Range-Based Loop).
	for (const Player& player : players)
	{
		player.ShowPosition();
	}

	std::cin.get();
}