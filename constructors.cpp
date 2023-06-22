#include<iostream>
using namespace std;

class Hero{
public:
            int age = 40;
            string name;
            char nickName;


private:
             int health;
public:
            int getHealth() {
                return health;
            }
            int setHealth(int h){
                health = h;
            }
            void print(){
                cout<< " value of health is now determined by current object "<<"\n";
                cout<< " value of health is object.health() "<<this->health<<"\n";
                cout<< " value of nickName is object.nickName() "<<this->nickName<<"\n";
            }
// default constructor
Hero() {
                cout<< " default constructor "<<"\n";
            }
// constructor : member function with no return type that accesses properties of class to object whenever initialised
Hero(int health){
                // we want int health defined in private access modifier to update with argument of this constructor
                // health = health => we are feeding private health into itself rather than our aim
                // so we use this constructor to feed health (argument of Hero / input) into private health (objects health)
                this -> health = health;
                cout<<" address of this "<<this<<"\n";  // address of object pointed by this pointer
                                                                                                 // ramesh's address = ritika's address
            }

// multi-parameter constructor :
Hero(int health, char nickName, string name){
                cout<< "address of this is "<< this <<"\n";
                this -> health = health;  // private health = argument health
                this -> nickName= nickName;  // public level = argument level
                this -> name = name;
            }

// Copy constructor
Hero(Hero& temp){
                this->health = temp.health;  // temp health of Ritesh( defined previously ) would be feed to Suresh
                this->nickName = temp.nickName; // this is now refering to suresh as suresh is recent object created
                cout<<" address of copy constructors object "<<this<<"\n";  // ritika's address
                cout<<" copy constructor is called "<<"\n";
                cout<<" default constructor will die automatically "<<"\n";
            }
};

int main(){
    // create objects
    Hero h1(100);
    h1.age;

    cout<< " lets see address of object and this keyword "<<"\n";
    cout<<" address of this constructor "<<"\n";
    Hero h2(100, 'h', " myHero ");
    cout<< " address of object h2 "<<&h2<<"\n";

    // copy constructor
    Hero Ritesh(70,'c', "myNewHero1");
    Hero Suresh(Ritesh);  // copying ritesh ka properties into suresh

    // different address with copy constructor
    Hero Ramesh(90);  // different constructor
    Hero Ritika(Ramesh);  // copying Ramesh constructors property, this time address should be different
}