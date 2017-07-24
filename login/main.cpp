#include <iostream>
#include <cstring>

#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_CYAN    "\x1b[36m"
#define ANSI_COLOR_RESET   "\x1b[0m"
#define ANSI_COLOR_LAVENDER "\x1b[35m"

using namespace std;
char username[]="VideoGame";
char user[9]=" ";
char password[]="allday";
char pass[6]=" ";

int main() {
    std::cout << ANSI_COLOR_RED "YOU HAVE 3 ATTEMPTS TO ENTER YOUR CORRECT LOGIN INFO. IF YOU DO NOT ENTER THE CORRECT ON WITHIN 3 ATTEMPTS, YOUR ACCOUNT WILL BE LOCKED." ANSI_COLOR_RESET<< std::endl;

    for (int i = 0; i < 4; ++i) {
        cout << ANSI_COLOR_CYAN"Hint: Your username has " << strlen(username) << " characters in it." ANSI_COLOR_RESET<< endl;
        cout << ANSI_COLOR_RED"ENTER YOUR USERNAME: " ANSI_COLOR_RESET;
        cin >> user;

        if (strlen(user) > strlen(username)) {
            cout << "TOO MANY CHARACTERS" << endl;
        }

        cout << ANSI_COLOR_CYAN"Hint: Your password has " << strlen(password) << " characters in it." ANSI_COLOR_RESET<< endl;
        cout << ANSI_COLOR_RED"ENTER YOUR PASSWORD: " ANSI_COLOR_RESET;
        cin >> pass;

        if (strlen(pass) > strlen(password)) {
            cout << "TOO MANY CHARACTERS" << endl;
        }

        if ((strcmp(username, user) == 0) && (strcmp(password, pass)) == 0) {
            cout << ANSI_COLOR_GREEN"Welcome to the Failed Network!" ANSI_COLOR_RESET<< endl;
            break;
        } else if (((strcmp(username, user) != 0) || (strcmp(password, pass)) != 0) && i > 3) {
            cout << "YOU HAVE USED UP ALL YOUR ATTEMPTS, LOCKING ACCOUNT UP..." << endl;
            break;
        }
        else if (((strcmp(username, user) != 0) || (strcmp(password, pass)) != 0) && i < 3){
            cout << "INCORRECT. YOU HAVE " << 2-i << " ATTEMPTS REMAINING." << endl;
        }
    }
    return 0;
}