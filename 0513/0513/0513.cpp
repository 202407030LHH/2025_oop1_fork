// 0513.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <stdlib.h>     /// 랜덤 함수를 사용하기 위해 필요한 헤더
#include <time.h>       /// 시간 정보와 함수를 사용하기 위해 필요.

/// 함수 == 기능
/// 함수 생성 방법
///     1. 반환 값 : 기능 수행된 다음 결과를 반환하는 값
///         자료형으로 표현. void는 반환 값이 없다는 의미.
///     2. 함수의 이름 : 사용자 정의(개발자가 마음대로 정한다.)
///     3. 함수의 인수(인자, 파라미터, 매개 변수)
///         기능을 수행할 때 필요한 추가적인 정보
///     4. 함수의 내용 : 개발자가 의도한 기능을 직접 구현.

/// 로또 번호 생성기 : 랜덤 숫자, 10개
/// 함수 정보 : 랜덤한 숫자를 반환하는 기능
///     1. 반환 값 : int
///     2. 함수 이름 : getLotto
///     3. 인수 : void
///     4. 내용물 : 1 ~ 45 사이의 숫자를 랜덤하게 얻어낸다.
/// 함수 형식 : 반환값 함수이름( 인수 ) { 내용물 }
int getLotto()
{
    int rnd = 0;
    /// 랜덤 값을 획득
    rnd = rand() % 45 + 1;      /// 0 ~ 44 ==> 1 ~ 45

    return rnd;

    ///return rand() % 45 + 1;
}


/// 함수 호출 방식 : 결과적으로 2개가 존재.
/// 함수 호출 종류의 구분은 함수의 인수로 결정.
/// C언어에서는 2가지가 존재. C++에서는 3가지가 존재.
/// 1. call by value : 값에 의한 호출
/// 2. call by address : 주소에 의한 호출 : 포인터
/// 3. call by reference : 참조 변수에 의한 호출

/// 1. call by value
void call_by_value(int value)       /// 일반 변수 선언
                                /// int value = value;
                                /// int value = 111;
{
    value++;
    printf("%s - %d\n", __FUNCTION__, value);
}

/// 2. call by address(주소 : 인수를 포인터로 받겠다.)
/// stack의 범위를 벗어나 직접 주소의 값을 변경할 수 있다.
void call_by_address(int* value)    /// 포인터 변수 선언
                                /// int *value = &value;
{
    //*value++;     /// 연산자의 우선순위 : ++ ==> *
    (*value)++;
    printf("%s - %d\n", __FUNCTION__, *value);
}

/// 3. call by reference : 참조에 의한 호출
void call_by_reference(int& value)      /// int &value = value;
{
    int x = 3;
    int& a = x; /// 참조 변수는 선언 시에 초기화를 반드시!
    value++;
    printf("%s - %d\n", __FUNCTION__, value);
}

void call_by_all(int x, int *y, int& z, int k, int r, int p)
/// int x = value ; int *y = &value ; int &z = value ;
/// int k = value + 3 ; int r = value * 2; int p = value / 2;
{ 
    int value = 0;
    call_by_all(value, &value, value, value + 3, value * 2, value / 2);
}


/// 함수 인수의 전달 방식
//   test(k)
void test(int x, int y)     /// int x = k; k == 100
                            /// int x = k; int y = k + 1;
{
    x++;
}

void TEST()
{
    int k = 100;
    //int x = k;
    test(k, k + 1);
}


/// 구조체를 이용한 함수 호출 방식
typedef struct ASDF
{
    int x[100];
    int y;
    int z[1500];
} ASDF, *PASDF;

/// 1. 구조체를 이용한 call by value
void cbv_asdf(ASDF value)
{
    printf("%s : %lld\n", __FUNCTION__, sizeof(value));
}

/// 2. 구조체 포인터를 이용한 call by address
void cba_asdf(PASDF value)
{
    printf("%s : %lld\n", __FUNCTION__, sizeof(value));
}

/// 3. 구조체 참조 변수를 이용한 call by reference
void cbr_asdf(ASDF& value)
{
    printf("%s : %lld\n", __FUNCTION__, sizeof(value));
}

int add(int x)
{
}


/// 함수의 중복 정의 : 동일한 함수 이름을 사용할 수 있다. C++
///  ==> 개발자의 편의성 도모
/// C언어에서 동일한 함수 이름을 사용할 수 있는가? ==> 불가능
/// 함수 중복 정의에서 반환 값은 구분 값으로 사용할 수 없다.
/// 인수의 자료형이 하나라도 다르면 함수는 구분된다.
/// 인수의 개수가 다르면 다른 함수로 구분된다.

void add()
{ }

void add(char x)
{
}

int add(int x)
{
    return x + 1;
}

int add(int x, int y)
{
    return x + y;
}

void add(char x, int y)
{

}



int main()
{
    int rnd = 0;        /// 랜덤 값을 받을 변수
    int i = 0;          /// 반복문을 위한 변수

    int value = 111;
    /// call by value 함수 호출
    /// 값이 전달(복사)되기 때문에 원본에는 영향이 없다.
    call_by_value(value);
    printf("%s : %d\n", __FUNCTION__, value);

    /// call by address 함수 호출
    /// 값 전달이 아니라 주소를 전달한다.
    call_by_address(&value);
    printf("%s : %d\n", __FUNCTION__, value);

    /// call by reference 함수 호출
    /// 참조 변수로 호출하는 경우
    call_by_reference(value);
    printf("%s : %d\n", __FUNCTION__, value);

    ASDF asdf = { 10, 20, 30 };
    /// 구조체 인수 함수들을 호출
    cbv_asdf(asdf);
    cba_asdf(&asdf);
    cbr_asdf(asdf);


    /// 랜덤 시드를 변경
    srand(time(NULL));

    for (i = 0; i < 10; i++)
    {
        /// 나머지 연산의 특징
        // K % N => 0 ~ N - 1
        rnd = getLotto();
        printf("RND[ %d ]: %d\n", i + 1, rnd);
    }

    std::cout << "Hello World!\n";
}
