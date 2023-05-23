#include"Reward.h"
#include<string>
#include<iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;
Reward::Reward() {};
Reward::Reward(string a, int b, int c, int d, int e, int f, int g) {
	rewardname = a;
	IDchangeHP = b;
	IDchangeATK = c;
	IDchangeDEF = d;
	IDchangeMAG = e;
	IDchangeMDEF = f;
	IDchangeSPD = g;
}
void  Reward::setDate(int h, int i, int j, int k, int l, int m) {
	MDchangeHP = h;
	MDchangeATK = i;
	MDchangeDEF = j;
	MDchangeMAG = k;
	MDchangeMDEF = l;
	MDchangeSPD = m;
}
void Reward::setrewardName(string a) {
	rewardname = a;
}
string Reward::getrewardName() {
	return rewardname;
}
void Reward::setIDchangeHP(int a) {
	IDchangeHP = a;
}
int Reward::getIDchangeHP() {
	return IDchangeHP;
}
void Reward::setIDchangeATK(int a) {
	IDchangeATK = a;
}
int Reward::getIDchangeATK() {
	return IDchangeATK;
}
void Reward::setIDchangeDEF(int a) {
	IDchangeDEF = a;
}int Reward::getIDchangeDEF() {
	return IDchangeDEF;
}void Reward::setIDchangeMAG(int a) {
	IDchangeMAG = a;
}
int Reward::getIDchangeMAG() {
	return IDchangeMAG;
}
void Reward::setIDchangeMDEF(int a) {
	IDchangeMDEF = a;
}
int Reward::getIDchangeMDEF() {
	return IDchangeMDEF;
}
void Reward::setIDchangeSPD(int a) {
	IDchangeSPD = a;
}
int Reward::getIDchangeSPD() {
	return IDchangeSPD;
}
//--------MD-----------------//
void Reward::setMDchangeHP(int a) {
	MDchangeHP = a;
}
int Reward::getMDchangeHP() {
	return MDchangeHP;
}
void Reward::setMDchangeATK(int a) {
	MDchangeATK = a;
}
int Reward::getMDchangeATK() {
	return MDchangeATK;
}
void Reward::setMDchangeDEF(int a) {
	MDchangeDEF = a;
}
int Reward::getMDchangeDEF() {
	return MDchangeDEF;
}
void Reward::setMDchangeMAG(int a) {
	MDchangeMAG = a;
}
int Reward::getMDchangeMAG() {
	return MDchangeMAG;
}
void Reward::setMDchangeMDEF(int a) {
	MDchangeMDEF = a;
}
int Reward::getMDchangeMDEF() {
	return MDchangeMDEF;
}
void Reward::setMDchangeSPD(int a) {
	MDchangeSPD = a;
}
int Reward::getMDchangeSPD() {
	return MDchangeSPD;
}

void Reward::random() {
	srand(time(NULL));
	int min = 1;
	int max = 6;
	int x = rand() % (max - min + 1) + min;
	switch (x) {
	case 1:
		IDchangeHP += x = rand() % (max - min + 1) + min;
		break;
	case 2:
		IDchangeATK += x = rand() % (max - min + 1) + min;
		break;
	case 3:
		IDchangeDEF += x = rand() % (max - min + 1) + min;
		break;
	case 4:
		IDchangeMAG += x = rand() % (max - min + 1) + min;
		break;
	case 5:
		IDchangeMDEF += x = rand() % (max - min + 1) + min;
		break;
	case 6:
		IDchangeSPD += x = rand() % (max - min + 1) + min;
		break;
	}

}
