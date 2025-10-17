#include<iostream>

using namespace std;

class player
{
private:
  /* data */
  int health;
  int age;
  int score;
  bool alive;
public:
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
}; 
//passing objects into a function
int getmaxscore(player a,player b){
  return max(a.getscore(),b.getscore());
}

int main(){
  player archit; //objects of a class
  player ankit;

  archit.setage(22); //settinhg vslues in a object
  archit.setalive(0);
  archit.sethealth(20);
  archit.setscore(90);

  ankit.setage(28);
  ankit.setalive(1);
  ankit.sethealth(90);
  ankit.setscore(1000);

  cout<<getmaxscore(ankit,archit);
}