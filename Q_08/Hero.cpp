#pragma once
#pragma warning(disable :4996)
#include"Info.h"
#include<iostream>
#include<cstring>

Hero::Hero()
{

}
Hero::Hero(char *_name, char *_skill1_name, char *_skill2_name, char *_skill3_name, const int &_skill1, const int &_skill2, const int &_skill3, int _hp) :
m_skill1(_skill1),
m_skill2(_skill2),
m_skill3(_skill3),
m_nHp(_hp)
{
	int len = strlen(_name) + 1;
	m_name = new char[len];
	strcpy(m_name, _name);

	len = strlen(_skill1_name) + 1;
	m_skill1_name = new char[len];
	strcpy(m_skill1_name, _skill1_name);

	len = strlen(_skill2_name) + 1;
	m_skill2_name = new char[len];
	strcpy(m_skill2_name, _skill2_name);

	len = strlen(_skill3_name) + 1;
	m_skill3_name = new char[len];
	strcpy(m_skill3_name, _skill3_name);
}

void Hero::ShowStatus()const
{
	cout << m_name << "의 스테이터스" << endl;
	cout << "HP :" << m_nHp << ' ' << "\n스킬1 :" << m_skill1_name << ' ' << "\n스킬2 : " << m_skill2_name << ' ' << "\n스킬3 : " << m_skill3_name << endl<<endl;
}
int Hero::GetSkillDamage1() const
{
	return m_skill1;
}
int Hero::GetSkillDamage2() const
{
	return m_skill2;
}
int Hero::GetSkillDamage3() const
{
	return m_skill3;
}
char *Hero::GetSkillName1() const
{
	return m_skill1_name;
}
char *Hero::GetSkillName2() const
{
	return m_skill2_name;
}
char *Hero::GetSkillName3() const
{
	return m_skill3_name;
}
char *Hero::GetName()const
{
	return m_name;
}
int Hero::Hp()
{
	return m_nHp;
}
