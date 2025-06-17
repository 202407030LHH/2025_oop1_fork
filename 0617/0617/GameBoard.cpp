#include "GameBoard.h"


/// 0 - 이긴 경우
/// 1 - 진 경우
/// 2 - 비긴 경우
GameBoard::GameBoard()
{
	m_board[0][0] = 2;
	m_board[0][1] = 1;
	m_board[0][2] = 0;

	m_board[1][0] = 0;
	m_board[1][1] = 2;
	m_board[1][2] = 1;

	m_board[2][0] = 1;
	m_board[2][1] = 0;
	m_board[2][2] = 2;
}

int GameBoard::getGameResult(int user, int com)
{
	return m_board[user][com];
}