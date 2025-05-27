// 0527.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include "Cexam.h"

/// * 클래스는 설계만 되어 있는 내용
/// * 객체는 메모리에 설계도대로 업로드 된 내용

int g_x;

class CTest
{
public:
    int m_I = 1;                /// 일반 멤버 변수 초기화
    const int m_CI = 2;         /// 일반 상수 멤버 변수 초기화
    static int s_I;             /// 정적 멤버 변수 선언
    static const int s_CI = 4;  /// 정적 상수 멤버 변수 초기화

    double m_D = 1;
    const double m_CD = 2.2;
    static double s_D;          /// 정적 멤버 변수 선언
    static const double s_CD;   /// 정적 상수 멤버 변수 선언
};

/// 정적 멤버를 클래스 외부에서 초기화하는 방법
/// 자료형 클래스이름::정적멤버변수명 = 값;
int CTest::s_I = 3;             /// 정적 멤버 변수 초기화
double CTest::s_D = 3.3;        /// 정적 멤버 변수 초기화
const double CTest::s_CD = 4.4; /// 정적 상수 멤버 변수 초기화


int kkk = 9;

int main()
{
    int kkk = 999;
    kkk++;          /// 지역 변수


    /// 인스턴스화(객체) : 클래스를 메모리에 적재
    Cexam c;
    c.temp = 10;
    c.x = 90;
    c.getX();
    printf("1: %d - %d\n", c.x, Cexam::x);
    //Cexam::temp = 10;
    Cexam::x = 10;          /// 전역 변수처럼 동작
    printf("2: %d - %d\n", c.x, Cexam::x);
    c.setTemp(100);
    printf("3: %d\n", c.temp);

    std::cout << "Hello World!\n";
}
