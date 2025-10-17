
#include<iostream>

using namespace std;

int mazetravelways(int sr, int sc, int er, int ec){
  if(sr>er || sc>ec) return 0;
  if(sr==er & sc==ec) return 1;
  int rightways = mazetravelways(sr,sc+1,er,ec);  //going left and up is not allowed
  int downways = mazetravelways(sr+1,sc,er,ec);
  int totalways = rightways + downways;
  return totalways;
}

int optimizedmazetravelways(int row, int col){
  if(1>row || 1>col) return 0;
  if(row ==1  & col == 1 ) return 1;
  int rightways = optimizedmazetravelways(row,col-1);  //going left and up is not allowed
  int downways = optimizedmazetravelways(row-1,col);
  int totalways = rightways + downways;
  return totalways;
}


void printpossiblepaths(int sr, int sc, int er, int ec,string s){
  if(sr>er || sc>ec) return;
  if(sr==er & sc==ec){
    cout<<s<<endl; // destination reached
    return;
  }
  printpossiblepaths(sr,sc+1,er,ec,s+"R"); //right moved
  printpossiblepaths(sr+1,sc,er,ec,s+"L"); //left moved
}


int main(){
  printpossiblepaths(1,1,3,3,"");

}