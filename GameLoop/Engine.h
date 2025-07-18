#pragma once

#include <Windows.h>

class Engine
{
public:

	// ������.
	Engine();

	// �Ҹ���.
	~Engine();

	// ���� ���� �Լ�.
	void Run();

	// ���� �Լ�.
	void Quit();

private:
	void ProcessInput();
	void Update(float deltaTime = 0.0f);
	void Render();

private:
	// ���� ���� �÷���.
	bool isQuit = false;
};