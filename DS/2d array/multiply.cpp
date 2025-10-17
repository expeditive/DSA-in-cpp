#include<iostream>
using namespace  std;

int main(){
  int m;
  int n;
  cout<<"Enter rows of 1st matrix : ";
  cin>>m;
  cout<<"Enter col of 1st matrix : ";
  cin>>n;
  int m1[m][n];
  cout<<"enter elements of 1st matrix : "<<endl;
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      cout<<"enter element"<<"("<<i<<","<<j<<")of m1 :"<<" ";
      cin>>m1[i][j];
    }
    cout<<endl;
  }

  int p;
  int q;
  cout<<"Enter rows of 2nd matrix : ";
  cin>>p;
  cout<<"Enter col of 2nd matrix : ";
  cin>>q;
  int m2[p][q];
  cout<<"enter elements of 2nd matrix : "<<endl;
  for(int i=0;i<p;i++){
    for(int j=0;j<q;j++){
      cout<<"enter element"<<"("<<i<<","<<j<<") of m2 :"<<" ";
      cin>>m2[i][j];
    }
    cout<<endl;
  }
  if (n == p) {
    int m1m2[m][q];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
          m1m2[i][j]=0;
            for (int k = 0; k < n; k++) {
                m1m2[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }

    cout << "Resultant matrix:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            cout << m1m2[i][j] << " ";
        }
        cout << endl;
    }

  }
  else{
    cout<<"Mulptiplication not possible";
  }


}