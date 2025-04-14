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
    Player pl[3];
    cout << "==================================" << endl;
    cout << "=====Input&Output Data Struct=====" << endl;
    cout << "==================================" << endl;
    // input data to struct
    for(int i=0; i < 3; i++){
        cout << "Masukkan Nama Player : ";
        getline(cin, pl[i].name);
        cout << "Masukkan ID Player : ";
        cin >> pl[i].id;
        cout << "Masukkan Level Player : ";
        cin >> pl[i].level;
        cin.ignore();
        cout << "Masukkan Nama Weapon : ";
        getline(cin, pl[i].wp.name);
        cout << "Masukkan Damage Weapon : ";
        cin >> pl[i].wp.damage;
        cout << "====================================" << endl;
        cin.ignore();
    }
    // output data struct
    cout << "=========Output Data Struct=========" << endl;
    for (int i=0; i < 3; i++){
        cout << "Nama Player : " << pl[i].name << endl;
        cout << "ID Player : " << pl[i].id << endl;
        cout << "Level Player : " << pl[i].level << endl;
        cout << "Nama Weapon Player : " << pl[i].wp.name << endl;
        cout << "Damage Weapon Player : " << pl[i].wp.damage << endl;
        cout << "====================================" << endl;
    }
}