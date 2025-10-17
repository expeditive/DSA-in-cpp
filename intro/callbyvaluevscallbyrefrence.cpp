#include<iostream>
using namespace std;

//pass by value (you pass a copy of the variable, any change made inside the functions. won't affect the original.)
void update(int x){
  x+= 10;
}

/* 
safe no accidental changes 
slower for larger data
use when dont need to modify the original data
*/

//pass by refrence--> you pass the actual variable(its memory adress).changes made in the function affect the original variable

void update2(int &x){
  x+= 10;
}

//swapping two numbers

void fakeswap(int a, int b){
  int temp =a;
  a=b;
  b=temp;

  cout<< a;
  cout<< b; // the origginal values won't changed 
}

void realswap(int &a, int &b){
  int temp = a;
  a=b;
  b = temp;

  cout<< a;
  cout<< b; //values orginally swapped
}

//real swap alternative 
void swap(int* x,int* y){
  int temp = *x;
  *x=*y;
  *x=temp;
  return;
}




int main(){
  int a =4;
  int b = 5;
  swap(a,b);

  cout<<a<<" "<<b;

}

/*
less clean than refrence but you give the controlover the memory

*/
