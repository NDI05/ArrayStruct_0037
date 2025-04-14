#include <iostream>
#include <string>
using namespace std;

struct Weapon {
    string name;
    int damage;
};

struct Player {
    string name;
    string id;
    string level;
    Weapon wp;
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
    cin.ignore();
    cout << "Masukkan Nama Weapon : ";
    getline(cin, pl.wp.name);
    cout << "Masukkan Damage Weapon : ";
    cin >> pl.wp.damage;
    // output data struct
    cout << "=========Output Data Struct========" << endl;
    cout << "Nama Player : " << pl.name << endl;
    cout << "ID Player : " << pl.id << endl;
    cout << "Level Player : " << pl.level << endl;
    cout << "Nama Weapon Player : " << pl.wp.name << endl;
    cout << "Damage Weapon Player : " << pl.wp.damage << endl;
    cout << "====================================" << endl;
}