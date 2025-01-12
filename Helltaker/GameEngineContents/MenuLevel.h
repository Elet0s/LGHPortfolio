#pragma once
#include<GameEngine/GameEngineLevel.h>
#include <GameEngineBase/GameEngineSound.h>
class MenuSelcet;
class StartText;
class BeelFly;
class MenuBackGround01;
class MenuBackGround02;
class StartBackGround;
class StartEvent;
class EndText;
class LodingManager;

class MenuLevel : public  GameEngineLevel
{
private:
	float NextCount_;
	MenuSelcet* MenuSelcet_;
	StartText* StartText_;
	BeelFly* BeelFly_;
	MenuBackGround01* MenuBackGround01_;
	MenuBackGround02* MenuBackGround02_;
	StartBackGround* StartBackGround_;
	StartEvent* StartEvent_;
	EndText* EndText_;
	LodingManager* LodingManager_;

public:
	inline float GetNextCount()
	{
		return NextCount_;
	}
public:
	MenuLevel();
	~MenuLevel();

	GameEngineSoundPlayer BgmPlayer_;
	GameEngineSoundPlayer TextSound_;
	GameEngineSoundPlayer SelectSound_;

	MenuLevel(const MenuLevel& _Other) = delete;
	MenuLevel(MenuLevel&& _Other) noexcept = delete;
	MenuLevel& operator=(const MenuLevel& _Other) = delete;
	MenuLevel& operator=(MenuLevel&& _Other) noexcept = delete;
protected:
	void Start() override;
	void Update() override;
	void LevelChangeStart(GameEngineLevel* _NextLevel) override;
	void LevelChangeEnd(GameEngineLevel* _PrevLevel) override;

};