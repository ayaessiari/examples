#include <iostream>
#include <fstream>

using namespace std;

int main() {
    string file_name;

    cout << "Please enter an employee file:";
    cin >> file_name;
    cout << "You have entered " << file_name << endl;

    ifstream coucou(file_name);
    ofstream joker("caca.txt");

    string name;
    int age;
    
    for (int i = 0; i < 2; i++) {
        coucou >> name >> age;
        cout << "Hey I read:" << name << ", " << age << endl;
        joker << name << " " << age << endl;
    }
}
