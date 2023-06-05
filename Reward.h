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
	void setMDchangeHP(int);
	void setMDchangeATK(int);
	void setMDchangeDEF(int);
	void setMDchangeMAG(int);
	void setMDchangeMDEF(int);
	void setMDchangeSPD(int);
	int getMDchangeHP();
	int getMDchangeATK();
	int getMDchangeDEF();
	int getMDchangeMAG();
	int getMDchangeMDEF();
	int getMDchangeSPD();
	void print();
private:
	string rewardname;
	int IDchangeHP;
	int IDchangeATK;
	int IDchangeDEF;
	int IDchangeMAG;
	int IDchangeMDEF;
	int IDchangeSPD;
	int MDchangeHP;
	int MDchangeATK;
	int MDchangeDEF;
	int MDchangeMAG;
	int MDchangeMDEF;
	int MDchangeSPD;

};
#endif // !l_h
