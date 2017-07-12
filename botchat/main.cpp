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
void intro();
void room();

char botname[20];
char response;

int main() {
    greeting();
    return 0;
}

void greeting() {
    cout << ANSI_TEXT_BOLD << ANSI_COLOR_RED "DatFailKid " << ANSI_TEXT_BOLD "Presents" ANSI_COLOR_RESET << endl;
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

    cout << "Use 'Enter' to progress" << endl;
    cout << "Type in one of the following:" << endl;
    cout << ANSI_COLOR_GREEN << ANSI_TEXT_UNDERLINE "chat" ANSI_COLOR_RESET << ": Start chatting" << endl;
    cout << ANSI_COLOR_GREY << ANSI_TEXT_UNDERLINE "set" ANSI_COLOR_RESET << ": Settings, change stuff..." << endl;
    cout << ANSI_COLOR_PURPLE << ANSI_TEXT_UNDERLINE "help" ANSI_COLOR_RESET << ": Find out how to use the program" << endl;
    cout << ANSI_COLOR_CYAN << ANSI_TEXT_UNDERLINE "exit" ANSI_COLOR_RESET << ": Exit the program" << endl;

    cin >> command;

    if (strcmp(command, chat) == 0) {
        intro();
    }
    if (strcmp(command, settings) == 0) {
        getchar();
        cout << ANSI_COLOR_RED "Not done with this yet!" ANSI_COLOR_RESET<< endl;
        getchar();
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
        menu();
    }

    if (strcmp(command, end) == 0) {
        cout << ANSI_COLOR_CYAN"Are you sure you want to exit?" << endl;
        cout << "Type 'y' for 'yes', type 'n' for 'no'." ANSI_COLOR_RESET<< endl;
        cin >> ans;

        switch (ans) {
            case 'y':
                getchar();
                cout << "Shutting down..." << endl;
                getchar();
                break;
            case 'n':
                getchar();
                cout << "Oh, ok" << endl;
                getchar();
                menu();
            default:
                getchar();
                cout << "I'm assuming you mean 'no'." << endl;
                getchar();
                menu();
        }
    }
}

void intro() {
    int age;
    cout << "Ok! First, what's your bot's name going to be?" << endl;
    cin >> botname;
    cout << "Ok, initializing chat with " << botname << endl;
    getchar();

    cout << ANSI_TEXT_BOLD << ANSI_TEXT_UNDERLINE << botname << ANSI_COLOR_RESET<< endl;
    getchar();
    cout << "You made a chat group with " << ANSI_TEXT_BOLD << botname << ANSI_COLOR_RESET << endl;
    getchar();
    cout << ANSI_TEXT_BOLD << botname << ": " <<  ANSI_COLOR_GREY "Hi" ANSI_COLOR_RESET<< endl;
    getchar();

    cout << "Choose a response from below:" << endl;
    cout << ANSI_TEXT_UNDERLINE << "a" << ANSI_COLOR_RESET ": hi" << endl;
    cout << ANSI_TEXT_UNDERLINE << "Any other character" << ANSI_COLOR_RESET ": (Return to menu)" << endl;

    cin >> response;

    switch (response) {
        case '\n':
        case 'a': {
            getchar();
            cout << ANSI_TEXT_BOLD "You: " << ANSI_COLOR_BLUE "hi" ANSI_COLOR_RESET<< endl;
            getchar();
            cout << ANSI_TEXT_BOLD << botname << ": " << ANSI_COLOR_GREY "Just curious, how old are you?" ANSI_COLOR_RESET << endl;
            getchar();
            cout << "Choose a response from below:" << endl;
            cout << ANSI_TEXT_UNDERLINE << "a" << ANSI_COLOR_RESET ": (Enter response)" << endl;
            cout << ANSI_TEXT_UNDERLINE << "b" << ANSI_COLOR_RESET ": I'm not telling you!" << endl;
            cout << ANSI_TEXT_UNDERLINE << "Any other character" << ANSI_COLOR_RESET ": (Return to menu)" << endl;
            cin >> response;

            switch (response) {
                case 'a':
                case 'b':{
                    if (response == 'a') {
                        cout << "Age: " << endl;
                        cin >> age;
                        getchar();
                        cout << ANSI_TEXT_BOLD "You: " << ANSI_COLOR_BLUE << age << ANSI_COLOR_RESET << endl;
                        getchar();
                        cout << ANSI_TEXT_BOLD << botname << ": " << ANSI_COLOR_GREY "Ok" ANSI_COLOR_RESET << endl;
                        getchar();
                        room();
                    }
                    if (response == 'b') {
                        getchar();
                        cout << ANSI_TEXT_BOLD "You: " << ANSI_COLOR_BLUE "I'm not telling you!" ANSI_COLOR_RESET<< endl;
                        getchar();
                        cout << ANSI_TEXT_BOLD << botname << ": " << ANSI_COLOR_GREY "Ok, I understand that." ANSI_COLOR_RESET << endl;
                        getchar();
                        room();
                    }}}}
        default: {
            cout << "Returning to menu..." << endl;
            menu();
        }}}

