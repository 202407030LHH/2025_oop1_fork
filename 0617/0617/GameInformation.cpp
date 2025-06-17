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
	printf("��ü[ %d ] : �����[ %d ] ��ǻ��[ %d ] ���[ %d ]\n",
		m_userWin + m_comWin + m_Draw,
		m_userWin, m_comWin, m_Draw
		);
	printf("���� �̱� Ȯ��: %.2f %%\n",
		(float)m_userWin / (m_userWin + m_comWin + m_Draw) * 100);
}