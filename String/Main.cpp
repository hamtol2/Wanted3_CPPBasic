#include <iostream>

// 구현 - 숙제.
size_t GetStringLength(const char* targetString);

// 문자열(String).
int main()
{
	// 문자 타입 (char - character/letter).
	char test = 'a';
	int number = test;

	// 문자열.
	const char* string = "RonnieJang";

	// 크기 구해보기.
	int length = sizeof(string);

	// 문자 개수 구하는 함수.
	size_t stringLength = strlen(string);

	std::cout 
		<< string 
		<< ", Length:" 
		<< stringLength << "\n";

	std::cin.get();
}