#include "TitleBackGround.h"
#include <GameEngineBase/GameEngineWindow.h>

TitleBackGround::TitleBackGround()
{
	// Level_ = nullptr;
}

TitleBackGround::~TitleBackGround()
{
}

void TitleBackGround::Start()
{
	SetPosition({ GameEngineWindow::GetScale().Half() });
	CreateRenderer("TitleBackGround.bmp");
}

void TitleBackGround::Render()
{

}