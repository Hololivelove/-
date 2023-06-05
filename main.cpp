#include<iostream>
#include <string>
#include "Mob.h"
#include"Reward.h"
using namespace std;

int GDA(Mob& player, Mob& mob) {

	int x = rand() % 2;
	if (x)return mob.getATK() - player.getDEF();
	else return mob.getMAG() - player.getMDEF();
}

int FPA(Mob& player, Mob& mob) {
	int DA = 0;
	DA = player.getATK() - mob.getDEF();
	if (DA < 0)DA = 0;
	cout << "你對" << mob.getmobName() << "造成" << DA << "的傷害" << endl;
	mob.setHP(mob.getHP() - DA);
	mob.state();
	if (mob.getHP() <= 0)return 1;
	else {
		DA = GDA(player, mob);
		if (DA < 0)DA = 0;
		cout << mob.getmobName() << "對你造成" << DA << "的傷害" << endl;
		player.setHP(player.getHP() - DA);
		player.state();
		if (player.getHP() <= 0)return 0;
	}
	return 3;
}

int LPA(Mob& player, Mob& mob) {
	int DA = 0;
	DA = GDA(player, mob);
	if (DA < 0)DA = 0;
	cout << mob.getmobName() << "對你造成" << DA << "的傷害" << endl;
	player.setHP(player.getHP() - DA);
	player.state();
	if (player.getHP() <= 0)return 0;
	else {
		DA = player.getATK() - mob.getDEF();
		if (DA < 0)DA = 0;
		cout << "你對" << mob.getmobName() << "造成" << DA << "的傷害" << endl;
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
	cout << "你對" << mob.getmobName() << "造成" << DA << "的傷害" << endl;
	mob.setHP(mob.getHP() - DA);
	mob.state();
	if (mob.getHP() <= 0)return 1;
	else {
		DA = GDA(player, mob);
		if (DA < 0)DA = 0;
		cout << mob.getmobName() << "對你造成" << DA << "的傷害" << endl;
		player.setHP(player.getHP() - DA);
		player.state();
		if (player.getHP() <= 0)return 0;
	}
	return 3;
}

int LPM(Mob& player, Mob& mob) {
	int DA = 0;
	DA = GDA(player, mob);
	if (DA < 0)DA = 0;
	cout << mob.getmobName() << "對你造成" << DA << "的傷害" << endl;
	player.setHP(player.getHP() - DA);
	player.state();
	if (player.getHP() <= 0)return 0;
	else {
		DA = player.getMAG() - mob.getMDEF();
		if (DA < 0)DA = 0;
		cout << "你對" << mob.getmobName() << "造成" << DA << "的傷害" << endl;
		mob.setHP(mob.getHP() - DA);
		mob.state();
		if (mob.getHP() <= 0)return 1;
	}
	return 3;
}

bool battle(Mob player, Mob mob) {

	int round = 1;
	int AM = 0;
	if (player.getHP() <= 0)return 0;
	while (player.getHP() > 0) {
		cout << "第"<<round<<"回合" << endl;
		if (round >= 10) {
			cout << "終末來臨" << endl;
			player.setATK(player.getATK() + 5);
			player.setMAG(player.getMAG() + 5);
			mob.setATK(mob.getATK() + 5);
			mob.setMAG(mob.getMAG() + 5);
		}
		cout << "-----雙方數值-----" << endl;
		mob.state();
		cout << "------------------" << endl;
		player.state();
		cout << "請選擇攻擊方式\n按1物理攻擊\n按2魔法攻擊" << endl;
		cin >> AM;
		if (AM == 1) {
			if (player.getSPD() > mob.getSPD()) {
				switch (FPA(player, mob))
				{
				case 1:return true;
					break;
				case 0:return false;
					break;
				}
			}
			else if (mob.getSPD() > player.getSPD()) {
				switch (LPA(player, mob))
				{
				case 1:return true;
					break;
				case 0:return false;
					break;
				}
			}
			else {

				int x = rand() % 2;
				if (x) {
					switch (FPA(player, mob))
					{
					case 1:return true;
						break;
					case 0:return false;
						break;
					}
				}
				else {
					switch (LPA(player, mob))
					{
					case 1:return true;
						break;
					case 0:return false;
						break;
					}
				}
			}
		}
		else if (AM == 2) {
			if (player.getSPD() > mob.getSPD()) {
				switch (FPM(player, mob))
				{
				case 1:return true;
					break;
				case 0:return false;
					break;
				}
			}
			else if (mob.getSPD() > player.getSPD()) {
				switch (LPM(player, mob))
				{
				case 1:return true;
					break;
				case 0:return false;
					break;
				}
			}
			else {

				int x = rand() % 2;
				if (x) {
					switch (FPM(player, mob))
					{
					case 1:return true;
						break;
					case 0:return false;
						break;
					}
				}
				else {
					switch (LPM(player, mob))
					{
					case 1:return true;
						break;
					case 0:return false;
						break;
					}
				}
			}
		}
		else return false;
		round++;
	}

}

int main() {

	srand(time(NULL));

	//Create player data
	string playername;
	cout << "請輸入你的名字" << endl;
	cin >> playername;
	Mob player(playername, 10, 10, 10, 10, 10, 10);

	Mob Enemymob[104]{};

	//Create levelonemob data

	Enemymob[1].setDate("老鼠", 10, 8, 8, 5, 5, 17);
	Enemymob[2].setDate("公雞", 13, 13, 11, 5, 6,14);
	Enemymob[3].setDate("蜘蛛", 12, 11, 8,5, 8, 5);
	Enemymob[4].setDate("稻草人", 20, 0, 10, 0, 6, 0);
	Enemymob[5].setDate("10", 10, 10, 10, 10, 10, 10);
	Enemymob[6].setDate("妳妹", 10, 8, 11, 8, 11, 15);

	//Create leveltwomob data
	Enemymob[11].setDate("盜賊", 15, 24, 10, 23, 10, 23);
	Enemymob[12].setDate("旅人", 13, 20, 13, 13, 15, 17);
	Enemymob[13].setDate("亡骸", 11, 26, 8, 20, 15, 19);
	Enemymob[14].setDate("你爸", 17, 22, 11, 20, 11, 100);
	Enemymob[15].setDate("護衛", 20, 20, 14, 20, 14, 10);
	Enemymob[16].setDate("你奶奶", 15, 27, 14, 22, 14, 3);

	//Create levelthreemob data
	Enemymob[21].setDate("聖騎士", 23, 27, 20, 23, 20, 11);
	Enemymob[22].setDate("冒險者", 20, 30, 11, 30, 11, 22);
	Enemymob[23].setDate("哥布林", 25, 25, 11, 29, 11, 25);
	Enemymob[24].setDate("史萊姆", 30, 22, 19, 31, 21, 15);
	Enemymob[25].setDate("劍魂", 20, 30, 15, 30, 15, 25);
	Enemymob[26].setDate("鬼魂", 16, 12, 999, 32, 15, 25);

	//Create levelfourmob data
	Enemymob[31].setDate("劍聖", 22, 35, 18, 22, 16, 24);
	Enemymob[32].setDate("聖王", 30, 35, 18, 32, 18, 5);
	Enemymob[33].setDate("騎士王", 40, 30, 25, 30, 25, 2);
	Enemymob[34].setDate("烏龜", 30, 15, 25, 13, 25, 2);
	Enemymob[35].setDate("師傅", 30, 25, 25, 25, 25, 25);
	Enemymob[36].setDate("你爺爺", 25, 35, 23, 29, 32, 28);

	//Create levelfivemob data
	Enemymob[41].setDate("死滅龍", 30, 24, 26, 32, 28, 27);
	Enemymob[42].setDate("不死王", 40, 25, 23, 30, 23, 27);
	Enemymob[43].setDate("神樹之魂", 45, 20, 30, 33, 18, 32);
	Enemymob[44].setDate("無所不知的賢者", 35, 24, 28, 37, 30, 35);
	Enemymob[45].setDate("詛咒之劍的寄生體", 40, 40, 22, 25, 21, 28);
	Enemymob[46].setDate("腐壞的神劍", 50, 40, 25, 30, 25, 25);

	//Create levelsixmob data
	Enemymob[51].setDate("天使", 33, 33, 33, 33, 33, 33);
	Enemymob[52].setDate("惡魔", 60, 30, 30, 30, 30, 0);
	Enemymob[53].setDate("墮天使", 45, 33, 20, 33, 20, 45);
	Enemymob[54].setDate("偶像", 30, 28, 36, 39, 20, 30);
	Enemymob[55].setDate("神獸", 50, 35, 37, 32, 37, 44);
	Enemymob[56].setDate("吞天獸", 75, 37, 35, 29, 30, 30);

	//Create levelsevenmob data
	Enemymob[61].setDate("偽神", 45, 40, 40, 45, 47, 39);
	Enemymob[62].setDate("半神", 50, 42, 45, 37, 50, 45);
	Enemymob[63].setDate("墮落之神", 52, 44, 44, 44, 48, 44);
	Enemymob[64].setDate("魔神", 50, 38, 42, 46, 50, 45);
	Enemymob[65].setDate("祝福之神", 42, 42, 42, 42, 42, 42);
	Enemymob[66].setDate("死神", 45, 45, 40, 47, 40, 45);

	//Create leveleightmob data
	Enemymob[71].setDate("靜", 75, 80, 0, 80, 0, 0);
	Enemymob[72].setDate("弒神砲", 80, 200, 0, 0, 0, 0);
	Enemymob[73].setDate("終焉", 80, 80, 10, 80, 10, 10);
	Enemymob[74].setDate("生日蛋糕", 100, 75, 25, 75, 25, 10);
	Enemymob[75].setDate("星", 120, 80, 10, 30, 10, 0);
	Enemymob[76].setDate("請用物攻打我", 100, 80, 999, 80, -100, 0);

	//Create levelninemob data
	Enemymob[82].setDate("黑暗根源", 68, 70, 50, 70, 55, 40);
	Enemymob[83].setDate("絕望", 60, 60, 60, 60, 60, 60);
	Enemymob[84].setDate("你媽", 65, 78, 65, 75, 63, 3000);
	Enemymob[85].setDate("開學前的作業", 75, 60, 50, 80, 48, 60);
	Enemymob[86].setDate("早上的棉被", 65, 40, 60, 65, 60, 45);

	//Create leveltenmob data
	Enemymob[91].setDate("6", 6, 6, 6, 6, 6, 6);
	Enemymob[92].setDate("7", 7, 7, 7, 7, 7, 7);
	Enemymob[93].setDate("8", 8, 8, 8, 8, 8, 8);
	Enemymob[94].setDate("9", 9, 9, 9, 9, 9, 9);
	Enemymob[95].setDate("0", 0, 0, 0, 0, 0, 0);
	Enemymob[96].setDate("1", 1, 1, 1, 1, 1, 1);

	Reward equipage[50]{};
	equipage[1].setDate("破艦者", 6, 8, 5, 0, 0, -4);
	equipage[2].setDate("大鼓隆之劍", 7, 7, 5, 0, 0, 0);
	equipage[3].setDate("虛空之杖", 5, 0, 0, 8, 5, 3);
	equipage[4].setDate("死亡之帽", -5, -5, -5, 15, -5, -5);
	equipage[5].setDate("三項之力", 3, 3, 3, 3, 3, 3);
	equipage[6].setDate("守護者法球",12, 0, 0, 0, 14, -2);
	equipage[7].setDate("荊棘之甲", 12, 0, 14, 0, 0, -2);
	equipage[8].setDate("金鏟鏟", -5, 9, -5, 9, -5, 9);
	equipage[9].setDate("凜冬將至", -8, -5, 13, -5, 13, -8);
	equipage[10].setDate("神劍", -2, 16, 3, 0, 0, -5);
	equipage[11].setDate("無形劍", 0, 8, 8, 2, 2, 8);
	equipage[12].setDate("神盾", 12, 2, 10, 0, 10, -5);
	equipage[13].setDate("失傳的法杖", 0, 2, 0, 12, 0, 0);
	equipage[14].setDate("死亡之鎧", -5, -5, 15, -5, -5, -5);
	equipage[15].setDate("生命護符", 15, 0, 0, 0, 0, 5);
	equipage[16].setDate("腳踏車", 0, 3, 5, 0, 0, 18);
	equipage[17].setDate("死亡之靴", -5, -5, -5, -5, -5, 15);
	equipage[18].setDate("死亡祝福", -25, 15, 15, 15, 15, 15);
	equipage[19].setDate("銘謝惠顧", 0, 0, 0, 0, 0, 0);
	equipage[20].setDate("吸血鬼之牙", -5, 10, -2, 10, -2, 10);
	equipage[21].setDate("死亡之劍", -5, 15, -5, -5, -5, -5);
	equipage[22].setDate("死亡之褲", -5, -5, -5, -5, 15, -5);
	equipage[23].setDate("死亡之息", 15, -5, -5, -5, -5, -5);
	equipage[24].setDate("女神之息", 12, 2, 2, 2, 2, 2);
	equipage[25].setDate("女神之劍", 2, 12, 2, 2, 2, 2);
	equipage[26].setDate("女神之褲", 2, 2, 2, 2, 12, 2);
	equipage[27].setDate("女神之帽", 2, 2, 2, 12, 2, 2);
	equipage[28].setDate("女神之鎧", 2, 2, 12, 2, 2, 2);
	equipage[29].setDate("女神之靴", 2, 2, 2, 2, 2, 12);
	equipage[30].setDate("惡魔的寵愛", 6, 6, 6, 6, 6, 6);
	equipage[31].setDate("惡魔的交易", -50, 100, 100, 100, 100, 100);
	equipage[32].setDate("死神之鐮", -20, 20, 0, 0, 0, 0);
	equipage[33].setDate("時鐘", 0, 1,1, 0, 0, 15);
	equipage[34].setDate("賢者的戒指", -3, 1, 0, 12, 12, 0);
	equipage[35].setDate("半獸人的蛋", 10, 0, 2, 0, 2, 2);
	equipage[36].setDate("禁藥", -8, 10, -2, 10, -2, 12);
	equipage[37].setDate("創世的碎片", 10, 0, 10, 0, 10, 0);
	equipage[38].setDate("永恆的詛咒", 0,100, -100, 0, -100, -50);
	equipage[39].setDate("終焉炮", -40, 0, -75, 100, -75, -50);
	equipage[40].setDate("生日蛋糕", 10, 10, 10, 10, 10, 10);


	int LEVEL = 0;
	while (LEVEL < 10) {
		int min = 1;
		int max = 40;
		int x;
		int a, b, c, m;
		player.state();
		x = rand() % (max - min + 1) + min;
		cout << endl << "1號裝備" << endl;
		equipage[x].print();
		a = x;
		x = rand() % (max - min + 1) + min;
		cout << endl << "2號裝備" << endl;
		equipage[x].print();
		b = x;
		x = rand() % (max - min + 1) + min;
		cout << endl << "3號裝備" << endl;
		equipage[x].print();
		c = x;
		cout << "選擇想要的裝備" << endl;
		cin >> m;
		while(m>3||m<1)cin >> m;
		switch (m)
		{
		case 1:
			player.getreward(equipage[a]);
			break;
		case 2:
			player.getreward(equipage[b]);
			break;
		case 3:
			player.getreward(equipage[c]);
			break;
		}

		

		int n = rand() % 6;
		if(LEVEL * 10 + n + 1==81)Enemymob[81].setDate(playername, player.getSPD(), player.getMAG(), player.getMDEF(), player.getATK(), player.getDEF(), player.getHP());
		if (battle(player, Enemymob[LEVEL * 10 + n + 1])) {
			cout << "YOU WIN!!" << endl;
			
			LEVEL++;

		}
		else {
			cout << "YOU LOSE!!" << endl;
			return 0;
		}
	}
	cout << "GAME OVER" << endl;
}
