#include<iostream>
#include <string>
#include "Mob.h"
#include"Reward.h"
using namespace std;

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
