#include <iostream>

// �Լ�.
// Call By Reference.
void Increment(int& number)
{
	++number;
}

int main()
{
	int number = 10;

	// ���۷����� �ٸ� ������ ����.
	int& ref = number;
	ref = 30;

	Increment(number);
	std::cout << number << "\n";

	std::cin.get();
}