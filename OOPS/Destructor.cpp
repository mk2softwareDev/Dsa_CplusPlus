#include<iostream>
using namespace std;

class HeroNew{
public:
           int power = 10;
           string name;
           char nickName;

private:
           int health;
           float upgrade = 2.0;
// since we need to access health of hero we need to initialise 'Getter()' and 'Setter()'
public:
            // return type of 'Getter()' and 'Setter()' method depends on data type in private access modifier
            int getHeath(){
                return health;
            }
            int setHealth(int health){
                this->health = health;
            }

// constructors [ default ]
HeroNew(){
                int ageNew = 10;
                cout<<" new age of hero is "<<ageNew<<"\n";
            }
// parameterised constructor
HeroNew(int health, float upgrade, long int version){
                // health, floayt are repeated data variable
                this->health = health;
                this->upgrade = upgrade;
                long int v = version;
                cout<<" health is "<<this->health<<"\n";           // address of health value
                cout<<" upgrade is "<<this->upgrade<<"\n";   // address of upgrade value
                cout<<" version "<<v<<"\n";
            }
// copy constructor
HeroNew(HeroNew& newHero1, HeroNew& newHero2){
                // property of hero1 and hero2 will be accessed by third hero template
                cout<<" health of hero1 "<<"\n";
                this->health = newHero1.health;
                cout<<" health of hero2 "<<"\n";
                this->health = newHero2.health;
                cout<< " version of hero1 "<<"\n";
                // copy constructor can copy properties of source constructor but not class properties
                // here it is long int version

            }
// destructor
~HeroNew(){
                cout<<" destructor is called automatically in static object allocation"<<"\n";
            }
};

int main(){
    HeroNew heroParametrised1(100,10.0,100000);
    HeroNew heroParametrised2(200,40.0,200000);
    HeroNew heroParametrised3(heroParametrised2, heroParametrised1);  // copy constructor
    HeroNew h1();  // static allocation, so object's memory is nil RN
    // h1.setHealth(10);
   //  h1.getHealth();

   HeroNew *h2 = new HeroNew; // dynamic allocation
   h2->setHealth(99);
   cout<<h2->getHeath()<<"\n";

   // destructor has to be manually called
   delete h2;  // delete by value
}


