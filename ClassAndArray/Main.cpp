#include <iostream>
#include "Player.h"

int main()
{
	// ��ü�� �迭�� ����.
	Player players[5];

	// ����.
	for (int ix = 0; ix < 5; ++ix)
	{
		players[ix].SetX(ix * 2);
		players[ix].SetY(ix * 3);
	}

	// ���� ��� ����(Range-Based Loop).
	for (const Player& player : players)
	{
		player.ShowPosition();
	}

	std::cin.get();
}