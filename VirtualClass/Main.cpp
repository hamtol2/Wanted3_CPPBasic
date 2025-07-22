#include <iostream>

class Entity
{
public:
	// ���� �Լ�.
	virtual const char* GetName() const
	{
		return "Entity";
	}
};

class Player : public Entity
{
public:
	Player(const char* name)
	{
		size_t length = strlen(name) + 1;
		this->name = new char[length];
		strcpy_s(this->name, length, name);
	}

	~Player()
	{
		delete[] name;
	}
	
	virtual const char* GetName() const override
	{
		return name;
	}

private:
	char* name = nullptr;
};

int main()
{
	//Entity* entity = new Entity();
	//std::cout << entity->GetName() << "\n";

	//Player* player = new Player("Player");
	//std::cout << player->GetName() << "\n";

	Entity* entity = new Entity();
	std::cout << entity->GetName() << "\n";

	Entity* player = new Player("Player");
	std::cout << player->GetName() << "\n";

	// ����.
	// ������. Actor::Tick() -> Character::Tick();
	// Actor* actor = new Character();
	// .....  Character* character = (Character*)actor;

	delete entity;
	delete player;

	std::cin.get();
}