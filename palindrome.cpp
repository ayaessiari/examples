#include <iostream>

using namespace std;

bool check_user_input(int& p)  {
   // AYA TO CHANGE THIS FUNCTION TO HANDLE PALINDROMES. .....

   p = 20;
   return true;
}

int main() {
    int value;

    cout << "Enter a number:";
    while (true) {  // forerver loop
        cin >> value;
        cout << "BEFORE:" << value << endl;;
        bool exit = check_user_input(value);
        cout << "AFTER:" << value << endl;;

        if (exit) {
           cout << "You have entered a Palindrome" << endl;
           break;
        }
    }
}
