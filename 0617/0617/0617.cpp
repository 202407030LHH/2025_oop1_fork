// 0617.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

using namespace std;

#include "Game.h"

int main()
{
    int user = 0;
    int com = 0;
    int res = 0;
    int cnt = 0;
    Game game;

    while(true)
    {
        cout << "가위(0) 바위(1) 보(2) : ";
        cin >> user;
        //user = ( i + 1 ) % 3;

        if (3 == user)
            break;

        if (cnt < 15)
        {
            com = game.userLoseGame(user);
        }
        else
        {
            com = game.normalGame();
        }
        cnt++;
        printf("me[ %d ] com[ %d ]\n", user, com);
        res = game.getGameResult(user, com);
        switch (res)
        {
        case 0:
            printf("내가 이겼다!!!\n");
            game.setUserWin();
            break;
        case 1:
            printf("내가 졌다ㅠㅠ\n");
            game.setComWin();
            break;
        case 2:
            printf("비겼다.................\n");
            game.setDraw();
            break;
        }

        game.printGameStatus();
    }
}

/*
#include <stack>
#include <queue>
#include <vector>

/// 템플릿 프로그래밍 : 함수 예제
template <typename T>
T add(T a, T b)
{
    return a + b;
}


int main()
{
    printf("%d\n", add(3, 5));
    printf("%lf\n", add(3.3, 5.6));
    std::cout << "Hello World!\n";
}
*
*/
