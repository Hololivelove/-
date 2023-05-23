#include<iostream>
#include <string>
#include "Mob.h"
#include"Reward.h"
using namespace std;

int FPA(Mob& player, Mob& mob) {
	int DA = 0;
	DA = player.getATK() - mob.getDEF();
	if (DA < 0)DA = 0;
	cout << "造成" << DA << "的傷害" << endl;
	mob.setHP(mob.getHP() - DA);
	mob.state();
	if (mob.getHP() <= 0)return 1;
	else {
		DA = mob.getATK() - player.getDEF();
		if (DA < 0)DA = 0;
		cout << "造成" << DA << "的傷害" << endl;
		player.setHP(player.getHP() - DA);
		player.state();
		if (player.getHP() <= 0)return 0;
	}
	return 3;
}

int LPA(Mob& player, Mob& mob) {
	int DA = 0;
	DA = mob.getATK() - player.getDEF();
	if (DA < 0)DA = 0;
	cout << "造成" << DA << "的傷害" << endl;
	player.setHP(player.getHP() - DA);
	player.state();
	if (player.getHP() <= 0)return 0;
	else {
		DA = player.getATK() - mob.getDEF();
		if (DA < 0)DA = 0;
		cout << "造成" << DA << "的傷害" << endl;
		mob.setHP(mob.getHP() - DA);
		mob.state();
		if (mob.getHP() <= 0)return 1;
	}
	return 3;
}

int FPM(Mob& player, Mob& mob) {
	int DA = 0;
	DA = player.getMAG() - mob.getMDEF();
	if (DA < 0)DA = 0;
	cout << "造成" << DA << "的傷害" << endl;
	mob.setHP(mob.getHP() - DA);
	mob.state();
	if (mob.getHP() <= 0)return 1;
	else {
		DA = mob.getMAG() - player.getMDEF();
		if (DA < 0)DA = 0;
		cout << "造成" << DA << "的傷害" << endl;
		player.setHP(player.getHP() - DA);
		player.state();
		if (player.getHP() <= 0)return 0;
	}
	return 3;
}

int LPM(Mob& player, Mob& mob) {
	int DA = 0;
	DA = mob.getMAG() - player.getMDEF();
	if (DA < 0)DA = 0;
	cout << "造成" << DA << "的傷害" << endl;
	player.setHP(player.getHP() - DA);
	player.state();
	if (player.getHP() <= 0)return 0;
	else {
		DA = player.getMAG() - mob.getMDEF();
		if (DA < 0)DA = 0;
		cout << "造成" << DA << "的傷害" << endl;
		mob.setHP(mob.getHP() - DA);
		mob.state();
		if (mob.getHP() <= 0)return 1;
	}
	return 3;
}

bool battle(Mob player, Mob mob) {
	
	int AM = 0;
	while (player.getHP()>0) {
		cout << "-----雙方數值-----" << endl;
		mob.state();
		cout << "------------------" << endl;
		player.state();
		cout << "請選擇攻擊方式\n按1物理攻擊\n按2魔法攻擊"<<endl;
		cin >> AM;
		if (AM == 1) {
			if (player.getSPD() > mob.getSPD()) {
				switch (FPA(player, mob))
				{
				case 1:return true;
				case 2:return false;
				}
			}
			else if (mob.getSPD() > player.getSPD()) {
				switch (LPA(player, mob))
				{
				case 1:return true;
				case 2:return false;
				}
			}
			else {
				srand(time(NULL));
				int x = rand() % 2;
				if (x) {
					switch (FPA(player, mob))
					{
					case 1:return true;
					case 2:return false;
					}
				}
				else {
					switch (LPA(player, mob))
					{
					case 1:return true;
					case 2:return false;
					}
				}
			}
		}
		else if (AM == 2) {
			if (player.getSPD() > mob.getSPD()) {
				switch (FPM(player, mob))
				{
				case 1:return true;
				case 2:return false;
				}
			}
			else if (mob.getSPD() > player.getSPD()) {
				switch (LPM(player, mob))
				{
				case 1:return true;
				case 2:return false;
				}
			}
			else {
				srand(time(NULL));
				int x = rand() % 2;
				if (x) {
					switch (FPM(player, mob))
					{
					case 1:return true;
					case 2:return false;
					}
				}
				else {
					switch (LPM(player, mob))
					{
					case 1:return true;
					case 2:return false;
					}
				}
			}
		}
		else return false;
	}
}

int main() {

	//Create player data
	string playername;
	cout << "請輸入你的名字" << endl;
	cin >> playername;
	Mob player(playername, 10, 10, 10, 10, 10, 10);

	Mob Enemymob[104]{};

	//Create levelonemob data

	Enemymob[1].setDate("老鼠", 5, 3, 3, 0, 0, 12);

	//Create leveltwomob data
	Enemymob[11].setDate("盜賊", 10, 14, 5, 8, 5, 18);

	//Create levelthreemob data
	Enemymob[21].setDate("聖騎士", 18, 12, 15, 8, 15, 6);

	//Create levelfourmob data
	Enemymob[31].setDate("劍聖", 22, 25, 20, 10, 18, 24);

	//Create levelfivemob data
	Enemymob[41].setDate("死滅龍", 28, 24, 28, 32, 30, 24);

	//Create levelsixmob data
	Enemymob[51].setDate("天使", 30, 30, 30, 30, 30, 30);

	//Create levelsevenmob data
	Enemymob[61].setDate("偽神", 50, 45, 48, 48, 56, 42);

	//Create leveleightmob data
	Enemymob[71].setDate("靜", 125, 100, 0, 100, 0, 0);

	//Create levelninemob data
	Enemymob[81].setDate(playername, player.getSPD(), player.getMAG(), player.getMDEF(), player.getATK(), player.getDEF(), player.getHP());

	//Create leveltenmob data
	Enemymob[91].setDate("6", 6, 6, 6, 6, 6, 6);
}
