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

// ���� - ����.
size_t GetStringLength(const char* targetString);

// ��ҹ��� ��ȯ �Լ�.
// �ҹ��� -> �빮�ڷ� ��ȯ.
char ToUpperCase(char lowercase);

// �빮�� -> �ҹ��ڷ� ��ȯ.
char ToLowerCase(char uppercase);


// Ŭ����.
// class_Ŭ���� �̸� { };
class Person
{
	// �Լ�.
public:
	// ������(Ŭ���� �̸��� �̸��� ���� �Լ�/��ȯ�� ����).
	Person(const char* name)
	{
		// ���޹��� ���ڿ��� ���� ���ϱ�.
		size_t length = strlen(name) + 1;

		// ���� ������ ũ�� �Ҵ�.
		this->name = new char[length];

		// �� ����.
		strcpy_s(this->name, length, name);
	}

	// �Ҹ���(��ü�� ������ �� ȣ��Ǵ� �Լ�.
	~Person()
	{
		// ����/�Ҹ�/����.
		// == �����, != �ƴ�����.
		if (name != nullptr)
		{
			delete[] name;
		}
	}

	// �̸� ���.
	void PrintName()
	{
		std::cout << "Name: " << name << "\n";
	}

private:

	// ����.
	char* name = nullptr;
};


// ���ڿ�(String).
int main()
{
	// �޸� ���� �˻�.
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

	// ���� Ÿ�� (char - character/letter).
	char test = 'a';
	int number = test;

	// ���ڿ�.
	const char* string = "RonnieJang";

	// ũ�� ���غ���.
	int length = sizeof(string);

	// ���� ���� ���ϴ� �Լ�.
	size_t stringLength = strlen(string);

	char name[7] = { 'R', 'o', 'n', 'n', 'i', 'e', '\0' };

	std::cout << name << "\n";

	// Person ��ü ����.
	Person person("Ronnie");
	person.PrintName();

	//std::cout 
	//	<< string 
	//	<< ", Length:" 
	//	<< stringLength << "\n";

	std::cin.get();
}