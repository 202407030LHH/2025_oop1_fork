// 0311.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
/// using : 사용
/// namespace : 주소
/// std : standard(표준) 약자
/// 특정 네임 스페이스를 이 파일에서 사용한다.
/// JAVA : import 동일한 기능
using namespace std;

/// typedef : 새로운 자료형을 정의하는 방법
/// 형식 : typedef A B;   ==> 앞으로 A는 B로 사용한다.
typedef int INT;
typedef int i;

/// int 자료형을 선언. 값을 입력하여 상수화!
/// 상수화를 시킬때는 반드시 초기화하여 선언해야 한다!
const int aaa = 7;

void main()
{
    int akldfhaskodfh;
    /// const : 예약어는 바로 뒤에 변수/자료형을 상수로 만든다.
    const int k = 10;
    /// l-value = r-value
    /// l-value : 변수
    /// r-value : 상수, 변수, 함수, 식, 문장 ....
    //k = 90;           /// 불가능
    int b = 33 + k;     /// 가능
    /// 10 = 90;와 동일하게 인식하기 때문.


    //i i = 3;      /// i가 변수로 선언 : 이후로 번역 i가 변수? 자료형?
    int x = 10;
    INT y = 20;
    i a = 77;       /// int 자료형으로 i가 사용됨
    i i = 3;        /// i가 변수로 선언
    INT z = x + y + a + i;      /// i가 변수로 해석됨!
    /// INT z = x + y + a + int;
    printf("x + y = %d\n", z);

    /// 문자열에 대한 추가적인 정보를 확인할 수 있는 키워드
    /// SBCS(Single Byte Character Set), MBCS(Multi-Byte)
    char str[] = "대한민국";
    int length = sizeof(str);
    /// endl : end of line == \n
    cout << str << " S " << length << endl;

    wchar_t wstr[] = L"대한민국";
    int wlength = sizeof(wstr);
    wcout << str << " W " << wlength << endl;

    /// 오류 Vs. 경고
    /// 오류 : 번역 불가능
    /// 경고 : 번역 가능, 나중에 문제가 발생할 수 있다.
    /// 프로그램 작성 시, 오류 == 경고
    printf("%s\n", wstr);

    /// std : 표준 네임 스페이스
    /// :: - 범위 지정 연산자
    /// cout : 해당 네임 스페이스에서 사용 가능한 함수/기능/API/선언
    std::cout << "Hello World!\n";
}






