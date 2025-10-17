#include<iostream>

using namespace std;

class Bike{
public:
    int tyresize;
    int enginesize;

    Bike(int tyresize, int enginesize){ //constructor
        this->tyresize = tyresize;
        this->enginesize = enginesize;
    }
    ~Bike(){
        cout<<"destructor called";
    }
};

int main(){
    Bike tvs(12,100);

    cout<<tvs.tyresize<<" ";
}