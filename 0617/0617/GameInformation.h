#pragma once


class GameInformation
{
public:
	GameInformation();
	void setUserWin();
	void setComWin();
	void setDraw();
	void printGameStatus();

private:
	int m_userWin;
	int m_comWin;
	int m_Draw;
};

