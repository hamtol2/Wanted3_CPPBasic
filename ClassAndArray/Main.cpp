#include <iostream>
#include "Player.h"

#define _CRTDBG_MAP_ALLOC
#include <stdlib.h>
#include <crtdbg.h>

int main()
{
	// �޸� �� �˻�.
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

	// ��ü�� �迭�� ����.
	Player* players[5];

	// ����.
	for (int ix = 0; ix < 5; ++ix)
	{
		// ���� �Ҵ�.
		players[ix] = new Player(ix * 2, ix * 3);
	}

	SetPosition(*players[0], 10, 20);

	//// ����.
	//for (int ix = 0; ix < 5; ++ix)
	//{
	//	players[ix].SetX(ix * 2);
	//	players[ix].SetY(ix * 3);
	//}

	// ���� ��� ����(Range-Based Loop).
	for (Player* player : players)
	{
		//(*player).ShowPosition();
		player->ShowPosition();
	}

	// ����.
	for (int ix = 0; ix < 5; ++ix)
	{
		delete players[ix];
		players[ix] = nullptr;
	}

	std::cin.get();
}