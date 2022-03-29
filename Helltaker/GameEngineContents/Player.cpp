#include "Player.h"
#include <GameEngine/GameEngine.h>
#include <GameEngineBase/GameEngineWindow.h>
#include <GameEngine/GameEngineImageManager.h>
#include<GameEngineBase/GameEngineInput.h>
#include<GameEngineBase/GameEngineTime.h>

Player::Player()
{
}

Player::~Player()
{
}


void Player::Start()
{
	SetPosition(GameEngineWindow::GetScale().Half());
	SetScale(GameEngineWindow::GetScale());

	CreateRenderer("Plyer01.bmp");
	CreateRendererToScale("lovesign.bmp", float4(30.0f, 30.0f), RenderPivot::CENTER, float4(-30.0f, -30.0f));

	if (false == GameEngineInput::GetInst()->IsKey("MoveLeft"))
	{
		GameEngineInput::GetInst()->CreateKey("MoveLeft", 'A');
		GameEngineInput::GetInst()->CreateKey("MoveRight", 'D');
		GameEngineInput::GetInst()->CreateKey("MoveUp", 'W');
		GameEngineInput::GetInst()->CreateKey("MoveDown", 'S');
		GameEngineInput::GetInst()->CreateKey("Jump", VK_LSHIFT);
		GameEngineInput::GetInst()->CreateKey("Fire", VK_SPACE);
	}
}

void Player::Update()
{

	if (true == GameEngineInput::GetInst()->IsPress("MoveLeft"))
	{
		SetMove(float4::LEFT /** GameEngineTime::GetDeltaTime()*/);
	}

	if (true == GameEngineInput::GetInst()->IsPress("MoveRight"))
	{
		SetMove(float4::RIGHT);
	}

	if (true == GameEngineInput::GetInst()->IsPress("MoveUp"))
	{
		SetMove(float4::UP);
	}

	if (true == GameEngineInput::GetInst()->IsPress("MoveDown"))
	{
		SetMove(float4::DOWN);
	}
}

void Player::Render()
{
}