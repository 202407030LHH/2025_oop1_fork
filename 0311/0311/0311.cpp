// 0311.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
/// using : 사용
/// namespace : 주소
/// std : standard(표준) 약자
using namespace std;


void main()
{
    /// 문자열에 대한 추가적인 정보를 확인할 수 있는 키워드
    /// SBCS(Single Byte Character Set), MBCS(Multi-Byte)
    char str[] = "대한민국";
    int length = sizeof(str);
    cout << str << " S " << length << endl;

    wchar_t wstr[] = L"대한민국";
    int wlength = sizeof(wstr);
    wcout << str << " W " << wlength << endl;


    std::cout << "Hello World!\n";
}
