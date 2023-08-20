#include <iostream>

bool check_user_input(int c)  {
    switch(c) {
       	   case 10:
                std::cout << "Great" << std::endl;
                break;
           case 20:
                std::cout << "Sorry" << std::endl;
                break;
           default:
                std::cout << "Bye Me No Understand. You typed " << c <<  ". Next time enter g or b. Now try again. ";
                break;
    }

    if (c == 10 || c == 20) {
       return true;
    } 

    return false;
}


int main() {
    int value;


    std::cout << "Hi how are you? Please enter a number. Please .... .";
    while (true) {  // forerver loop
        std::cin >> value;
        bool exit = check_user_input(value);

        if (exit) {
           break;
        }

    }
}
