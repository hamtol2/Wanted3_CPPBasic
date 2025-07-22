#include <iostream>

// Ŭ������ Ÿ��(Type, ��)
// Ÿ�� - ũ��.
class Player
{
public:
	Player()
		: x(0), y(0)		// member initializer.
	{
		// ���ڿ� ���� ���ϱ�.
		size_t length = strlen("Player") + 1;

		// �޸� �Ҵ�.
		name = new char[length];

		// ���ڿ� ����.
		strcpy_s(name, length, "Player");

		//memcpy(name, "Player", length);
		//name[length - 1] = '\0';

		std::cout << "Player() called\n";
	}

	Player(int x, int y)
		: x(x), y(y)
	{
		// ���ڿ� ���� ���ϱ�.
		size_t length = strlen("Player") + 1;

		// �޸� �Ҵ�.
		name = new char[length];

		// ���ڿ� ����.
		strcpy_s(name, length, "Player");

		std::cout << "Player(int x, int y) called\n";
	}

	// ���� ������.
	// L-Value Reference.
	// L-Value/R-Value, L-Value Reference(&)/R-Value Reference(&&).
	Player(const Player& other)
		: x(other.x), y(other.y)/*, name(other.name)*/
	{
		// Deep Copy.
		size_t length = strlen(other.name) + 1;
		this->name = new char[length];
		strcpy_s(this->name, length, other.name);

		std::cout << "Player(const Player& other) called\n";
	}

	// �Ҹ���.
	~Player()
	{
		delete[] name;
	}

	void Print()
	{
		std::cout << x << ", " << y << "\n";
	}

private:
	int x = 0;
	int y = 0;
	char* name = nullptr;
};

int main()
{
	Player player1;				// Player().
	Player player2(10, 20);		// Player(int, int).
	Player player3(player2);	// Player(const Player&);

	player2.Print();
	player3.Print();

	std::cin.get();
}