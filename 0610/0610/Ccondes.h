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
	const int m_value;			/// �ʱ�ȭ ���� ��� ����

	Ccondes();					/// �⺻ ������. �μ� ���� ������
	Ccondes(int x);				/// int �� �μ��� �޴� ������
	Ccondes(char k);			/// char �� �μ��� �޴� ������
	Ccondes(int x, int y);		/// int, int �� �μ��� �޴� ������

	/// ���� ������ ����
	Ccondes(const Ccondes& obj);

	/// ��ü ������ : ��ü�� �������� ������ �����ϴ� �Լ��� ����� ��
	///		��ü�� �׻� �����ں��� ���� �;� �Ѵ�.
	/// ��ü +(operator) ����(�μ�)
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

	~Ccondes();			/// �Ҹ���
};

