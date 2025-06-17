#pragma once

class GameBoard
{
public:
	GameBoard();
	int getGameResult(int user, int com);
protected:
	int m_board[3][3];
};

