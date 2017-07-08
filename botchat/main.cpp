#include <iostream>
#include <cstring>

#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_CYAN    "\x1b[36m"
#define ANSI_COLOR_RESET   "\x1b[0m"
#define ANSI_COLOR_PURPLE "\x1b[35m"
#define ANSI_TEXT_BOLD     "\x1b[1m"
#define ANSI_TEXT_UNDERLINE   "\x1b[4m"
#define ANSI_HIGHLIGHT_STD    "\x1b[7m"
#define ANSI_COLOR_YELLOW   "\x1b[33m"
#define ANSI_COLOR_BLUE "\x1b[34m"
#define ANSI_COLOR_GREY "\x1b[37m"
#define ANSI_HIGHLIGHT_WHITE "\x1b[40m"
#define ANSI_HIGHLIGHT_RED "\x1b[41m"
#define ANSI_HIGHLIGHT_GREEN "\x1b[42m"
#define ANSI_HIGHLIGHT_YELLOW "\x1b[43m"
#define ANSI_HIGHLIGHT_BLUE "\x1b[44m"
#define ANSI_HIGHLIGHT_PURPLE "\x1b[45m"
#define ANSI_HIGHLIGHT_CYAN "\x1b[46m"
#define ANSI_HIGHLIGHT_GREY "\x1b[47m"

using namespace std;

void greeting();
void menu();
void room();

int main() {
    greeting();
    return 0;
}

void greeting() {
    cout << ANSI_TEXT_BOLD "DatFailKid Presents" ANSI_COLOR_RESET << endl;
    cout << "(Press Enter)" << endl;
    getchar();
    cout << ANSI_TEXT_BOLD << ANSI_COLOR_YELLOW "Bot Chat" ANSI_COLOR_RESET<< endl;
    getchar();
    menu();
};

void menu() {
    char command[10];
    char chat[]="chat";
    char settings[]="set";
    char help[]="help";
    char end[]="exit";
    char ans=' ';

    cout << "Type in one of the following:" << endl;
    cout << ANSI_COLOR_GREEN << ANSI_TEXT_UNDERLINE "chat" ANSI_COLOR_RESET << ": Start chatting" << endl;
    cout << ANSI_COLOR_GREY << ANSI_TEXT_UNDERLINE "set" ANSI_COLOR_RESET << ": Settings, change stuff..." << endl;
    cout << ANSI_COLOR_PURPLE << ANSI_TEXT_UNDERLINE "help" ANSI_COLOR_RESET << ": Find out how to use the program" << endl;
    cout << ANSI_COLOR_CYAN << ANSI_TEXT_UNDERLINE "exit" ANSI_COLOR_RESET << ": Exit the program" << endl;

    cin >> command;

    if (strcmp(command, chat) == 0) {
        room();
    }
    if (strcmp(command, settings) == 0) {
        cout << ANSI_COLOR_RED "Not done with this yet!" ANSI_COLOR_RESET<< endl;
        menu();

        /* Add in:
         * Turn highlight on/off
         * Change text color
         * Mouse input on/off*/
    }
    if (strcmp(command, help) == 0) {
        getchar();
        cout << ANSI_COLOR_PURPLE"You will be able to have a conversation with a bot. Their name? I'm not sure yet." << endl;
        getchar();
        cout << "Their responses will be in " ANSI_COLOR_GREY "this color." ANSI_COLOR_RESET << endl;
        getchar();
        cout << ANSI_COLOR_PURPLE"Your responses will be in " << ANSI_COLOR_BLUE "this color." ANSI_COLOR_RESET << endl;
        getchar();
        cout << ANSI_COLOR_PURPLE"You will respond with certain phrases that may change based on what you tell the bot." ANSI_COLOR_RESET << endl;
        getchar();
        cout << ANSI_COLOR_PURPLE"In the event that there is only one option, you can use enter to respond." ANSI_COLOR_RESET << endl;
        getchar();
        menu();
    }

    if (strcmp(command, end) == 0) {
        cout << ANSI_COLOR_CYAN"Are you sure you want to exit?" << endl;
        cout << "Type 'y' for 'yes', type 'n' for 'no'." ANSI_COLOR_RESET<< endl;
        cin >> ans;

        switch (ans) {
            case 'y':
                cout << "Shutting down..." << endl;
                break;
            case 'n':
                cout << "Oh, ok" << endl;
                menu();
            default:
                cout << "I'm assuming you mean 'no'." << endl;
                menu();
        }
    }
}

void room() {
    char botname[20];
    char response;
    cout << "Ok! First, what's your bot's name going to be?" << endl;
    cin >> botname;
    cout << "Ok, initializing chat with " << botname << endl;
    getchar();

    cout << botname << endl;
    cout << ANSI_TEXT_BOLD "You made a chat group with " << ANSI_COLOR_GREY << ANSI_TEXT_BOLD << botname << ANSI_COLOR_RESET << endl;
    cout << ANSI_TEXT_BOLD << botname << ANSI_COLOR_GREY ": Hi" ANSI_COLOR_RESET<< endl;

    cout << "Choose a response from below:" << endl;
    cout << "a" << ": hi" << endl;

    cin >> response;

    switch (response) {
        case '\n':
        case 'a': {
            cout << ANSI_COLOR_BLUE "hi" ANSI_COLOR_RESET<< endl;
            cout << ANSI_TEXT_BOLD << botname << ANSI_COLOR_GREY ": Just curious, how old are you?" ANSI_COLOR_RESET << endl;
        }
    }
}

//Response template
/*switch (response) {
        case 'a': {
            cout << ANSI_COLOR_BLUE "" ANSI_COLOR_RESET << endl;
            cout << ANSI_TEXT_BOLD << botname << ANSI_COLOR_GREY ": " ANSI_COLOR_RESET << endl;
            } */
//Future things
    /* Mouse input
     * Highlight whenever the mouse is over an option
     * Extra "people" that the user can "talk" to*/