#include <iostream>
#include <fstream>

int main()
{
	//int x = 10;
	//int& ref2 = x;    // ���� �߻�.

	//std::ofstream
	//std::ifstream

	// ���� ������ ����.
	FILE* file = nullptr;
	fopen_s(&file, "Test.txt", "r");
	if (file == nullptr)
	{
		std::cout << "Can't open the file.\n";
		std::cin.get();
		return 0;
	}

	// ���Ͽ��� ���� �����͸� ������ ����(����).
	char buffer[256] = { };

	// fseek.
	fseek(file, 0, SEEK_END);
	int length = ftell(file);

	//fseek(file, 0, SEEK_SET);
	rewind(file);
	int fp = ftell(file);

	size_t readSize = fread(buffer, 1, 256, file);
	std::cout << buffer << "\n";

	// ���⸦ ���� ������ �ϳ� �� ����(����).
	FILE* newFile = nullptr;
	fopen_s(&newFile, "Test2.txt", "w");
	if (newFile == nullptr)
	{
		fclose(file);
		return 0;
	}

	// number=10 name=ronniej testnumber=3.14
	//fseek(file, 0, SEEK_SET);
	//sprintf();
	int number = 0;
	char name[50] = {};
	float testnumber = 0.0f;
	sscanf_s(
		buffer,
		"number=%d testnumber=%f name=%s",
		&number, &testnumber, name, 50
	);

	rewind(file);
	//int result = fscanf_s(
	//	file, 
	//	"number=%d testnumber=%f name=%s", 
	//	&number, &testnumber, name, 50
	//);

	//size_t writeSize = fwrite(buffer, 1, readSize, newFile);
	fprintf(newFile, 
		"number=%d testnumber=%f name=%s", 
		10000, 5.1234f, "testname"
	);

	fclose(newFile);

	// ����.
	//while (true)
	//while (!feof(file))
	//{
	//	// end of file.
	//	//if (feof(file))
	//	//{
	//	//	break;
	//	//}

	//	//if (fgets(buffer, 256, file) == nullptr)
	//	//{
	//	//	break;
	//	//}

	//	fgets(buffer, 256, file);
	//	std::cout << buffer;
	//}

	// ���� �ݱ�.
	fclose(file);

	std::cin.get();
}