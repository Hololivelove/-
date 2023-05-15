#ifndef MOB_H
#define MOB_H
#include <string>
using namespace std;

class Mob
{
public:
	Mob();
	Mob(const string& newmobName, int, int, int, int, int, int);
	
	void setDate(const string& newmobName, int, int, int, int, int, int);
	void setmobName(const string& newmobName);
	void setHP(int) ;
	void setATK(int) ;
	void setDEF(int) ;
	void setMAG(int) ;
	void setMDEF(int) ;
	void setSPD(int) ;

    string getmobName() const;
	int getHP() const;
	int getATK() const;
	int getDEF() const;
	int getMAG() const;
	int getMDEF() const;
	int getSPD() const;

private:
	string mobName;
	int HP;
	int ATK;
	int DEF;
	int MAG;
	int MDEF;
	int SPD;
};

#endif
