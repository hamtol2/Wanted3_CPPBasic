#include <iostream>

#define FORCEINLINE __forceinline

// Macro ��� �ζ��� �Լ�.
//#define Square(x) ((x) * (x))
__forceinline int Square(int x)
{
	return  x * x;
}

int main()
{
	std::cout << Square(10) << "\n";

	std::cin.get();
}