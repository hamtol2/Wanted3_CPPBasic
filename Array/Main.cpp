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

	// 배열 (Array).
	int example[5];
	memset(example, 0, sizeof(int) * 5);

	// 배열 시작 주소를 포인터 변수에 저장.
	int* pointer = example;
	example[2] = 10;

	// example[3] = 100;
	*(pointer + 3) = 100;

	// 루프(순회/반복처리).
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

	// 동적 할당.
	int* array = new int[5];
	for (int ix = 0; ix < 5; ++ix)
	{
		array[ix] = 10;
	}

	// 할당 했으면 해제.
	delete[] array;

	// 바로 종료 x.
	std::cin.get();
}