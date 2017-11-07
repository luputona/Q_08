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
	m_hero = new Hero("한조대기중", "갈래화살", "주먹치기", "화살쏘기", 9900, 9990, 9900, 1000);
	m_dragon = new Dragon("투명드래곤", "브레스", "할퀴기", "꼬리치기", 99999, 9900, 99990, 1500);
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
	cout << "야생의 드래곤이 나타났다. (아무키나 입력 하세요.)" << endl;
	cin >> m_flag ;
Back:
	cout << "\n공격을 선택 하세요." << endl;
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
					cout << m_hero->GetSkillName1() << "을 사용 하였습니다." << endl;
					cout << m_hero->GetName() << "의 주사위의 값 : " << tempHeroDice << endl;
					cout << m_dragon->GetName() << "의 주사위 값 : " << tempDragonDice << endl;
					cout << m_hero->GetName() << "은 " << m_dragon->GetName() << "에게 " << m_hero->GetSkillDamage1() << "의 데미지를 주었다!" << endl;
					cout << m_dragon->GetName() << "은 " << m_hero->GetSkillDamage1() <<"를 맞고 한방에 사망했다." << endl;
					m_flag = 0;
				}
				else if (tempDragonDice > tempHeroDice)
				{
					cout << m_dragon->GetName() << "은" << m_dragon->GetSkillName1() << "을 사용 하였다." << endl;
					cout << m_dragon->GetName() << "의 주사위 값 : " << tempDragonDice << endl;
					cout << m_hero->GetName() << "의 주사위의 값 : " << tempHeroDice << endl;
					cout << m_dragon->GetName() << "은 " << m_hero->GetName() << "에게 " << m_dragon->GetSkillDamage1() << "의 데미지를 주었다!" << endl;
					cout << m_hero->GetName() << "은 " << m_dragon->GetSkillDamage1() << "를 맞고 한방에 사망했다." << endl;
					m_flag = 0;					
				}
				else
				{
					cout << "주사위 값이 같습니다. " << endl;	
					m_flag = 0;					
				}				
			}
			else if (m_flag == 2)
			{
				if (tempDragonDice < tempHeroDice)
				{
					cout << m_hero->GetSkillName2() << "을 사용 하였습니다." << endl;
					cout << m_hero->GetName() << "의 주사위의 값 : " << tempHeroDice << endl;
					cout << m_dragon->GetName() << "의 주사위 값 : " << tempDragonDice << endl;
					cout << m_hero->GetName() << "은 " << m_dragon->GetName() << "에게 " << m_hero->GetSkillDamage2() << "의 데미지를 주었다!" << endl;
					cout << m_dragon->GetName() << "은 " << m_hero->GetSkillDamage1() << "를 맞고 한방에 사망했다." << endl;
					m_flag = 0;
					
				}
				else if (tempDragonDice > tempHeroDice)
				{
					cout << m_dragon->GetName() << "은" << m_dragon->GetSkillName2() << "을 사용 하였다." << endl;
					cout << m_dragon->GetName() << "의 주사위 값 : " << tempDragonDice << endl;
					cout << m_hero->GetName() << "의 주사위의 값 : " << tempHeroDice << endl;
					cout << m_dragon->GetName() << "은 " << m_hero->GetName() << "에게 " << m_dragon->GetSkillDamage2() << "의 데미지를 주었다!" << endl;
					cout << m_hero->GetName() << "은 " << m_dragon->GetSkillDamage1() << "를 맞고 한방에 사망했다." << endl;
					m_flag = 0;					
				}
				else
				{
					cout << "주사위 값이 같습니다. " << endl;
					m_flag = 0;					
				}				
			}
			else if (m_flag == 3)
			{
				if (tempDragonDice < tempHeroDice)
				{
					cout << m_hero->GetSkillName3() << "을 사용 하였습니다.";
					cout << m_hero->GetName() << "의 주사위의 값 : " << tempHeroDice << endl;
					cout << m_dragon->GetName() << "의 주사위 값 : " << tempDragonDice << endl;
					cout << m_hero->GetName() << "은 " << m_dragon->GetName() << "에게 " << m_hero->GetSkillDamage3() << "의 데미지를 주었다!" << endl;
					cout << m_dragon->GetName() << "은 " << m_hero->GetSkillDamage1() << "를 맞고 한방에 사망했다." << endl;
					m_flag = 0;					
				}
				else if (tempDragonDice > tempHeroDice)
				{
					cout << m_dragon->GetName() << "은" << m_dragon->GetSkillName3() << "을 사용 하였다." << endl;
					cout << m_dragon->GetName() << "의 주사위 값 : " << tempDragonDice << endl;
					cout << m_hero->GetName() << "의 주사위의 값 : " << tempHeroDice << endl;
					cout << m_dragon->GetName() << "은 " << m_hero->GetName() << "에게 " << m_dragon->GetSkillDamage3() << "의 데미지를 주었다!" << endl;
					cout << m_hero->GetName() << "은 " << m_dragon->GetSkillDamage1() << "를 맞고 한방에 사망했다." << endl;
					m_flag = 0;					
				}
				else
				{
					cout << "주사위 값이 같습니다. " << endl;
					goto Back;
				}				
			}
			else
			{
				cout << "다시 입력 해 주세요" << endl;
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