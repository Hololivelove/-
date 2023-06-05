#include"Reward.h"
#include"Mob.h"
#include<string>
#include<iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;
Reward::Reward() {};

void  Reward::setDate(string a, int b, int c, int d, int e, int f, int g) {
	rewardname = a;
	IDchangeHP = b;
	IDchangeATK = c;
	IDchangeDEF = d;
	IDchangeMAG = e;
	IDchangeMDEF = f;
	IDchangeSPD = g;
	
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

void Reward::print() {
	cout << "裝備名稱: " << rewardname << endl
		<< "生命: " << IDchangeHP << endl
		<< "攻擊力: " << IDchangeATK << endl
		<< "防禦力: " << IDchangeDEF << endl
		<< "魔攻: " << IDchangeMAG << endl
		<< "魔防: " << IDchangeMDEF << endl
		<< "速度: " << IDchangeSPD << endl;
		

}

