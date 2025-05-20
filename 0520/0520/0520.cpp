// 0520.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

#define OOP

#ifdef OOP

/// 클래스의 선언 : 예약어 클래스이름 { 멤버 변수; ... ; 멤버 함수; ... };
class ASDF
{
public:
    static void main(std::wstring[]){}
    /// JAVA에서 멤버 변수 선언 : 모든 변수에 대해 권한을 설정해야 함
    int java_value;     /// public
    /// C++에서 멤버 변수 선언
    int cpp_value;      /// private
    /// 권한
    ///     1. public : 공용 - 누구나 사용할 수 있는 권한
    ///     2. protected : 보호된 - 관계가 있는 경우에 사용할 수 있는 권한
    ///     3. private : 개인 - 나만 사용할 수 있는 권한
public:
    int m_value;
    int a;
    int b;
    int c;
    int d;
    int e;
    int f;

    void m_function()
    {
        mmm_private();
        printf("%s called\n", __FUNCTION__);
    }

private:            /// 클래스 내부에서만 사용한다. => 정보 은닉
    int m_private;
    void mmm_private()
    {
        /// asfldjkalsfjlasfjlasjfl;asfhkashfkashfklashdfkl
    }
};




int main()
{
    ASDF asdf;      /// 인스턴스화, 객체화
    asdf.m_function();
    return 0;
}


#endif

#ifdef C            /// if define 만약 C가 선언되어 있다면

/// 함수의 원형 또는 프로토타입 : 반환값부터 인수까지 내용을 기록
///     필요성 : 컴파일러 번역 시 코드 문제를 방지하기 위해서
//void add_return(int x, int y);        /// 변수명 표기한 원형
void add_return(int, int);              /// 자료형만 표기한 원형
//void ABC(int);            /// 구현체가 없으면 문제 발생

/// 디폴트 인자의 함수 원형
void add_value3(int a = 3, int b = 5, int c = 90);


/// default 인자 : 인수 값이 주어지지 않을때, 자동으로 입력되는 값
void add_value(int a, int b, int c = 99)
/// a == radius, b == circle, cos
{
    printf("%s : %d %d %d\n", __FUNCTION__, a, b, c);
}
/*
/// 디폴트 인자를 사용할 때 마지막 부분이 아니면
/// 일반 함수 호출에서 인수 모두 작성해서 호출하는 것과 동일 ==> 의미 X
void add_value1(int a = 1, int b, int c)
{
    /// 함수 호출 방법 : 1개만 가능
}

void add_value2(int a, int b = 5, int c)
{
    /// 함수 호출 방법 : 1개만 가능
}
*/
void add_value3(int a, int b, int c)
{
    /// 함수 호출 방법 : 4개 가능
}


/// 함수에서 const 인수가 갖는 의미
/// 개발자가 의도를 보여줄 수 있다. 난 안 바꿀거야.
void get_value(const int* arg)
{
    int pp = 3;
    arg = &pp;

    int* ptr = (int*)arg;
    *ptr = 999;
}

void Int(const int const p)
{
    const int const pp = 3;
}

void abc(const int* const p)
{

}

int main()
{
    int kkk = 1000;
    get_value(&kkk);
    printf("kkk : %d\n", kkk);

    add_value3();
    add_value3(1);
    add_value3(354, 234);
    add_value3(89236, 2387, 2398);

    //add_value2(3, 5);     // 불가
    //add_value2(3, 5, 9);

    //add_value1(3, 5);     // 불가
    //add_value1(1, 3, 5);

    add_value(10, 20);
    add_value(10, 20, 10);
//    ABC(567);
    add_return(3, 5);
    std::cout << "Hello World!\n";
}


void add_return(int x, int y)
{
    printf("%s called\n", __FUNCTION__);
    return; /// 함수의 동작을 멈추고 호출한 위치로 되돌아 간다.
/// 아래 코드는 동작하지 않는다.
    x + y;
    x++;
}

#endif
