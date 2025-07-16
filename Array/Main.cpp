#include <iostream>

#define _CRTDBG_MAP_ALLOC
#include <stdlib.h>
#include <crtdbg.h>

#ifdef _DEBUG
#define new new ( _NORMAL_BLOCK , __FILE__ , __LINE__ )
// Replace _NORMAL_BLOCK with _CLIENT_BLOCK if you want the
// allocations to be of _CLIENT_BLOCK type
#else
#define new new
#endif

int main()
{
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
	//_CrtSetBreakAlloc(218);

	// �迭 (Array).
	int example[5];
	memset(example, 0, sizeof(int) * 5);

	// �迭 ���� �ּҸ� ������ ������ ����.
	int* pointer = example;
	example[2] = 10;

	// example[3] = 100;
	*(pointer + 3) = 100;

	// ����(��ȸ/�ݺ�ó��).
	int length = sizeof(example) / sizeof(example[0]);
	for (int ix = 0; ix < length; ++ix)
	{
		std::cout << example[ix] << "\n";
	}

	// range-based-loop.
	for (int item : example)
	{
		std::cout << item << "\n";
	}

	// ���� �Ҵ�.
	int* array = new int[5];
	for (int ix = 0; ix < 5; ++ix)
	{
		array[ix] = 10;
	}

	// �Ҵ� ������ ����.
	delete[] array;

	// �ٷ� ���� x.
	std::cin.get();
}