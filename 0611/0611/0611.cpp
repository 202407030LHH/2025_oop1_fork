// 0611.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

using namespace std;

/// 상속 관계가 있는 인스턴스를 생성할 때, 부모부터 메모리에 적재
/// A class --상속--> B class --상속--> C class
/// 메모리 생성 순서 : A --> B --> C 순으로 생성
/// 메모리 해제 순서 : C --> B --> A 순으로 해제
/// 힌트 : 배열 명이 가지는 특성을 생각해~


/// 부모 클래스를 선언
class CParent
{
protected:
    int m_pro;
    void m_proc()
    {
        printf("CParent 클래스의 protected 멤버 호출\n");
    }
public:
    CParent()
    {
        printf("CParent 클래스의 생성자 호출\n");
    }
    ~CParent()
    {
        printf("CParent 클래스의 소멸자 호출\n");
    }

    void Func1()
    {
        m_Value1 = 1;
    }

    int m_Value1;
};


/// 자식 클래스 : 부모 클래스를 상속
///     상속을 받으면 부모 클래스의 정보/기능을 사용할 수 있다.
///     상속 : class 자식클래스이름 :(상속) 권한 부모클래스
///     다중 상속 : class 자식클래스이름 : 권한 부모클래스1, 권한 부모클래스2, ...
class CTest : public CParent
{
public:
    CTest()
    {
        /// 부모 클래스의 protected 멤버에 접근할 수 있다!
        m_pro = 1;
        m_proc();
        printf("CTest 클래스의 생성자 호출\n");
    }
    ~CTest()
    {
        printf("CTest 클래스의 생성자 호출\n");
    }

    /// 부모 클래스의 멤버 함수를 재정의 하였다.
    void Func1()
    {
        m_Value1 = 2;
    }

    void Func2()
    {
        m_Value2 = 3;
    }

    int m_Value1;
    int m_Value2;

};


int main()
{
    CParent cp;
    printf("CP : %p %p\n", &cp, &cp.m_Value1);

    /// 자식 클래스의 인스턴스화. 메모리에 적재
    /// 자식 클래스가 인스턴스화되면, 부모 클래스도 인스턴스화 된다.
    CTest t;
    printf("CT: %p %p %p\n", &t, &t.m_Value1, &t.m_Value2);
    printf("CP: %p\n", &t.CParent::m_Value1);

    /// 자식 클래스에서 부모 클래스의 멤버 함수를 호출하는 방법
    /// 인스턴스이름.부모클래스이름::부모클래스의멤버
    t.CParent::Func1();     // 부모 클래스의 Func1() 함수 호출
    t.Func1();              // 자식 클래스의 Func1() 함수 호출
    t.Func2();

    cout << t.CParent::m_Value1 << endl;
    cout << t.m_Value1 << endl;
    cout << t.m_Value2 << endl;
    std::cout << "Hello World!\n";
}
