// 0415.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{
    /// 포인터의 모든 것!!!!
    int a = 3;
    int* p = &a;
    /// a : a - 값 3, *a ==> 오류, &a - a의 주소
    /// p : p - (a)주소, *p == a, &p - p의 주소

    /// 포인터 변수 선언시에 사용하는 *의 개수
    /// 몇번 이동해야 가리키는 변수에 직접 접근이 가능한가
    
    /// 다중 포인터
    int x = 9;              /// x 값
    int* p1 = &x;           /// x의 주소
    int** p2 = &p1;         /// p1의 주소
    int*** p3 = &p2;
    int**** p4 = &p3;

    printf("x: %d, %p\n", x, &x);       /// *a => 오류
    printf("p1: %p %d %p\n", p1, *p1, &p1);
    /// p2 == p1의 주소, *p2 == p1, **p2 == x
    printf("p2: %p %p %d %p\n", p2, *p2, **p2, &p2);
    printf("p3: %p %p %p %d %p\n", p3, *p3, **p3, ***p3, &p3);
    printf("p4: %p %p %p %p %d %p\n", p4, *p4, **p4, ***p4, ****p4, &p4);

    /// * == <--
    /// x <-- p1 <-- p2 <-- p3 <-- p4
    /// p4 : p3, p2, p1, x의 주소
    /// p3 : p2, p1, x의 주소
    /// ...
    /// ****p4 == ***p3 == **p2 == *p1 == x
    
    /// 포인터에서의 연산자
    /// 1. * : 선언, 값에 접근 사용
    /// 2. & : 선언(C++), 변수의 주소 값 획득 사용
    /// int x = 9; int *p = &x;
    int& rx = x;        /// 참조 타입 변수
    printf("x rX: %d %d\n", x, rx);
    rx = 1;     /// 참조 타입으로 변수 값 변경
    printf("x rX: %d %d\n", x, rx);
    /// 참조 변수 : 반드시!!! 일반 변수로 초기화
    /// int& rxx = nullptr, NULL, 0; 초기화 불가
    /// int& rxx = p1, p2, p3, p4; 초기화 불가
    
    /// * 배열 : 동일한 자료형을 갖는 변수를 한꺼번에 생성하고,
    ///         사용할 수 있도록 구성된 자료구조.
    /// 선언 : 자료형 배열이름[ 원소의 개수/인덱스/첨자 ]
    ///         Ex) int s1[34]; ==> int형 변수 34개 동시 선언
    ///         첨자/인덱스의 시작 값 : 0
    ///         첨자/인덱스의 종료 값 : 34 - 1
    ///         s1[3] == *(s1 + 3)
    /// 배열 == 포인터
    int ar[5] = { 1234, 252, 453, 674, 5235 };  /// 1, 2, 3, 4, 5
    int ar1[5] = { 1, 3, };         /// 1, 3, 0, 0, 0
    int ar2[5] = { 0, };            /// 0, 0, 0, 0, 0
    int ar3[] = { 3, 4 };           /// ar[2] = { 3, 4 }
    int* ap = ar;       /// ar은 이미 포인터 == 주소 값
    /// *ap == *(ap + 0) == ar[0]
    /// int a = 3; int b = a;
    /// int* p = &a; int* p1 = p; /// (p == &a);

    for (int i = 0; i < 5; i++)
    {
        printf("AR : %d - %d\n", ar[i], *(ar + i));
    }
    for (int i = 0; i < 5; i++)
    {
        printf("AP : %d - %d\n", ap[i], *(ap + i));
    }

    /// 포인터와 배열의 차이점!!!
    /// 1. 선언할 때 - 배열 : 모든 메모리가 할당된 상태
    ///                포인터 : 할당되지 않아도 문제 없다.
    /// 2. 배열 변수의 특징 : 상수
    
    /// 동적 메모리 할당 : 필요에 따라 OS에게 메모리를 요청해서 사용
    ///             ==> heap 영역에 존재
    /// 정적 메모리 할당 : 선언된 메모리가 스택에 포함된다.
    /// 
    /// Ex) 동적 메모리 할당으로 포인터를 배열처럼 사용해보기
    int* app = nullptr;
    app = (int*)malloc(sizeof(int) * 5); /// 20 byte
    for (int i = 0; i < 5; i++)
    {
        app[i] = 2 + i;
        printf("APP : %d - %d\n", app[i], *(app + i));
    }
    free(app);

    app = p1;
    app = &x;
    app = &a;
    app = **p3;
    //ar = p1;  /// 배열명은 상수이기 때문에 변경 불가
    const int CN = 6;
    printf("CN : %d\n", CN);
    int* cn = (int*)&CN;
    *cn = 999;
    printf("CN : %d %d\n", CN, *cn);

    /// int a[2] == pointer
    /// int a[2][3] == 2중 포인터
    int arrr[2][3] = { { 11, 22, 33}, {44, 55, 66} };
    //int** parrr = (int**)arrr;
    int (*p)[3] = arrr;

    printf("%d\n", p[1][2]);

    std::cout << "Hello World!\n";
}
