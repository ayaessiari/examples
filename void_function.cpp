#include <iostream>

void hello()  {
    std::cout << "Hi how are you? Please enter a character.";
}


int main() {
    char value;


    // while (true) {  // forerver loop
    for (;;) {  // forerver loop
        hello();
        std::cin >> value;

    	switch(value) {
       	   case 'g':
                std::cout << "Great" << std::endl;
                break;
           case 'b':
                std::cout << "Sorry" << std::endl;
                break;
           default:
                std::cout << "Bye Me No Understand. You typed " << value <<  ". Next time enter g or b. Now try again" << std::endl;
        }

        if (value == 'g' || value == 'b') {
           break;
        }
    }
}
