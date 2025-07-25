#include <iostream>
#include <fstream>

int main()
{
	//int x = 10;
	//int& ref2 = x;    // 오류 발생.

	//std::ofstream
	//std::ifstream

	// 파일 포인터 변수.
	FILE* file = nullptr;
	fopen_s(&file, "Test.txt", "r");
	if (file == nullptr)
	{
		std::cout << "Can't open the file.\n";
		std::cin.get();
		return 0;
	}

	// 파일에서 읽은 데이터를 저장할 버퍼(공간).
	char buffer[256] = { };

	// fseek.
	fseek(file, 0, SEEK_END);
	int length = ftell(file);

	//fseek(file, 0, SEEK_SET);
	rewind(file);
	int fp = ftell(file);

	size_t readSize = fread(buffer, 1, 256, file);
	std::cout << buffer << "\n";

	// 쓰기를 위해 파일을 하나 더 열기(생성).
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

	// 조작.
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

	// 파일 닫기.
	fclose(file);

	std::cin.get();
}