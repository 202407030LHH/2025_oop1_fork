#include "GameInformation.h"

#include <iostream>

GameInformation::GameInformation()
{
	m_userWin = 0;
	m_comWin = 0;
	m_Draw = 0;
}


void GameInformation::setUserWin()
{
	m_userWin++;
}

void GameInformation::setComWin()
{
	m_comWin++;
}

void GameInformation::setDraw()
{
	m_Draw++;
}

void GameInformation::printGameStatus()
{
	printf("사용자[ %d ] 컴퓨터[ %d ] 비김[ %d ]\n",
		m_userWin, m_comWin, m_Draw
		);
}