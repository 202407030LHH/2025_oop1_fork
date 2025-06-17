#pragma once

#include "Random.h"
#include "GameBoard.h"
#include "GameInformation.h"

class Game : public GameBoard, public GameInformation
{
public:
	int normalGame();
	int userLoseGame(int);

private:
	Random m_rnd;
};

