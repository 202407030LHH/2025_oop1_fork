#include "Cexam.h"

/// 일반 함수는 상수화할 수 없다
/*
void kkk() const
{

}
*/


int Cexam::getMyValue(int ttt) const
{
	int a = 10;
	int b = 20;
	int c = a + b;
	ttt++;
	/// 멤버 변수가 상수가 되어 있는 상태
	//temp++;
	return c;
}


void Cexam::setTemp(int temp)
{
	/// this : 항상 자기 자신(객체, 인스턴스)을 가리키는 포인터
	///		별도의 선언 없이도 항상 사용이 가능
	///		포인터이므로 간접 멤버 연산자를 사용
	this->temp = temp;
}


/// 클래스의 멤버라는 사실을 인식시켜주면 해결
/// 구현체에서는 static 키워드를 제외해야 한다.
void Cexam::getX()
{
	/// 정적 멤버 함수 내부에서는 정적 멤버 변수만 사용 가능
	x = x + 10;
	/// 일반 멤버 함수는 인스턴스화가 되어야만 접근 가능
	/// 일반 멤버 변수는 정적 멤버 함수 내에서 사용 불가
	//temp = temp + 10;
}


/// 정적 멤버의 초기화
int Cexam::x = 50;