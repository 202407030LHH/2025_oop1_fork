#include "Game.h"

int Game::normalGame()
{
	return m_rnd.getRandom(3);
}

int Game::userLoseGame(int user)
{
	int i = 0;
	int k = 0;
	int value = 0;

	for (k = 0; k < 3; k++)
	{
		value = m_board[user][k];
		if (0 == value)
			break;
	}

	return k;
}