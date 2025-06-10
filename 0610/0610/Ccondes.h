#pragma once


class Ccondes
{
private:
	void init_settings(int skin = 3, int attack = 100, int defence = 55);
public:
	int m_skin;
	int m_attack;
	int m_defence;

	int m_VV;
	const int m_value;			/// 초기화 없이 상수 선언

	Ccondes();					/// 기본 생성자. 인수 없는 생성자
	Ccondes(int x);				/// int 형 인수를 받는 생성자
	Ccondes(char k);			/// char 형 인수를 받는 생성자
	Ccondes(int x, int y);		/// int, int 형 인수를 받는 생성자

	/// 복사 생성자 선언
	Ccondes(const Ccondes& obj);

	/// 객체 연산자 : 객체를 기준으로 연산을 수행하는 함수를 만드는 것
	///		객체가 항상 연산자보다 먼저 와야 한다.
	/// 객체 +(operator) 정수(인수)
	int operator + (int x);
	int operator - (int x);
	int operator * (int x);
	int operator / (int x);
	int operator % (int x);
	int operator < (int x);
	int operator > (int x);
	int operator << (int x);
	int operator >> (int x);
	int operator ^ (int x);
	int operator -> (){}

	Ccondes operator + (Ccondes obj);

	~Ccondes();			/// 소멸자
};

