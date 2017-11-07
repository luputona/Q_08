#pragma once
#pragma warning(disable :4996)
#include<iostream>
#include<cstring>
#include<time.h>
#include<Windows.h>
#include"Info.h"

Manager::Manager()	:
	m_randomAttack(0),
	m_flag(0)
{
	m_hero = new Hero("���������", "����ȭ��", "�ָ�ġ��", "ȭ����", 9900, 9990, 9900, 1000);
	m_dragon = new Dragon("����巡��", "�극��", "������", "����ġ��", 99999, 9900, 99990, 1500);
}
void Manager::ShowInfomation()const
{
	m_hero->ShowStatus();
	m_dragon->ShowStatus();
	cout << "=================================================================" << endl;

	
}
void Manager::Update()
{
	int tempHeroDice = 0;
	int tempDragonDice = 0;

	ShowInfomation();
	cout << "�߻��� �巡���� ��Ÿ����. (�ƹ�Ű�� �Է� �ϼ���.)" << endl;
	cin >> m_flag ;
Back:
	cout << "\n������ ���� �ϼ���." << endl;
	m_hero->ShowStatus();
	cin >> m_flag;
	//while (1)
	//{	
		//while (m_flag == 1 || m_flag == 2 || m_flag == 3)
		//{
			srand(time(NULL));
			m_randomAttack = (rand() % 3) + 1;

			tempHeroDice = m_hero->Dice();
			srand(time(NULL));
			tempDragonDice = m_dragon->Dice();
			srand(time(NULL));
			if (m_flag == 1)
			{
				if (tempDragonDice < tempHeroDice)
				{
					cout << m_hero->GetSkillName1() << "�� ��� �Ͽ����ϴ�." << endl;
					cout << m_hero->GetName() << "�� �ֻ����� �� : " << tempHeroDice << endl;
					cout << m_dragon->GetName() << "�� �ֻ��� �� : " << tempDragonDice << endl;
					cout << m_hero->GetName() << "�� " << m_dragon->GetName() << "���� " << m_hero->GetSkillDamage1() << "�� �������� �־���!" << endl;
					cout << m_dragon->GetName() << "�� " << m_hero->GetSkillDamage1() <<"�� �°� �ѹ濡 ����ߴ�." << endl;
					m_flag = 0;
				}
				else if (tempDragonDice > tempHeroDice)
				{
					cout << m_dragon->GetName() << "��" << m_dragon->GetSkillName1() << "�� ��� �Ͽ���." << endl;
					cout << m_dragon->GetName() << "�� �ֻ��� �� : " << tempDragonDice << endl;
					cout << m_hero->GetName() << "�� �ֻ����� �� : " << tempHeroDice << endl;
					cout << m_dragon->GetName() << "�� " << m_hero->GetName() << "���� " << m_dragon->GetSkillDamage1() << "�� �������� �־���!" << endl;
					cout << m_hero->GetName() << "�� " << m_dragon->GetSkillDamage1() << "�� �°� �ѹ濡 ����ߴ�." << endl;
					m_flag = 0;					
				}
				else
				{
					cout << "�ֻ��� ���� �����ϴ�. " << endl;	
					m_flag = 0;					
				}				
			}
			else if (m_flag == 2)
			{
				if (tempDragonDice < tempHeroDice)
				{
					cout << m_hero->GetSkillName2() << "�� ��� �Ͽ����ϴ�." << endl;
					cout << m_hero->GetName() << "�� �ֻ����� �� : " << tempHeroDice << endl;
					cout << m_dragon->GetName() << "�� �ֻ��� �� : " << tempDragonDice << endl;
					cout << m_hero->GetName() << "�� " << m_dragon->GetName() << "���� " << m_hero->GetSkillDamage2() << "�� �������� �־���!" << endl;
					cout << m_dragon->GetName() << "�� " << m_hero->GetSkillDamage1() << "�� �°� �ѹ濡 ����ߴ�." << endl;
					m_flag = 0;
					
				}
				else if (tempDragonDice > tempHeroDice)
				{
					cout << m_dragon->GetName() << "��" << m_dragon->GetSkillName2() << "�� ��� �Ͽ���." << endl;
					cout << m_dragon->GetName() << "�� �ֻ��� �� : " << tempDragonDice << endl;
					cout << m_hero->GetName() << "�� �ֻ����� �� : " << tempHeroDice << endl;
					cout << m_dragon->GetName() << "�� " << m_hero->GetName() << "���� " << m_dragon->GetSkillDamage2() << "�� �������� �־���!" << endl;
					cout << m_hero->GetName() << "�� " << m_dragon->GetSkillDamage1() << "�� �°� �ѹ濡 ����ߴ�." << endl;
					m_flag = 0;					
				}
				else
				{
					cout << "�ֻ��� ���� �����ϴ�. " << endl;
					m_flag = 0;					
				}				
			}
			else if (m_flag == 3)
			{
				if (tempDragonDice < tempHeroDice)
				{
					cout << m_hero->GetSkillName3() << "�� ��� �Ͽ����ϴ�.";
					cout << m_hero->GetName() << "�� �ֻ����� �� : " << tempHeroDice << endl;
					cout << m_dragon->GetName() << "�� �ֻ��� �� : " << tempDragonDice << endl;
					cout << m_hero->GetName() << "�� " << m_dragon->GetName() << "���� " << m_hero->GetSkillDamage3() << "�� �������� �־���!" << endl;
					cout << m_dragon->GetName() << "�� " << m_hero->GetSkillDamage1() << "�� �°� �ѹ濡 ����ߴ�." << endl;
					m_flag = 0;					
				}
				else if (tempDragonDice > tempHeroDice)
				{
					cout << m_dragon->GetName() << "��" << m_dragon->GetSkillName3() << "�� ��� �Ͽ���." << endl;
					cout << m_dragon->GetName() << "�� �ֻ��� �� : " << tempDragonDice << endl;
					cout << m_hero->GetName() << "�� �ֻ����� �� : " << tempHeroDice << endl;
					cout << m_dragon->GetName() << "�� " << m_hero->GetName() << "���� " << m_dragon->GetSkillDamage3() << "�� �������� �־���!" << endl;
					cout << m_hero->GetName() << "�� " << m_dragon->GetSkillDamage1() << "�� �°� �ѹ濡 ����ߴ�." << endl;
					m_flag = 0;					
				}
				else
				{
					cout << "�ֻ��� ���� �����ϴ�. " << endl;
					goto Back;
				}				
			}
			else
			{
				cout << "�ٽ� �Է� �� �ּ���" << endl;
				goto Back;
			}					
		//}
	//}
}

Manager::~Manager()
{
	delete m_hero;
	delete m_dragon;
}