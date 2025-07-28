#include <iostream>
#include <memory>		// smart pointer ����� ����.

class Test
{
public:
	Test()
	{
		std::cout << "��ü�� ������.\n";
	}

	~Test()
	{
		std::cout << "��ü�� ������.\n";
	}
};

int main()
{
	// ��ü ����.
	std::unique_ptr<Test> test = std::make_unique<Test>();
	std::unique_ptr<Test>& test1 = test;
	//Test* test1RawPtr = test1.get();
	//delete test1RawPtr;
	Test* rawTestPtr = test.get();
	//delete rawTestPtr;
	Test& refTest = *test.get();
	//delete refTest;
	//refTest = *test.get();
}