#pragma once
#pragma warning(disable :4996)
#include<iostream>
#include<cstring>
#include<time.h>
#include<Windows.h>
#include"Info.h"

using namespace std;

void main()
{
	Manager *mgr = new Manager();

	mgr->Update();
}