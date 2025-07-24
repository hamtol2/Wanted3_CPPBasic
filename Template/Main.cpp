#include <iostream>

template<typename T>
void Swap(T& number1, T& number2)
{
	T temp = number1;
	number1 = number2;
	number2 = temp;
}

//void Swap(int& number1, int& number2)
//{
//	int temp = number1;
//	number1 = number2;
//	number2 = temp;
//}
//
//void Swap(float& number1, float& number2)
//{
//	float temp = number1;
//	number1 = number2;
//	number2 = temp;
//}

//void Swap(float& number1, float& number2)
//{
//	float temp = number1;
//	number1 = number2;
//	number2 = temp;
//}

int main()
{
	int number1 = 10;
	int number2 = 20;
	Swap<int>(number1, number2);

	float number3 = 3.14f;
	float number4 = 4.14f;
	Swap(number3, number4);

	std::cout << number1 << ", " << number2 << "\n";
}