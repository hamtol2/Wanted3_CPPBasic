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

// 구현 - 숙제.
size_t GetStringLength(const char* targetString);

// 대소문자 변환 함수.
// 소문자 -> 대문자로 변환.
char ToUpperCase(char lowercase);

// 대문자 -> 소문자로 변환.
char ToLowerCase(char uppercase);


// 클래스.
// class_클래스 이름 { };
class Person
{
	// 함수.
public:
	// 생성자(클래스 이름과 이름이 같은 함수/반환을 안함).
	Person(const char* name)
	{
		// 전달받은 문자열의 길이 구하기.
		size_t length = strlen(name) + 1;

		// 내부 변수의 크기 할당.
		this->name = new char[length];

		// 값 복사.
		strcpy_s(this->name, length, name);
	}

	// 소멸자(객체가 해제될 때 호출되는 함수.
	~Person()
	{
		// 해제/소멸/삭제.
		// == 동등비교, != 아닌지비교.
		if (name != nullptr)
		{
			delete[] name;
		}
	}

	// 이름 출력.
	void PrintName()
	{
		std::cout << "Name: " << name << "\n";
	}

private:

	// 변수.
	char* name = nullptr;
};


// 문자열(String).
int main()
{
	// 메모리 누수 검사.
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

	// 문자 타입 (char - character/letter).
	char test = 'a';
	int number = test;

	// 문자열.
	const char* string = "RonnieJang";

	// 크기 구해보기.
	int length = sizeof(string);

	// 문자 개수 구하는 함수.
	size_t stringLength = strlen(string);

	char name[7] = { 'R', 'o', 'n', 'n', 'i', 'e', '\0' };

	std::cout << name << "\n";

	// Person 객체 생성.
	Person person("Ronnie");
	person.PrintName();

	//std::cout 
	//	<< string 
	//	<< ", Length:" 
	//	<< stringLength << "\n";

	std::cin.get();
}