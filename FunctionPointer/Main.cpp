#include <iostream>
#include <algorithm>

int Function(int number)
{
	return number;
}

// �� ���� ��ȯ�ϴ� �Լ�.
template<typename T>
void Swap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}

// �� �Լ� ������ ����.
//typedef bool (*Comparer)(int, int);
using Comparer = bool (*)(int, int);

// �� �Լ�.
bool Greater(int a, int b)
{
	return a > b;
}

bool Less(int a, int b)
{
	return a < b;
}

// ���� ���� �Լ�.
// Dependency Injection (������ ����).
// Ŀ�ø�(������) ���� ����.
void BubbleSort(int array[], int length, Comparer comparer = Greater)
{
	// ����.
	for (int ix = 0; ix < length; ++ix)
	{
		for (int jx = 0; jx < length - 1; ++jx)
		{
			// �ΰ��� ��.
			//if (array[jx] < array[jx + 1])
			if (comparer(array[jx], array[jx + 1]))
			{
				// ���ǿ� �����ϸ� �� ���� ��ȯ.
				Swap<int>(array[jx], array[jx + 1]);
			}
		}
	}
}

class CompareGreater
{
public:
	bool operator()(int a, int b)
	{
		return a > b;
	}
};

class CompareLess
{
public:
	bool operator()(int a, int b)
	{
		return a < b;
	}
};

class TestClass
{
public:
	virtual bool Compare(int a, int b)
	{
		return a < b;
	}
};

class AnswerClass : public TestClass
{
public:
	virtual bool Compare(int a, int b) override
	{
		return a < b;
	}
};

int main()
{
	//// �Լ� ������ ����.
	//int (*FunctionPointer)(int) = nullptr;

	//// �Լ� �����Ϳ� �Լ� �Ҵ�.
	//FunctionPointer = Function;

	//// null üũ �� �Լ� ���� ȣ��.
	//if (FunctionPointer != nullptr)
	//{
	//	std::cout << FunctionPointer(300) << "\n";
	//}

	int array[] = { 4,3,5,2,1 };
	int length = 5;

	Comparer algo = Greater;


	// ����.
	BubbleSort(array, length);

	// ���.
	for (int& value : array)
	{
		std::cout << value << " ";
	}

	// ���� �Լ�.
	// []-> ĸó(�������� �����ϱ� ����� �����).
	// -> javascript Ŭ����.
	// ()-> �Ķ���� ����.
	// {}-> ���� �ۼ�.
	// (); ȣ�� ����.
	// -> int ��ȯ�� ����� ����.
	auto function = [](int a, int b)
		{
			//for (int& value : array)
			//{
			//	std::cout << value << " ";
			//}

			std::cout << (a + b) << "\n"; 
			return 10;
		};

	function(10, 20);

	std::cout << "\n";
	std::cin.get();
}