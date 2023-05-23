#include <iostream>
#include "Mob.h"
using namespace std;

Mob::Mob()
{
    mobName = "? ? ?"  ;
    HP = 1;
    ATK = 1;
    DEF = 1;
    MAG = 1;
    MDEF = 1;
    SPD = 1;
}

Mob::Mob(const string& newmobName, int newHP, int newATK, int newDEF, int newMAG, int newMDEF, int newSPD)
{
    mobName = newmobName;
    HP = newHP;
    ATK = newATK;
    DEF = newDEF;
    MAG = newMAG;
    MDEF = newMDEF;
    SPD = newSPD;
}

void Mob::setDate(const string& newmobName, int newHP, int newATK, int newDEF, int newMAG, int newMDEF, int newSPD)
{
    mobName = newmobName;
    HP = newHP;
    ATK = newATK;
    DEF = newDEF;
    MAG = newMAG;
    MDEF = newMDEF;
    SPD = newSPD;
}

void Mob::setmobName(const string& newmobName)
{
    mobName = newmobName;
}

void Mob::setHP(int newHP)
{
    HP = newHP;
}

void Mob::setATK(int newATK)
{
    ATK = newATK;
}

void Mob::setDEF(int newDEF)
{
    DEF = newDEF;
}

void Mob::setMAG(int newMAG) 
{
    MAG = newMAG;
}

void Mob::setMDEF(int newMDEF)
{
    MDEF = newMDEF;
}

void Mob::setSPD(int newSPD)
{
    SPD = newSPD;
}

void Mob::state() {
    cout << mobName << endl
        << "HP " << HP << endl
        << "ATK " << ATK << endl
        << "DEF " << DEF << endl
        << "MAG " << MAG << endl
        << "MDEF " << MDEF << endl
        << "SPD " << SPD << endl << endl;
}

string Mob::getmobName() const
{
    return mobName;
}

int Mob::getHP() const
{
    return HP;
}

int Mob::getATK() const
{
    return ATK;
}

int Mob::getDEF() const
{
    return DEF;
}

int Mob::getMAG() const
{
    return MAG;
}

int Mob::getMDEF() const
{
    return MDEF;
}

int Mob::getSPD() const
{
    return SPD;
}
