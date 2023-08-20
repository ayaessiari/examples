#include <iostream>

using namespace std;

/**
  * Returns true if input is a palidrome.
  */
bool check_user_input(const string& p)  {
   // AYA TO CHANGE THIS FUNCTION TO HANDLE PALINDROMES. .....
   return false;
}

int main() {
    string value;

    cout << "Enter a palindrome:";
    while (true) {  // forerver loop
        cin >> value;
        bool exit = check_user_input(value);

        if (exit) {
           cout << "Congratulations! You have entered a Palindrome." << endl;
           break;
        }

        cout << value << " is not a palindrome!" << endl;
        cout << "Please enter palindrome:";
    }
}
