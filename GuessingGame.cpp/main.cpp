#include <iostream>

#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_RESET   "\x1b[0m"
#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"

using namespace std;

int main() {
   int guess=37;
   int user;

    std::cout << ANSI_COLOR_YELLOW"THE GUESSING GAME" ANSI_COLOR_RESET << std::endl;
    std::cout << "I am thinking of a number between 1 and 100. Guess it! You have 20 tries" << std::endl;
    std::cout << "I do not have times for games. If you say a letter, you'll be sent out of my tent." << std::endl;

    for (int i = 0; i < 20; ++i) {
        std::cout << "Guess " << i+1 << ": ";
        std::cin >> user;

        if (user == guess) {
            std::cout << ANSI_COLOR_GREEN"..." << std::endl;
            std::cout << "You guessed my number..." << std::endl;
            std::cout << "Congrats >:(" << std::endl;
            std::cout << "NEXT!" ANSI_COLOR_RESET<< std::endl;
            break;
        }
        if (user != guess && i < 19 && !(user < 1 || user > 100)) {
            std::cout << ANSI_COLOR_RED"Nope, guess again!" ANSI_COLOR_RESET<< std::endl;
        }
        if (user < 1 || user > 100) {
            std::cout << ANSI_COLOR_RED"That number is not between 1 or 100" ANSI_COLOR_RESET<< std::endl;
        }
        if (i == 19) {
            std::cerr << "Ok, you've used up all you guesses, out of my tent!" << std::endl;
            std::cerr << "NEXT!" << std::endl;
            break;
        }
    }
    return 0;
}