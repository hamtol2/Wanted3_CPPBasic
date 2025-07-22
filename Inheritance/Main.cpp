#include <iostream>

// ��ü.
class Entity
{
public:
	Entity()
		: x(0), y(0)
	{
		std::cout << "Entity()\n";
	}

	virtual ~Entity()
	{
		std::cout << "~Entity()\n";
	}

	// ���� �Լ�(VR-Virtual Reality).
	void Move(int xa, int ya)
	{
		x += xa;
		y += ya;
	}

	// �ڽ����׵� ��-������.
	// protected/public - visibility.
protected:
	int x = 0;
	int y = 0;
};

class Player : public Entity
{
public:
	Player()
	{
	}

	Player(const char* name)
		: Entity()
	{
		size_t length = strlen(name) + 1;
		this->name = new char[length];
		strcpy_s(this->name, length, name);

		std::cout << "Player()\n";
	}

	Player(const Player& other)
	{
		x = other.x;
		y = other.y;

		size_t length = strlen(other.name) + 1;
		this->name = new char[length];
		strcpy_s(this->name, length, other.name);
	}

	~Player()
	{
		std::cout << "~Player()\n";
		delete[] name;
	}

	//void Move(int xa, int ya)
	//{
	//	x += xa;
	//	y += ya;
	//}

private:
	//int x = 0;
	//int y = 0;
	char* name = nullptr;
};

int main()
{
	Player player("Player");
	player.Move(5, 5);

	// �ڽ� ��ü�� �����ؼ� �θ� ��ü�� ����(ġȯ).
	// �̹� ����ȯ(�ڽ�->�θ� ��ȯ).
	// �� ĳ����(Up-Casting).
	Entity* entity = new Player("Player2");

	Entity* entity2 = new Entity();

	// �ٿ�-ĳ����(Down-Casting).
	//Player* player3 = (Player*)entity;
	Player* player3 = (Player*)entity2;



	std::cin.get();
}