#pragma once
#include <GameEngine/GameEngine.h>

// ���� : �������� ������� ������ �����ϱ� �׳� ���͵�����̶� �������ϴ�.
//       �����е��� ���� �ڽ��� ������� ���ӿ� �´� �̸��� �̳༮���� �ٿ��ֽø� �˴ϴ�.
class Helltaker : public GameEngine
{
public:
	// constrcuter destructer
	Helltaker();
	~Helltaker();

	// delete Function
	Helltaker(const Helltaker& _Other) = delete;
	Helltaker(Helltaker&& _Other) noexcept = delete;
	Helltaker& operator=(const Helltaker& _Other) = delete;
	Helltaker& operator=(Helltaker&& _Other) noexcept = delete;

	void GameInit() override;
	void GameLoop() override;
	void GameEnd() override;

protected:

private:

};
