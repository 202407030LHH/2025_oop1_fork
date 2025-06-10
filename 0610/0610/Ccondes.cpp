#include "Ccondes.h"
#include <iostream>

void Ccondes::init_settings(int skin, int attack, int defence)
{
	m_skin = skin;
	m_attack = attack;
	m_defence = defence;
}


Ccondes::Ccondes() : m_value(3), m_VV(3+7)
/// �������� ��ó�� ���� : �Լ��� �μ��� )�� ��ü�� ���� { ����
/// �ݵ�� �ʱ�ȭ �Ǿ�� �ϴ� �������̳� ������ ���� �߿� ���� ����!
{
	init_settings();
	printf("�μ��� ���� �����ڰ� ȣ�� �Ǿ����ϴ�.\n");
}

Ccondes::Ccondes(int x) : m_value(x), m_VV(x*10)
{
	init_settings();
	printf("int �μ� �����ڰ� ȣ�� �Ǿ����ϴ�.\n");
}

Ccondes::Ccondes(char k) : m_value(1), m_VV(55)
{
	init_settings();
	printf("char �μ� �����ڰ� ȣ�� �Ǿ����ϴ�.\n");
}

Ccondes::Ccondes(int x, int y) : m_value(y), m_VV(x + y)
{
	init_settings();
	printf("int int �μ� �����ڰ� ȣ�� �Ǿ����ϴ�.\n");
}

Ccondes::Ccondes(const Ccondes& obj) : m_value(7), m_VV(99)
{
	init_settings();
	this->m_skin = obj.m_skin;
	this->m_attack = obj.m_attack / 5;
	this->m_defence = obj.m_defence / 5;
}


/// ��ü + 3 ==> ��ü.m_value + 3 ==> ��� (int)
int Ccondes::operator + (int x)
{
	return m_value + x;
}

/// ��ü + ��ü ==> ��� : ��ü
Ccondes Ccondes::operator + (Ccondes obj)
{
	Ccondes tmp;
	tmp.m_attack = this->m_attack + obj.m_attack;
	return tmp;
}



Ccondes::~Ccondes()
{
	printf("�Ҹ��ڰ� ȣ�� �Ǿ����ϴ�.\n");
}
/// ��ó�� ����
