// ��� ��Ŭ���.
#include <iostream>

// Ÿ�� ������.
//typedef __int32 int32;
using int32 = __int32;

// �Լ� ����/����.
// const char* -> ���ڿ� ����.
//void Log(const char* message);

#include "Log.h"

int main()
{
	Log("Hello World");
	std::cin.get();
}


//// ������ (Entry Point).
//int main()
//{
//	// ���.
//	// \n ���� (����). " " > ���ڿ�(��). 10 ����.
//	// integer(decimal) char(����)-char-char-char string(��).
//	// �Ҽ�(3.14) float �ε��Ҽ���.
//	// C -> C++ -> C#.
//	std::cout << "Hello C++ " << 10 << " string test" << "\n";
//	printf("Hello World %d %s \n", 10, "string test");
//
//	// �Է�.
//	// int - integer(����).
//	//int32 value3 = 0;
//	//__int64 value4 = 0;
//	int value1 = 0;
//	int value2 = 0;
//
//	// �ȳ�.
//	std::cout << "ù ��° ���� �Է� : ";
//	std::cin >> value1;
//
//	// �ȳ�.
//	std::cout << "�� ��° ���� �Է� : ";
//	std::cin >> value2;
//
//	std::cout 
//		<< "��� value1: " << value1 
//		<< " value2: " << value2 
//		<< "\n";
//
//	// �ǹ� ����.
//	// �ٷ� ������� ����� �ִ� �ڵ�.
//	std::cin.get();
//}