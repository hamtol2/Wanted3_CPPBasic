#pragma once

#include <iostream>

// Ŭ����.
namespace Engine
{
	class Player
	{
	public:
		// ������(Constructor).
		// ��ü(Object)�� ������ �� ȣ��Ǵ� �Լ�.
		// Ŭ���� �̸��� �Ȱ���. ��ȯ�� ���� ����.
		Player()
			: x(0), y(0), speed(0)
		{
			std::cout << "Constructor has been called.\n";
		}

		// �Ҹ���(Destructor).
		~Player()
		{
			std::cout << "Destructor has been called.\n";
		}

		// �Լ� ����.
		void Move(int xa, int ya);

		// ���� �Լ�(Getter).
		int GetX() const
		{
			return x;
		}

		// ���� �Լ� (Setter).
		void SetX(int newX)
		{
			x = newX;
		}

	private:
		int x = 0;
		int y = 0;
		int speed = 0;
	};
}