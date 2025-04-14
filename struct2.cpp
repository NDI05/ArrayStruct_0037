#include <iostream>
#include <string>
using namespace std;

struct Player {
    string name;
    string id;
    string level;
};

int main(){
    Player pl;
    cout << "==================================" << endl;
    cout << "=====Input&Output Data Struct======" << endl;
    cout << "==================================" << endl;
    // input data to struct
    cout << "Masukkan Nama Player : ";
    getline(cin, pl.name);
    cout << "Masukkan ID Player : ";
    cin >> pl.id;
    cout << "Masukkan Level Player : ";
    cin >> pl.level;
    // output data struct
    cout << "=========Output Data Struct========" << endl;
    cout << "Nama Player : " << pl.name << endl;
    cout << "ID Player : " << pl.id << endl;
    cout << "Level Player : " << pl.level << endl;
    cout << "====================================" << endl;
}