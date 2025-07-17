#pragma once

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