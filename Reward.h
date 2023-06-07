#ifndef l_h
#define l_h
#include<string>
#include<iostream>
using namespace std;
class Reward {
public:
	Reward();
	
	void setDate(string, int, int, int, int, int, int);//怪物素質
	void setrewardName(string);
	string getrewardName();
	void setIDchangeHP(int);
	void setIDchangeATK(int);
	void setIDchangeDEF(int);
	void setIDchangeMAG(int);
	void setIDchangeMDEF(int);
	void setIDchangeSPD(int);
	int getIDchangeHP();
	int getIDchangeATK();
	int getIDchangeDEF();
	int getIDchangeMAG();
	int getIDchangeMDEF();
	int getIDchangeSPD();
	void print();
private:
	string rewardname;
	int IDchangeHP;
	int IDchangeATK;
	int IDchangeDEF;
	int IDchangeMAG;
	int IDchangeMDEF;
	int IDchangeSPD;

};
#endif // !l_h
