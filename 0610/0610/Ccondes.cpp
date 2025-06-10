#include "Ccondes.h"
#include <iostream>

void Ccondes::init_settings(int skin, int attack, int defence)
{
	m_skin = skin;
	m_attack = attack;
	m_defence = defence;
}


Ccondes::Ccondes() : m_value(3), m_VV(3+7)
/// 생성자의 선처리 영역 : 함수의 인수의 )와 몸체의 시작 { 사이
/// 반드시 초기화 되어야 하는 변수들이나 값들을 실행 중에 설정 가능!
{
	init_settings();
	printf("인수가 없는 생성자가 호출 되었습니다.\n");
}

Ccondes::Ccondes(int x) : m_value(x), m_VV(x*10)
{
	init_settings();
	printf("int 인수 생성자가 호출 되었습니다.\n");
}

Ccondes::Ccondes(char k) : m_value(1), m_VV(55)
{
	init_settings();
	printf("char 인수 생성자가 호출 되었습니다.\n");
}

Ccondes::Ccondes(int x, int y) : m_value(y), m_VV(x + y)
{
	init_settings();
	printf("int int 인수 생성자가 호출 되었습니다.\n");
}

Ccondes::Ccondes(const Ccondes& obj) : m_value(7), m_VV(99)
{
	init_settings();
	this->m_skin = obj.m_skin;
	this->m_attack = obj.m_attack / 5;
	this->m_defence = obj.m_defence / 5;
}


/// 객체 + 3 ==> 객체.m_value + 3 ==> 결과 (int)
int Ccondes::operator + (int x)
{
	return m_value + x;
}

/// 객체 + 객체 ==> 결과 : 객체
Ccondes Ccondes::operator + (Ccondes obj)
{
	Ccondes tmp;
	tmp.m_attack = this->m_attack + obj.m_attack;
	return tmp;
}



Ccondes::~Ccondes()
{
	printf("소멸자가 호출 되었습니다.\n");
}
/// 후처리 영역
