#include <iostream>

int main()
{
	// nullptr = 0.
	int number = 10;
	void* pointer =	&number;

	//*pointer = 20;
	// C++ ����ȯ�� 4������ �����ؼ� ���.
	//int* pointer2 = (int*)pointer;
	int* pointer2 = reinterpret_cast<int*>(pointer);
	*pointer2 = 20;

	// ���� �Ҵ�.
	// Dynamic Allocation.
	// �Ҵ������� �����ؾ���.
	char* buffer = new char[20];

	// �޸� ����.
	memset(buffer, 0, sizeof(char) * 20);

	// ������ delete��.
	delete[] buffer;

	// �ǹ� ����. �ٷ� ������� ����� �߰���.
	std::cin.get();
}