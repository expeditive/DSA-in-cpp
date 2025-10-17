#include<iostream>

using namespace std;

class Gun{

public:
  int ammo;
  int damage;
  int scope;

};

class player{
      //nested class
    class Helmet{
      int hp;
      int level;

    public:
      void sethp(int hp){
        this->hp = hp;
      }
      void setlevel(int level){
        this->level =  level;
      }
      int gethp(){
        return hp;
      }
      int getlevel(){
        return level;
      }
    };

private:
  /* data */
  int health;
  int age;
  int score;
  bool alive;
  Gun gun;
  Helmet helmet;



public:
//getters
  int getage(){
    return age;
  }
  int gethealth(){
    return health;
  }
  int getscore(){
    return score;
  }
  int getalive(){
    return alive;
  }
  Gun getgun(){ //Gun class is outside but object used inside
    return gun;
  }
  
  //setters
  void setage(int age){
    this->age=age;
  }
  void sethealth(int health){
    this->health=health;
  }
  void setscore(int score){
    this->score=score;
  }
  void setalive(int alive){
    this->alive =alive;
  }
  void setgun(Gun gun){
    this->gun = gun;
  }
  void sethelmet(int level){
    Helmet *helmet = new Helmet;
    helmet->setlevel(level);

    int health = 0;
    if(level == 1) health = 25;
    else if(level == 2) health = 50;
    else if(level == 3) health = 100;
    else cout<<"error";

    helmet->sethp(health);
    this->helmet = *helmet;
  }

  Helmet gethelmet(){
    return helmet;
  }
}; 


int main(){
  player archit; 
  player ankit;

  Gun akm;
  akm.ammo=100;
  akm.damage=50;
  akm.scope=2;

  archit.setage(22); 
  archit.setalive(0);
  archit.sethealth(20);
  archit.setscore(90);
  archit.setgun(akm);

  Gun awm;
  awm.ammo = 15;
  awm.damage = 90;
  awm.scope = 5;

  ankit.setage(28);
  ankit.setalive(1);
  ankit.sethealth(90);
  ankit.setscore(1000);
  ankit.setgun(awm);

}