void room() {
    cout << ANSI_TEXT_BOLD << botname << ": " << ANSI_COLOR_GREY "What do you want to talk about?" ANSI_COLOR_RESET << endl;
    getchar();

    cout << "Choose a response from below:" << endl;
    cout << ANSI_TEXT_UNDERLINE << "a" << ANSI_COLOR_RESET ": Video Games" << endl;
    cout << ANSI_TEXT_UNDERLINE << "b" << ANSI_COLOR_RESET ": Global Warming" << endl;
    cout << ANSI_TEXT_UNDERLINE << "c" << ANSI_COLOR_RESET ": Fidget Spinners" << endl;
    cout << ANSI_TEXT_UNDERLINE << "d" << ANSI_COLOR_RESET ": Dreams" << endl;
    cout << ANSI_TEXT_UNDERLINE << "Any other character" << ANSI_COLOR_RESET ": (Return to menu)" << endl;
    cin >> response;

    switch (response) {
        case 'a': {
            getchar();
            cout << ANSI_TEXT_BOLD "You: " << ANSI_COLOR_BLUE "Video Games" ANSI_COLOR_RESET << endl;
            getchar();
            cout << ANSI_TEXT_BOLD << botname << ": " << ANSI_COLOR_GREY "Ok" ANSI_COLOR_RESET << endl;
            getchar();
            cout << ANSI_TEXT_BOLD << botname << ": " << ANSI_COLOR_GREY "What console do you play on?" ANSI_COLOR_RESET << endl;
            getchar();

            cout << ANSI_TEXT_UNDERLINE << "a" << ANSI_COLOR_RESET ": Xbox One" << endl;
            cout << ANSI_TEXT_UNDERLINE << "b" << ANSI_COLOR_RESET ": PS4" << endl;
            cout << ANSI_TEXT_UNDERLINE << "Any other character" << ANSI_COLOR_RESET ": (Return to menu)" << endl;

            cin >> response;

            switch (response) {
                case 'a': {
                    getchar();
                    cout << ANSI_TEXT_BOLD "You: " << ANSI_COLOR_BLUE "Xbox One" ANSI_COLOR_RESET << endl;
                    getchar();
                    cout << ANSI_TEXT_BOLD << botname << ": " << ANSI_COLOR_GREY "Oh, cool!" ANSI_COLOR_RESET << endl;
                    getchar();
                    cout << ANSI_TEXT_BOLD << botname << ": " << ANSI_COLOR_GREY "What's your gamertag?" ANSI_COLOR_RESET << endl;
                }
                case 'b': {
                    getchar();
                    cout << ANSI_TEXT_BOLD "You: " << ANSI_COLOR_BLUE "PS4" ANSI_COLOR_RESET << endl;
                    getchar();
                    cout << ANSI_TEXT_BOLD << botname << ": " << ANSI_COLOR_GREY "Ew." ANSI_COLOR_RESET << endl;
                    getchar();
                    cout << ANSI_TEXT_BOLD << botname << ": " << ANSI_COLOR_GREY "How do you like that system?" ANSI_COLOR_RESET << endl;
                    getchar();

                    cout << ANSI_TEXT_UNDERLINE << "a" << ANSI_COLOR_RESET ": Enter gamertag" << endl;
                    cout << ANSI_TEXT_UNDERLINE << "b" << ANSI_COLOR_RESET ": Actually, I don't have Xbox Live yet..." << endl;
                    cout << ANSI_TEXT_UNDERLINE << "Any other character" << ANSI_COLOR_RESET ": (Return to menu)" << endl;

                    cin >> response;
                }
                default: {
                    cout << "Returning to menu..." << endl;
                    menu();
                }
            }
            case 'b': {
                getchar();
                cout << ANSI_TEXT_BOLD "You: " << ANSI_COLOR_BLUE "Global Warming" ANSI_COLOR_RESET << endl;
                getchar();
                cout << ANSI_TEXT_BOLD << botname << ": " << ANSI_COLOR_GREY "Ok" ANSI_COLOR_RESET << endl;
                getchar();
                cout << ANSI_TEXT_BOLD << botname << ": " << ANSI_COLOR_GREY "Do you think that global warming is a thing?" ANSI_COLOR_RESET << endl;
                getchar();

                cout << ANSI_TEXT_UNDERLINE << "a" << ANSI_COLOR_RESET ": Yes, obviously" << endl;
                cout << ANSI_TEXT_UNDERLINE << "b" << ANSI_COLOR_RESET ": No, I don't think so..." << endl;
                cout << ANSI_TEXT_UNDERLINE << "c" << ANSI_COLOR_RESET ": What's global warming?" << endl;
                cout << ANSI_TEXT_UNDERLINE << "Any other character" << ANSI_COLOR_RESET ": (Return to menu)" << endl;

                cin >> response;

                switch (response) {
                    case 'a': {
                        getchar();
                        cout << ANSI_TEXT_BOLD "You: " << ANSI_COLOR_BLUE "Yes, obviously" ANSI_COLOR_RESET << endl;
                        getchar();
                        cout << ANSI_TEXT_BOLD << botname << ": " << ANSI_COLOR_GREY "Yeah, I agree!" ANSI_COLOR_RESET << endl;
                        getchar();
                        cout << ANSI_TEXT_BOLD << botname << ": " << ANSI_COLOR_GREY "I don't see how some people can deny that global warming is a thing." ANSI_COLOR_RESET << endl;
                        getchar();
                    }
                    case 'b': {
                        getchar();
                        cout << ANSI_TEXT_BOLD "You: " << ANSI_COLOR_BLUE "No, I don't think so" ANSI_COLOR_RESET << endl;
                        getchar();
                        cout << ANSI_TEXT_BOLD << botname << ": " << ANSI_COLOR_GREY "HOW?!" ANSI_COLOR_RESET << endl;
                        getchar();
                    }
                    case 'c': {
                        getchar();
                        cout << ANSI_TEXT_BOLD "You: " << ANSI_COLOR_BLUE "What's global warming?" ANSI_COLOR_RESET << endl;
                        getchar();
                        cout << ANSI_TEXT_BOLD << botname << ": " << ANSI_COLOR_GREY "Basically, it means that the earth is getting warmer over time." ANSI_COLOR_RESET << endl;
                        getchar();
                    }
                    default: {
                        cout << "Returning to menu..." << endl;
                        menu();
                    }
                }
                case 'c': {
                    getchar();
                    cout << ANSI_TEXT_BOLD "You: " << ANSI_COLOR_BLUE "Fidget Spinners" ANSI_COLOR_RESET << endl;
                    getchar();
                    cout << ANSI_TEXT_BOLD << botname << ": " << ANSI_COLOR_GREY "Ew" ANSI_COLOR_RESET << endl;
                    getchar();

                    cout << ANSI_TEXT_UNDERLINE << "a" << ANSI_COLOR_RESET ": HOW DARE YOU!" << endl;
                    cout << ANSI_TEXT_UNDERLINE << "b" << ANSI_COLOR_RESET ": You hate fidget spinners, too?" << endl;
                    cout << ANSI_TEXT_UNDERLINE << "Any other character" << ANSI_COLOR_RESET ": (Return to menu)" << endl;

                    cin >> response;

                    switch (response) {
                        case 'a': {
                            getchar();
                            cout << ANSI_TEXT_BOLD "You: " << ANSI_COLOR_BLUE "HOW DARE YOU!" ANSI_COLOR_RESET << endl;
                            getchar();
                            cout << ANSI_TEXT_BOLD << botname << ": " << ANSI_COLOR_GREY "What do you mean, 'HOW DARE YOU!'? The things are cancerous!" ANSI_COLOR_RESET << endl;
                            getchar();
                        }
                        case 'b': {
                            getchar();
                            cout << ANSI_TEXT_BOLD "You: " << ANSI_COLOR_BLUE "You hate fidget spinners, too?" ANSI_COLOR_RESET << endl;
                            getchar();
                            cout << ANSI_TEXT_BOLD << botname << ": " << ANSI_COLOR_GREY "Of course I do!" ANSI_COLOR_RESET << endl;
                            getchar();
                            cout << ANSI_TEXT_BOLD << botname << ": " << ANSI_COLOR_GREY "They've practically infiltrated our everyday lives!" ANSI_COLOR_RESET << endl;
                            getchar();
                            cout << ANSI_TEXT_BOLD << botname << ": " << ANSI_COLOR_GREY "Mobile apps, youtube videos, there's even one you can put on your teeth!" ANSI_COLOR_RESET << endl;
                            getchar();
                            cout << ANSI_TEXT_BOLD << botname << ": " << ANSI_COLOR_GREY "They're the most cancerous thing on the planet!" ANSI_COLOR_RESET << endl;
                            getchar();
                        }

                        default: {
                            cout << "Returning to menu..." << endl;
                            menu();
                        }
                    }
                    case 'd': {
                        getchar();
                        cout << ANSI_TEXT_BOLD "You: " << ANSI_COLOR_BLUE "Dreams" ANSI_COLOR_RESET << endl;
                        getchar();
                        cout << ANSI_TEXT_BOLD << botname << ": " << ANSI_COLOR_GREY "Ok" ANSI_COLOR_RESET << endl;
                        getchar();
                        cout << ANSI_TEXT_BOLD << botname << ": " << ANSI_COLOR_GREY "What's your goal in life?" ANSI_COLOR_RESET << endl;
                        getchar();

                        cout << ANSI_TEXT_UNDERLINE << "a" << ANSI_COLOR_RESET ": To do what I love" << endl;
                        cout << ANSI_TEXT_UNDERLINE << "b" << ANSI_COLOR_RESET ": To start a business" << endl;
                        cout << ANSI_TEXT_UNDERLINE << "c" << ANSI_COLOR_RESET ": To see my kids live successful lives" << endl;
                        cout << ANSI_TEXT_UNDERLINE << "d" << ANSI_COLOR_RESET ": Actually, I don't have one yet..." << endl;
                        cout << ANSI_TEXT_UNDERLINE << "Any other character" << ANSI_COLOR_RESET ": (Return to menu)" << endl;

                        cin >> response;

                        switch (response) {
                            case 'a': {
                                getchar();
                                cout << ANSI_TEXT_BOLD "You: " << ANSI_COLOR_BLUE "To do what I love" ANSI_COLOR_RESET << endl;
                                getchar();
                                cout << ANSI_TEXT_BOLD << botname << ": " << ANSI_COLOR_GREY "Well that's great to hear." ANSI_COLOR_RESET << endl;
                                getchar();
                                cout << ANSI_TEXT_BOLD << botname << ": " << ANSI_COLOR_GREY "Like I heard once, 'Do what you love, and let it kill you" ANSI_COLOR_RESET << endl;
                                getchar();
                            }
                            case 'b': {
                                getchar();
                                cout << ANSI_TEXT_BOLD "You: " << ANSI_COLOR_BLUE "To start a business" ANSI_COLOR_RESET << endl;
                                getchar();
                                cout << ANSI_TEXT_BOLD << botname << ": " << ANSI_COLOR_GREY "Really? What kind of business" ANSI_COLOR_RESET << endl;
                                getchar();
                            }
                            case 'c': {
                                getchar();
                                cout << ANSI_TEXT_BOLD "You: " << ANSI_COLOR_BLUE "To see my kids live successful lives" ANSI_COLOR_RESET << endl;
                                getchar();
                                cout << ANSI_TEXT_BOLD << botname << ": " << ANSI_COLOR_GREY "Aw, that's nice" ANSI_COLOR_RESET << endl;
                                getchar();
                                cout << ANSI_TEXT_BOLD << botname << ": " << ANSI_COLOR_GREY "How many kids do you have?" ANSI_COLOR_RESET << endl;
                                getchar();
                            }
                            case 'd': {
                                getchar();
                                cout << ANSI_TEXT_BOLD "You: " << ANSI_COLOR_BLUE "Actually, I don't have one yet..." ANSI_COLOR_RESET << endl;
                                getchar();
                                cout << ANSI_TEXT_BOLD << botname << ": " << ANSI_COLOR_GREY "You don't?" ANSI_COLOR_RESET << endl;
                                getchar();
                                cout << ANSI_TEXT_BOLD << botname << ": " << ANSI_COLOR_GREY "Well, let me suggest an idea." ANSI_COLOR_RESET << endl;
                                getchar();
                                cout << ANSI_TEXT_BOLD << botname << ": " << ANSI_COLOR_GREY "'Do what you love and let it kill you'" ANSI_COLOR_RESET << endl;
                                getchar();
                                cout << ANSI_TEXT_BOLD << botname << ": " << ANSI_COLOR_GREY "If you love playing video games, make or play them" ANSI_COLOR_RESET << endl;
                                getchar();
                                cout << ANSI_TEXT_BOLD << botname << ": " << ANSI_COLOR_GREY "If you love acting, be an actor or actress" ANSI_COLOR_RESET << endl;
                                getchar();
                                cout << ANSI_TEXT_BOLD << botname << ": " << ANSI_COLOR_GREY "You get my point." ANSI_COLOR_RESET << endl;
                                getchar();
                            }

                            default: {
                                cout << "Returning to menu..." << endl;
                                menu();
                            }
                        }

                    }}}}
        default: {
            cout << "Returning to menu..." << endl;
            menu();
        }}}

//Response template
/*switch (response) {
        case '': {
            getchar();
            cout << ANSI_TEXT_BOLD "You: " << ANSI_COLOR_BLUE "" ANSI_COLOR_RESET << endl;
            getchar();
            cout << ANSI_TEXT_BOLD << botname << ": " << ANSI_COLOR_GREY "" ANSI_COLOR_RESET << endl;
            getchar();
            } */
//Future things
    /* Mouse input
     * Highlight whenever the mouse is over an option
     * Extra "people" that the user can "talk" to
     * Hidden "talk about" options
     * Allow the user to press enter to enter a response (in the event there is only one)
     *  Ex. Line 122-124*/

//Bugs to fix
/*Space in bot name causes the program to end*/