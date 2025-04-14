#include <iostream>
#include <string>
using namespace std;

// declare array without size, must be initialized
int nilai[] = {1,2,3};

//declare array with size and initialize
string nama[5] = {"ben", "agus", "fara", "ama", "sakila"};

//declare array with size and no initialization
float score[5];

int main(){
    cout << "=======This Is Before Change======" << endl;
    cout << "Nama pada index 4 adalah " << nama[3] << endl;
    //change value on array
    nama[3] = "piska";
    cout << "=======This Is After Change=======" << endl;
    cout << "Nama pada index 4 adalah " << nama[3] << endl;


}