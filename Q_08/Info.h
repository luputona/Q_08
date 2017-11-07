#pragma once
#pragma warning(disable :4996)
#ifndef __INFO_H__
#define __INFO_H__
//	���� �巡��
//	��� - Ȱ, Į, ���� ����
//	�巡�� - ��, ����, ���� ����
//	�ֻ����� ���� �̱� ���� ����
//	���� ���´� ����
//
//	�������� 
//	1. Ŭ����
//	2.��������
//	3.ĸ��ȭ
//	4.�����Ҵ�
//	5. ������, �Ҹ���
//	6. �̴ϼȶ�����

#include<iostream>
#include<cstring>
using namespace std;
class Hero
{
private:
	int m_skill1;
	int m_skill2;
	int m_skill3;
	int m_nHp;
	char *m_name;
	char *m_skill1_name;
	char *m_skill2_name;
	char *m_skill3_name;
public:
	Hero();
	Hero(char *_name, char *_skill1_name, char *_skill2_name, char *_skill3_name, const int &_skill1, const int &_skill2, const int &_skill3, int _hp);

	void ShowStatus()const;
	int GetSkillDamage1() const;
	int GetSkillDamage2() const;
	int GetSkillDamage3() const;
	char *GetSkillName1() const;
	char *GetSkillName2() const;
	char *GetSkillName3() const;
	char *GetName()const;
	int Hp();
};

class Dragon
{
private:
	int m_skill1;
	int m_skill2;
	int m_skill3;
	int m_nHp;
	char *m_name;
	char *m_skill1_name;
	char *m_skill2_name;
	char *m_skill3_name;
public:
	Dragon();
	Dragon(char *_name, char *_skill1_name, char *_skill2_name, char *_skill3_name, const int &_skill1, const int &_skill2, const int &_skill3, int _hp);

	void ShowStatus()const;
	int GetSkillDamage1() const;
	int GetSkillDamage2() const;
	int GetSkillDamage3() const;
	char *GetSkillName1() const;
	char *GetSkillName2() const;
	char *GetSkillName3() const;
	char *GetName()const;
	int Hp();
};
class Manager
{
private:
	Hero *m_hero;
	Dragon *m_dragon;
public:
	Manager::Manager()
	{
		m_hero = new Hero("���������", "����ȭ��", "�ָ�ġ��", "ȭ����", 200, 50, 100, 1000);
		m_dragon = new Dragon("����巡��", "�극��", "������", "����ġ��", 300, 100, 200, 1500);
	}
	void ShowInfomation()const
	{
		m_hero->ShowStatus();
		m_dragon->ShowStatus();
	}

};





#endif // !__INFO_H__

