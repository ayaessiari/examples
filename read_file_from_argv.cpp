#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char** argv) {
    // cout << argc << endl;
    cout << argv[0] << endl;

    if (argc != 2) {
        cout << "Hey Joker enter an ..." << endl;
        return 0;
    }

    ifstream coucou(argv[1]);
    ofstream joker("caca.txt");

    string name;
    int age;
    
    for (int i = 0; i < 2; i++) {
        coucou >> name >> age;
        cout << "Hey I read:" << name << ", " << age << endl;
        joker << name << " " << age << endl;
        // return 0;
    }

    cout << " I am done Thank you" << endl;
}
