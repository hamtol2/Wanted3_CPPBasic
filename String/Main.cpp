#include <iostream>

// ���� - ����.
size_t GetStringLength(const char* targetString);

// ���ڿ�(String).
int main()
{
	// ���� Ÿ�� (char - character/letter).
	char test = 'a';
	int number = test;

	// ���ڿ�.
	const char* string = "RonnieJang";

	// ũ�� ���غ���.
	int length = sizeof(string);

	// ���� ���� ���ϴ� �Լ�.
	size_t stringLength = strlen(string);

	std::cout 
		<< string 
		<< ", Length:" 
		<< stringLength << "\n";

	std::cin.get();
}