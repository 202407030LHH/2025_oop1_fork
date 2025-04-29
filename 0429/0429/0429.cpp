// 0429.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

typedef struct STag
{
    int m;
    char str1[4];
    const char* str2;
} SType;


/// 구조체 선언 예제
/// typedef A B;    ==> A 자료형은 B로 사용한다.
/// typdef int INT;
typedef 
/// A 시작
struct ABC
{
    int a;  /// int 형 멤버 변수 선언
    int b;
    int c;
}
/// A의 종료
DEF,        /// 일반적인 B
*PDEF       /// 포인터 변수 B
;


int main()
{
    /// 구조체 변수 선언 : C언어 스타일
    struct ABC a;
    /// 구조체 변수 선언 : C++언어 스타일
    ABC b;
    /// typedef를 이용한 구조체 변수 선언
    DEF c;              /// == int c;
    DEF* ppp = &c;      /// == int *p = &c;
    PDEF pppp = &c;     /// == int *p = &c;

    /// 구조체 Vs. 배열
    /// 배열 : 동일한 자료형의 변수를 동시에 여러개 선언한다.
    /// 구조체 : 각기 다른 자료형을 한꺼번에 선언한다.
    /// 공통점 : 요청한 변수 크기만큼 메모리가 한번에 잡힌다.
    /// 구조체 선언 : 예약어 구조체이름 { 멤버1; 멤버2; 멤버3; }; 
    ///     Ex) struct ABC { int x; char *p; int a[10]; } ;
    /// 구조체 변수 선언 : struct ABC a; == int a;
    /// 구조체 멤버 접근
    ///  1) 직접 멤버 연산자 : 구조체변수명.멤버이름 Ex) a.x = 10;
    ///         일반적인 구조체 변수
    ///  2) 간접 멤버 연산자 : 구조체변수명->멤버이름
    ///         포인터 구조체 변수

    SType s1;
    s1.m = 2017;
    memcpy(s1.str1, "C++", 4);
    s1.str2 = "World";
    /// 포인터에서 중요한 것 : 자료형이 다르면 할당 불가능!

    SType s2;
    /// 구조체 변수 간의 대입 연산 : 복사 연산
    /// int a = 3; int b = a; a의 값이 복사되어 b에 입력
    s2 = s1;

    printf("S1 : %p %p %p\n", &s1.m, &s1.str1, s1.str2);
    printf("S2 : %p %p %p\n", &s2.m, &s2.str1, s2.str2);

    std::cout << s2.m << " " << s2.str1 << " " <<
        s2.str2 << std::endl;

    DEF de;
    de.a = 100; de.b = 300; de.c = 500;
    int* pde = (int*) & de;
    printf("%d %d %d\n", pde[0], pde[1], pde[2]);


    std::cout << "Hello World!\n";
}
