// report.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include "add.h"
#include "mul.h"

int main()
{
    int x = 16;
    int y = 26;
    printf("ADD: %d\n", add(x, y));
    printf("MUL: %d\n", mul(x, y));
    std::cout << "Hello World!\n";
}
