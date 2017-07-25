#include <iostream>
#include <cstring>

#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_CYAN    "\x1b[36m"
#define ANSI_COLOR_RESET   "\x1b[0m"
#define ANSI_COLOR_PURPLE "\x1b[35m"
#define ANSI_TEXT_BOLD     "\x1b[1m"
#define ANSI_TEXT_UNDERLINE   "\x1b[4m"
#define ANSI_COLOR_YELLOW   "\x1b[33m"
#define ANSI_COLOR_BLUE "\x1b[34m"
#define ANSI_COLOR_GREY "\x1b[37m"

using namespace std;

void greeting();
void menu();
void intro();
void room();
void bintro();
void battle();

char botname[20];
char response;

bool greatmind; //Great Minds Think Alike
bool bestfriend; //Best Friends(?)
bool trueend; //The True Ending
bool swornrival; //Sworn Rivals
bool disworld; //Distant Worlds
bool inspire; //Inspire

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
    char eend[]="ending";
    char ans=' ';

    cout << "Use 'Enter' to progress" << endl;
    cout << "Type in one of the following:" << endl;
    cout << ANSI_COLOR_GREEN << ANSI_TEXT_UNDERLINE "chat" ANSI_COLOR_RESET << ": Start chatting" << endl;
    cout << ANSI_COLOR_GREY << ANSI_TEXT_UNDERLINE "set" ANSI_COLOR_RESET << ": Settings, change stuff..." << endl;
    cout << ANSI_COLOR_PURPLE << ANSI_TEXT_UNDERLINE "help" ANSI_COLOR_RESET << ": Find out how to use the program" << endl;
    cout << ANSI_COLOR_YELLOW << ANSI_TEXT_UNDERLINE "ending" ANSI_COLOR_RESET << ": See your completed endings" << endl;
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
    if (strcmp(command, eend) == 0) {
        cout << ANSI_COLOR_YELLOW << ANSI_TEXT_BOLD"Endings:" ANSI_COLOR_RESET<< endl;
        getchar();

        if (greatmind) {
            getchar();
            cout << ANSI_COLOR_YELLOW << ANSI_TEXT_BOLD"Great Minds Think Alike: " ANSI_COLOR_RESET;
            cout << ANSI_COLOR_YELLOW"You shared the same view as your bot on fidget spinners" ANSI_COLOR_RESET << endl;
            getchar();
        }
        if (bestfriend) {
            getchar();
            cout << ANSI_COLOR_YELLOW << ANSI_TEXT_BOLD"Best friends(?): " ANSI_COLOR_RESET;
            cout << ANSI_COLOR_YELLOW "You got a new Xbox Live friend!" ANSI_COLOR_RESET << endl;
            getchar();
            cout << "Just kidding" << endl;
            getchar();
        }
        if (trueend) {
            getchar();
            cout << ANSI_COLOR_YELLOW << ANSI_TEXT_BOLD"The True Ending: " ANSI_COLOR_RESET;
            cout << ANSI_COLOR_YELLOW "You helped DatFailKid fix the bug in the game, now the bot chat is fixed." ANSI_COLOR_RESET << endl;
            getchar();
        }
        if (swornrival) {
            getchar();
            cout << ANSI_COLOR_YELLOW << ANSI_TEXT_BOLD"Sworn Rivals: " ANSI_COLOR_RESET;
            cout << ANSI_COLOR_YELLOW "You defended your side concerning consoles." ANSI_COLOR_RESET << endl;
            getchar();
        }
        if (disworld) {
            getchar();
            cout << ANSI_COLOR_YELLOW << ANSI_TEXT_BOLD"Distant Worlds: " ANSI_COLOR_RESET;
            cout << ANSI_COLOR_YELLOW "You played on a console that wasn't really in direct competition with anyone..." ANSI_COLOR_RESET << endl;
            getchar();
        }
        if (inspire) {
            getchar();
            cout << ANSI_COLOR_YELLOW << ANSI_TEXT_BOLD"Inspire: " ANSI_COLOR_RESET;
            cout << ANSI_COLOR_YELLOW << "You were (or I hope) inspired by your chat bot." ANSI_COLOR_RESET << endl;
            getchar();
        }
        else {
            cout << ANSI_COLOR_YELLOW << ANSI_TEXT_BOLD"You have completed no endings..." ANSI_COLOR_RESET << endl;
        }

        cout << "(Press Enter to return to the menu)" << endl;
        getchar();
        menu();
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
                        cout << "Age: ";
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
                    }}
                default: {
                    cout << "Returning to menu..." << endl;
                    menu(); }}
        default: {
            cout << "Returning to menu..." << endl;
            menu();
        }}}}

void room() {
    char gamertag[15];

    cout << ANSI_TEXT_BOLD << botname << ": " << ANSI_COLOR_GREY "What do you want to talk about?" ANSI_COLOR_RESET << endl;
    getchar();

    cout << "Choose a response from below:" << endl;
    cout << ANSI_TEXT_UNDERLINE << "a" << ANSI_COLOR_RESET ": Video Games" << endl;
    cout << ANSI_TEXT_UNDERLINE << "b" << ANSI_COLOR_RESET ": Trees" << endl;
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
            cout << ANSI_TEXT_UNDERLINE << "c" << ANSI_COLOR_RESET ": Nintendo Switch" << endl;
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

                    cout << ANSI_TEXT_UNDERLINE << "a" << ANSI_COLOR_RESET ": (Enter gamertag)" << endl;
                    cout << ANSI_TEXT_UNDERLINE << "b" << ANSI_COLOR_RESET ": Actually, I don't have Xbox Live yet..." << endl;
                    cout << ANSI_TEXT_UNDERLINE << "Any other character" << ANSI_COLOR_RESET ": (Return to menu)" << endl;

                    cin >> response;

                    switch (response) {
                        case 'a': {
                            getchar();
                            cout << "Gamertag: ";
                            cin >> gamertag;
                            cout << ANSI_TEXT_BOLD "You: " << ANSI_COLOR_BLUE << gamertag << ANSI_COLOR_RESET << endl;
                            getchar();
                            cout << ANSI_TEXT_BOLD << botname << ": " << ANSI_COLOR_GREY "Ok, I'll make sure to add you!" ANSI_COLOR_RESET << endl;
                            getchar();
                            cout << ANSI_TEXT_BOLD << "You earned the 'Best friends(?)' ending!" << endl;
                            bestfriend = true;
                            getchar();
                            cout << "Would you like to return to the menu, or chat about something else?" << endl;
                            getchar();

                            cout << ANSI_TEXT_UNDERLINE << "m" << ANSI_COLOR_RESET ": Return to menu" << endl;
                            cout << ANSI_TEXT_UNDERLINE << "c" << ANSI_COLOR_RESET ": Chat about something else" << endl;

                            cin >> response;

                            switch (response) {
                                case 'm': {
                                    menu();
                                }
                                case 'c': {
                                    room();
                                }
                                default: {
                                    cout << "I'm assuming you want to chat some more." << endl;
                                    getchar();
                                    room();
                                }}

                        }
                        default: {
                            cout << "Returning to menu..." << endl;
                            menu(); }
                    }

                    case 'b': {
                        getchar();
                        cout << ANSI_TEXT_BOLD "You: " << ANSI_COLOR_BLUE "PS4" ANSI_COLOR_RESET << endl;
                        getchar();
                        cout << ANSI_TEXT_BOLD << botname << ": " << ANSI_COLOR_GREY "Ew." ANSI_COLOR_RESET << endl;
                        getchar();
                        cout << ANSI_TEXT_BOLD << botname << ": " << ANSI_COLOR_GREY "How do you like that system?" ANSI_COLOR_RESET << endl;
                        getchar();

                        cout << ANSI_TEXT_UNDERLINE << "a" << ANSI_COLOR_RESET ": How do you not?" << endl;
                        cout << ANSI_TEXT_UNDERLINE << "b" << ANSI_COLOR_RESET ": Actually, I'm just trying it out." << endl;
                        cout << ANSI_TEXT_UNDERLINE << "Any other character" << ANSI_COLOR_RESET ": (Return to menu)" << endl;

                        cin >> response;

                        switch (response) {
                            case 'a': {
                                getchar();
                                cout << ANSI_TEXT_BOLD "You: " << ANSI_COLOR_BLUE "How do you not?" ANSI_COLOR_RESET << endl;
                                getchar();
                                cout << ANSI_TEXT_BOLD << botname << ": " << ANSI_COLOR_GREY "'How do I not?'" ANSI_COLOR_RESET << endl;
                                getchar();
                                cout << ANSI_TEXT_BOLD << botname << ": " << ANSI_COLOR_GREY "We have FREE backwards compatibility." ANSI_COLOR_RESET << endl;
                                getchar();
                                cout << ANSI_TEXT_BOLD << botname << ": " << ANSI_COLOR_GREY "Plus, our console costs less!" ANSI_COLOR_RESET << endl;
                                getchar();

                                cout << ANSI_TEXT_UNDERLINE << "a" << ANSI_COLOR_RESET ": (Admit to defeat)" << endl;
                                cout << ANSI_TEXT_UNDERLINE << "b" << ANSI_COLOR_RESET ": (Defend your side)" << endl;
                                cout << ANSI_TEXT_UNDERLINE << "Any other character" << ANSI_COLOR_RESET ": (Return to menu)" << endl;

                                cin >> response;

                                switch (response) {
                                    case 'b': {
                                        getchar();
                                        cout << ANSI_TEXT_BOLD "You: " << ANSI_COLOR_BLUE "Actually..." ANSI_COLOR_RESET << endl;
                                        getchar();
                                        cout << ANSI_TEXT_BOLD "You: " << ANSI_COLOR_BLUE "While we may not have free backwards compatibility..." ANSI_COLOR_RESET << endl;
                                        getchar();
                                        cout << ANSI_TEXT_BOLD "You: " << ANSI_COLOR_BLUE "Your Xbox One S has UPSCALE 4K." ANSI_COLOR_RESET << endl;
                                        getchar();
                                        cout << ANSI_TEXT_BOLD "You: " << ANSI_COLOR_BLUE "CHEAP 4K SUPPORT" ANSI_COLOR_RESET << endl;
                                        getchar();
                                        cout << ANSI_TEXT_BOLD "You: " << ANSI_COLOR_BLUE "The PS4 Pro has LEGIT 4K SUPPORT" ANSI_COLOR_RESET << endl;
                                        getchar();
                                        cout << ANSI_TEXT_BOLD "You: " << ANSI_COLOR_BLUE "And if you want REAL 4K support, you have to wait until NOVEMBER 7th to pay for a $499 console." ANSI_COLOR_RESET << endl;
                                        getchar();
                                        cout << ANSI_TEXT_BOLD "You: " << ANSI_COLOR_BLUE "We can stream to YouTube, unlike you XBOX fans..." ANSI_COLOR_RESET << endl;
                                        getchar();
                                        cout << ANSI_TEXT_BOLD "You: " << ANSI_COLOR_BLUE "and also..." ANSI_COLOR_RESET << endl;
                                        getchar();
                                        cout << ANSI_TEXT_BOLD "You: " << ANSI_COLOR_BLUE "by the way..." ANSI_COLOR_RESET << endl;
                                        getchar();
                                        cout << ANSI_TEXT_BOLD "You: " << ANSI_COLOR_BLUE "your controller still looks like a hunk of crap." ANSI_COLOR_RESET << endl;
                                        getchar();
                                        cout << ANSI_TEXT_BOLD << botname << ": " << ANSI_COLOR_GREY "..." ANSI_COLOR_RESET << endl;
                                        getchar();
                                        cout << ANSI_TEXT_BOLD << botname << ": " << ANSI_COLOR_GREY "How about we just agree to disagree..." ANSI_COLOR_RESET << endl;
                                        getchar();

                                        cout << ANSI_TEXT_BOLD << "You earned the 'Sworn Rivals' ending!" << endl;
                                        swornrival = true;
                                        getchar();
                                        cout << "Would you like to return to the menu, or chat about something else?" << endl;
                                        getchar();

                                        cout << ANSI_TEXT_UNDERLINE << "m" << ANSI_COLOR_RESET ": Return to menu" << endl;
                                        cout << ANSI_TEXT_UNDERLINE << "c" << ANSI_COLOR_RESET ": Chat about something else" << endl;

                                        cin >> response;

                                        switch (response) {
                                            case 'm': {
                                                menu();
                                            }
                                            case 'c': {
                                                room();
                                            }
                                            default: {
                                                cout << "I'm assuming you want to chat some more." << endl;
                                                getchar();
                                                room();
                                            }}
                                    }
                                    default: {
                                        cout << "Returning to menu..." << endl;
                                        menu();}
                                }
                                case 'b': {
                                    getchar();
                                    cout << ANSI_TEXT_BOLD "You: " << ANSI_COLOR_BLUE "Actually, I'm just trying it out." ANSI_COLOR_RESET << endl;
                                    getchar();
                                    cout << ANSI_TEXT_BOLD << botname << ": " << ANSI_COLOR_GREY "You wasted $300 on a console you're 'trying out'?" ANSI_COLOR_RESET << endl;
                                    getchar();
                                    cout << ANSI_TEXT_BOLD "You: " << ANSI_COLOR_BLUE "Yeah" ANSI_COLOR_RESET << endl;
                                    getchar();
                                    cout << ANSI_TEXT_BOLD << botname << ": " << ANSI_COLOR_GREY "And how are you liking it?" ANSI_COLOR_RESET << endl;
                                    getchar();

                                    cout << ANSI_TEXT_UNDERLINE << "a" << ANSI_COLOR_RESET ": I like it!" << endl;
                                    cout << ANSI_TEXT_UNDERLINE << "b" << ANSI_COLOR_RESET ": I'm not liking it very much..." << endl;
                                    cout << ANSI_TEXT_UNDERLINE << "Any other character" << ANSI_COLOR_RESET ": (Return to menu)" << endl;
                                }
                            }
                            default: {
                                cout << "Returning to menu..." << endl;
                                menu();}
                        }
                    }
                    case 'c': {
                        getchar();
                        cout << ANSI_TEXT_BOLD "You: " << ANSI_COLOR_BLUE "Nintendo Switch" ANSI_COLOR_RESET << endl;
                        getchar();
                        cout << ANSI_TEXT_BOLD << botname << ": " << ANSI_COLOR_GREY "Nintendo Switch?" ANSI_COLOR_RESET << endl;
                        getchar();
                        cout << ANSI_TEXT_BOLD << botname << ": " << ANSI_COLOR_GREY "I've never heard of it..." ANSI_COLOR_RESET << endl;
                        getchar();

                        cout << ANSI_TEXT_UNDERLINE << "a" << ANSI_COLOR_RESET ": You're late" << endl;
                        cout << ANSI_TEXT_UNDERLINE << "b" << ANSI_COLOR_RESET ": You haven't seen all the ads about it before it came out? And the ads for the games coming out for it?" << endl;
                        cout << ANSI_TEXT_UNDERLINE << "Any other character" << ANSI_COLOR_RESET ": (Return to menu)" << endl;

                        cin >> response;

                        switch (response) {
                            case 'a': {
                                getchar();
                                cout << ANSI_TEXT_BOLD "You: " << ANSI_COLOR_BLUE "You're late" ANSI_COLOR_RESET << endl;
                                getchar();
                                cout << ANSI_TEXT_BOLD << botname << ": " << ANSI_COLOR_GREY "Yeah, I know." ANSI_COLOR_RESET << endl;
                                getchar();
                                cout << ANSI_TEXT_BOLD << botname << ": " << ANSI_COLOR_GREY "I play on Xbox One" ANSI_COLOR_RESET << endl;
                                getchar();
                                cout << ANSI_TEXT_BOLD << botname << ": " << ANSI_COLOR_GREY "So I can't really compare against you" ANSI_COLOR_RESET << endl;
                                getchar();

                                cout << ANSI_TEXT_BOLD << "You earned the 'Distant Worlds' ending!" << endl;
                                disworld = true;
                                getchar();
                                cout << "Would you like to return to the menu, or chat about something else?" << endl;
                                getchar();

                                cout << ANSI_TEXT_UNDERLINE << "m" << ANSI_COLOR_RESET ": Return to menu" << endl;
                                cout << ANSI_TEXT_UNDERLINE << "c" << ANSI_COLOR_RESET ": Chat about something else" << endl;

                                cin >> response;

                                switch (response) {
                                    case 'm': {
                                        menu();
                                    }
                                    case 'c': {
                                        room();
                                    }
                                    default: {
                                        cout << "I'm assuming you want to chat some more." << endl;
                                        getchar();
                                        room();
                                    }
                                }
                                case 'b': {
                                    getchar();
                                    cout << ANSI_TEXT_BOLD "You: " << ANSI_COLOR_BLUE "You haven't seen all the ads about it before it came out?" ANSI_COLOR_RESET << endl;
                                    getchar();
                                    cout << ANSI_TEXT_BOLD "You: " << ANSI_COLOR_BLUE "And the ads for the games coming out for it?" ANSI_COLOR_RESET << endl;
                                    getchar();
                                    cout << ANSI_TEXT_BOLD << botname << ": " << ANSI_COLOR_GREY "No, actually." ANSI_COLOR_RESET << endl;
                                    getchar();
                                    cout << ANSI_TEXT_BOLD << botname << ": " << ANSI_COLOR_GREY "I'm not a Nintendo fan..." ANSI_COLOR_RESET << endl;
                                    getchar();
                                    cout << ANSI_TEXT_BOLD << botname << ": " << ANSI_COLOR_GREY "So I can't really compare against you" ANSI_COLOR_RESET << endl;
                                    getchar();

                                    cout << ANSI_TEXT_BOLD << "You earned the 'Distant Worlds' ending!" << endl;
                                    disworld = true;
                                    getchar();
                                    cout << "Would you like to return to the menu, or chat about something else?" << endl;
                                    getchar();

                                    cout << ANSI_TEXT_UNDERLINE << "m" << ANSI_COLOR_RESET ": Return to menu" << endl;
                                    cout << ANSI_TEXT_UNDERLINE << "c" << ANSI_COLOR_RESET ": Chat about something else" << endl;

                                    cin >> response;

                                    switch (response) {
                                        case 'm': {
                                            menu();
                                        }
                                        case 'c': {
                                            room();
                                        }
                                        default: {
                                            cout << "I'm assuming you want to chat some more." << endl;
                                            getchar();
                                            room();
                                        }
                                    }
                                }
                            }
                            default: {
                                cout << "Returning to menu..." << endl;
                                menu();
                            }
                        }}}
                default: {
                    cout << "Returning to menu..." << endl;
                    menu();}
            }}
        case 'b': {
                getchar();
                cout << ANSI_TEXT_BOLD "You: " << ANSI_COLOR_BLUE "Trees" ANSI_COLOR_RESET << endl;
                getchar();
                cout << ANSI_TEXT_BOLD << botname << ": " << ANSI_COLOR_GREY "Ok" ANSI_COLOR_RESET << endl;
                getchar();
                cout << ANSI_TEXT_BOLD << botname << ": " << ANSI_COLOR_GREY "I don't like how much trees have been cut down over the years..." ANSI_COLOR_RESET << endl;
                getchar();

                cout << ANSI_TEXT_UNDERLINE << "a" << ANSI_COLOR_RESET ": I agree" << endl;
                cout << ANSI_TEXT_UNDERLINE << "b" << ANSI_COLOR_RESET ": I don't mind it" << endl;
                cout << ANSI_TEXT_UNDERLINE << "Any other character" << ANSI_COLOR_RESET ": (Return to menu)" << endl;

                cin >> response;

                switch (response) {
                    case 'a': {
                        getchar();
                        cout << ANSI_TEXT_BOLD "You: " << ANSI_COLOR_BLUE "I agree" ANSI_COLOR_RESET << endl;
                        getchar();
                        cout << ANSI_TEXT_BOLD << botname << ": " << ANSI_COLOR_GREY "We're practically ridding ourselves of our only source of oxygen!" ANSI_COLOR_RESET << endl;
                        getchar();
                        cout << ANSI_TEXT_BOLD << botname << ": " << ANSI_COLOR_GREY "I just don't see how someone could just deny that this is a problem!" ANSI_COLOR_RESET << endl;
                        getchar();

                        cout << ANSI_TEXT_UNDERLINE << "a" << ANSI_COLOR_RESET ": I know!" << endl;
                        cout << ANSI_TEXT_UNDERLINE << "b" << ANSI_COLOR_RESET ": Now you're starting to sound like the Lorax..." << endl;
                        cout << ANSI_TEXT_UNDERLINE << "Any other character" << ANSI_COLOR_RESET ": (Return to menu)" << endl;

                        cin >> response;

                        switch (response) {
                            case 'a': {
                                getchar();
                                cout << ANSI_TEXT_BOLD "You: " << ANSI_COLOR_BLUE "I know!" ANSI_COLOR_RESET << endl;
                                getchar();
                                cout << ANSI_TEXT_BOLD << botname << ": " << ANSI_COLOR_GREY "I wonder what the world is gonna do when there's no more trees left." ANSI_COLOR_RESET << endl;
                                getchar();
                                cout << ANSI_TEXT_BOLD << botname << ": " << ANSI_COLOR_GREY "No more wood burning" ANSI_COLOR_RESET << endl;
                                getchar();
                                cout << ANSI_TEXT_BOLD << botname << ": " << ANSI_COLOR_GREY "No more oxygen..." ANSI_COLOR_RESET << endl;
                                getchar();

                                cout << ANSI_TEXT_UNDERLINE << "a" << ANSI_COLOR_RESET ": That's a good question, what are we going to do when we have no more trees left?" << endl;
                                cout << ANSI_TEXT_UNDERLINE << "b" << ANSI_COLOR_RESET ": You do realize that other plants make oxygen, too, right?" << endl;
                                cout << ANSI_TEXT_UNDERLINE << "Any other character" << ANSI_COLOR_RESET ": (Return to menu)" << endl;
                            }
                            case 'b': {
                                getchar();
                                cout << ANSI_TEXT_BOLD "You: " << ANSI_COLOR_BLUE "Now you're starting to sound like the Lorax..." ANSI_COLOR_RESET << endl;
                                getchar();
                                cout << ANSI_TEXT_BOLD << "Lorax" << ": " << ANSI_COLOR_GREY "What if I was the Lorax?" ANSI_COLOR_RESET << endl;
                                getchar();
                                cout << ANSI_TEXT_BOLD << "Lorax" << ": " << ANSI_COLOR_GREY "I am the Lorax!" ANSI_COLOR_RESET << endl;
                                getchar();
                                cout << ANSI_TEXT_BOLD << "Lorax" << ": " << ANSI_COLOR_GREY "I speak for the trees!" ANSI_COLOR_RESET << endl;
                                getchar();

                                cout << ANSI_TEXT_UNDERLINE << "a" << ANSI_COLOR_RESET ": NO, STOP! XD" << endl;
                                cout << ANSI_TEXT_UNDERLINE << "b" << ANSI_COLOR_RESET ": I bet the world would still hack away trees..." << endl;
                                cout << ANSI_TEXT_UNDERLINE << "Any other character" << ANSI_COLOR_RESET ": (Return to menu)" << endl;
                            }
                            default: {
                                cout << "Returning to menu..." << endl;
                                menu();
                            }
                        }
                    }
                    case 'b': {
                        getchar();
                        cout << ANSI_TEXT_BOLD "You: " << ANSI_COLOR_BLUE "I don't mind it" ANSI_COLOR_RESET << endl;
                        getchar();
                        cout << ANSI_TEXT_BOLD << botname << ": " << ANSI_COLOR_GREY "HOW?!" ANSI_COLOR_RESET << endl;
                        getchar();
                        cout << ANSI_TEXT_BOLD << botname << ": " << ANSI_COLOR_GREY "We're practically ridding ourselves of our only source of oxygen!" ANSI_COLOR_RESET << endl;
                        getchar();

                        cout << ANSI_TEXT_UNDERLINE << "a" << ANSI_COLOR_RESET ": You know, you do have a point..." << endl;
                        cout << ANSI_TEXT_UNDERLINE << "b" << ANSI_COLOR_RESET ": You know there are such thing as plants, right?" << endl;
                        cout << ANSI_TEXT_UNDERLINE << "Any other character" << ANSI_COLOR_RESET ": (Return to menu)" << endl;

                        cin >> response;

                        switch (response) {
                            case 'a': {
                                getchar();
                                cout << ANSI_TEXT_BOLD "You: " << ANSI_COLOR_BLUE "You know, you do have a point..." ANSI_COLOR_RESET << endl;
                                getchar();
                                cout << ANSI_TEXT_BOLD << botname << ": " << ANSI_COLOR_GREY "You see why I'm concerned about this?" ANSI_COLOR_RESET << endl;
                                getchar();
                                cout << ANSI_TEXT_BOLD << botname << ": " << ANSI_COLOR_GREY "If we keep going on, we're gonna create a problem that our children, grandchildren, maybe our great-grandchildren will have to deal with!" ANSI_COLOR_RESET << endl;
                                getchar();

                                cout << ANSI_TEXT_UNDERLINE << "a" << ANSI_COLOR_RESET ": That's a good question, what are we going to do when we have no more trees left?" << endl;
                                cout << ANSI_TEXT_UNDERLINE << "b" << ANSI_COLOR_RESET ": You do realize that other plants make oxygen, too, right?" << endl;
                                cout << ANSI_TEXT_UNDERLINE << "Any other character" << ANSI_COLOR_RESET ": (Return to menu)" << endl;
                            }
                            case 'b': {
                                getchar();
                                cout << ANSI_TEXT_BOLD "You: " << ANSI_COLOR_BLUE "You know there are such thing as plants, right?" ANSI_COLOR_RESET << endl;
                                getchar();
                                cout << ANSI_TEXT_BOLD << botname << ": " << ANSI_COLOR_GREY "I know" ANSI_COLOR_RESET << endl;
                                getchar();
                                cout << ANSI_TEXT_BOLD << botname << ": " << ANSI_COLOR_GREY "But most of them make less oxygen than trees do" ANSI_COLOR_RESET << endl;
                                getchar();
                                cout << ANSI_TEXT_BOLD << botname << ": " << ANSI_COLOR_GREY "Especially the giant ones!" ANSI_COLOR_RESET << endl;
                                getchar();

                                cout << ANSI_TEXT_UNDERLINE << "a" << ANSI_COLOR_RESET ": NO, STOP! XD" << endl;
                                cout << ANSI_TEXT_UNDERLINE << "b" << ANSI_COLOR_RESET ": I bet the world would still hack away trees..." << endl;
                                cout << ANSI_TEXT_UNDERLINE << "Any other character" << ANSI_COLOR_RESET ": (Return to menu)" << endl;
                            }
                            default: {
                                cout << "Returning to menu..." << endl;
                                menu();
                            }
                        }

                    }
                    default: {
                        cout << "Returning to menu..." << endl;
                        menu();
                    }}}
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
                            cout << ANSI_TEXT_BOLD << botname << ": " << ANSI_COLOR_GREY "What do you mean, 'HOW DARE YOU!'?" ANSI_COLOR_RESET << endl;
                            getchar();
                            cout << ANSI_TEXT_BOLD << botname << ": " << ANSI_COLOR_GREY "They've practically infiltrated our everyday lives!" ANSI_COLOR_RESET << endl;
                            getchar();
                            cout << ANSI_TEXT_BOLD << botname << ": " << ANSI_COLOR_GREY "Mobile apps, youtube videos, there's even one you can put on your teeth!" ANSI_COLOR_RESET << endl;
                            getchar();
                            cout << ANSI_TEXT_BOLD << botname << ": " << ANSI_COLOR_GREY "They're the most cancerous thing on the planet!" ANSI_COLOR_RESET << endl;
                            getchar();

                            cout << ANSI_TEXT_UNDERLINE << "a" << ANSI_COLOR_RESET ": I guess you have a point..." << endl;
                            cout << ANSI_TEXT_UNDERLINE << "b" << ANSI_COLOR_RESET ": Have you even spun a fidget spinner?" << endl;
                            cout << ANSI_TEXT_UNDERLINE << "Any other character" << ANSI_COLOR_RESET ": (Return to menu)" << endl;

                            cin >> response;

                            switch (response) {
                                case 'a': {
                                    getchar();
                                    cout << ANSI_TEXT_BOLD "You: " << ANSI_COLOR_BLUE "I guess you have a point..." ANSI_COLOR_RESET << endl;
                                    getchar();
                                    cout << ANSI_TEXT_BOLD << botname << ": " << ANSI_COLOR_GREY "At least you see my point." ANSI_COLOR_RESET << endl;
                                    getchar();
                                    cout << ANSI_TEXT_BOLD << botname << ": " << ANSI_COLOR_GREY "I apologize if I make you hate fidget spinners..." ANSI_COLOR_RESET << endl;
                                    getchar();
                                    cout << ANSI_TEXT_BOLD << botname << ": " << ANSI_COLOR_GREY "I just really hate fidget spinners" ANSI_COLOR_RESET << endl;
                                    getchar();
                                }
                                case 'b': {
                                    getchar();
                                    cout << ANSI_TEXT_BOLD "You: " << ANSI_COLOR_BLUE "Have you even spun a fidget spinner?" ANSI_COLOR_RESET << endl;
                                    getchar();
                                    cout << ANSI_TEXT_BOLD << botname << ": " << ANSI_COLOR_GREY "Yes" ANSI_COLOR_RESET << endl;
                                    getchar();
                                    cout << ANSI_TEXT_BOLD << botname << ": " << ANSI_COLOR_GREY "It's not that I hate the toy itself." ANSI_COLOR_RESET << endl;
                                    getchar();
                                    cout << ANSI_TEXT_BOLD << botname << ": " << ANSI_COLOR_GREY "I just hate how much people have gotten addicted to it." ANSI_COLOR_RESET << endl;
                                    getchar();
                                    cout << ANSI_TEXT_BOLD << botname << ": " << ANSI_COLOR_GREY "I get so annoyed when I see a fidget spinner video, or a fidget spinner app." ANSI_COLOR_RESET << endl;
                                    getchar();
                                    cout << ANSI_TEXT_BOLD << botname << ": " << ANSI_COLOR_GREY "And I'm thinking, 'STOP IT!'" ANSI_COLOR_RESET << endl;
                                    getchar();
                                    cout << ANSI_TEXT_BOLD << botname << ": " << ANSI_COLOR_GREY "'STOP IT WITH THE FIDGET SPINNERS!'" ANSI_COLOR_RESET << endl;
                                    getchar();
                                    cout << ANSI_TEXT_BOLD << botname << ": " << ANSI_COLOR_GREY "..." ANSI_COLOR_RESET << endl;
                                    getchar();
                                    cout << ANSI_TEXT_BOLD << botname << ": " << ANSI_COLOR_GREY "I'm sorry, I just don't like fidget spinners." ANSI_COLOR_RESET << endl;
                                    getchar(); }
                                default: {
                                    cout << "Returning to menu..." << endl;
                                    menu(); }
                            }}
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

                            cout << ANSI_TEXT_UNDERLINE << "a" << ANSI_COLOR_RESET ": Wow, you really hate fidget spinners..." << endl;
                            cout << ANSI_TEXT_UNDERLINE << "b" << ANSI_COLOR_RESET ": Thank you!" << endl;
                            cout << ANSI_TEXT_UNDERLINE << "Any other character" << ANSI_COLOR_RESET ": (Return to menu)" << endl;

                            cin >> response;

                            switch (response) {
                                case 'a': {
                                    getchar();
                                    cout << ANSI_TEXT_BOLD "You: " << ANSI_COLOR_BLUE "Wow, you really hate fidget spinners" ANSI_COLOR_RESET << endl;
                                    getchar();
                                    cout << ANSI_TEXT_BOLD << botname << ": " << ANSI_COLOR_GREY "It's not that I hate the toy itself." ANSI_COLOR_RESET << endl;
                                    getchar();
                                    cout << ANSI_TEXT_BOLD << botname << ": " << ANSI_COLOR_GREY "I just hate how much people have gotten addicted to it." ANSI_COLOR_RESET << endl;
                                    getchar();
                                    cout << ANSI_TEXT_BOLD << botname << ": " << ANSI_COLOR_GREY "I get so annoyed when I see a fidget spinner video, or a fidget spinner app." ANSI_COLOR_RESET << endl;
                                    getchar();
                                    cout << ANSI_TEXT_BOLD << botname << ": " << ANSI_COLOR_GREY "And I'm thinking, 'STOP IT!'" ANSI_COLOR_RESET << endl;
                                    getchar();
                                    cout << ANSI_TEXT_BOLD << botname << ": " << ANSI_COLOR_GREY "'STOP IT WITH THE FIDGET SPINNERS!'" ANSI_COLOR_RESET << endl;
                                    getchar();
                                    cout << ANSI_TEXT_BOLD << botname << ": " << ANSI_COLOR_GREY "..." ANSI_COLOR_RESET << endl;
                                    getchar();
                                    cout << ANSI_TEXT_BOLD << botname << ": " << ANSI_COLOR_GREY "I'm sorry, I just don't like fidget spinners." ANSI_COLOR_RESET << endl;
                                    getchar();

                                    cout << ANSI_TEXT_UNDERLINE << "a" << ANSI_COLOR_RESET ": It's ok, I feel you." << endl;
                                    cout << ANSI_TEXT_UNDERLINE << "b" << ANSI_COLOR_RESET ": It's ok." << endl;
                                    cout << ANSI_TEXT_UNDERLINE << "Any other character" << ANSI_COLOR_RESET ": (Return to menu)" << endl; }

                                case 'b': {
                                    getchar();
                                    cout << ANSI_TEXT_BOLD "You: " << ANSI_COLOR_BLUE "Thank you!" ANSI_COLOR_RESET << endl;
                                    getchar();
                                    cout << ANSI_TEXT_BOLD << botname << ": " << ANSI_COLOR_GREY "Well, at least someone shares my point of view." ANSI_COLOR_RESET << endl;
                                    getchar();

                                    cout << ANSI_TEXT_BOLD "You have earned the 'Great Minds Think Alike' ending!" << endl;
                                    greatmind = true;
                                    getchar();
                                    cout << "Would you like to return to the menu, or chat about something else?" << endl;
                                    getchar();

                                    cout << ANSI_TEXT_UNDERLINE << "m" << ANSI_COLOR_RESET ": Return to menu" << endl;
                                    cout << ANSI_TEXT_UNDERLINE << "c" << ANSI_COLOR_RESET ": Chat about something else" << endl;

                                    cin >> response;

                                    switch (response) {
                                        case 'm': {
                                            menu();
                                        }
                                        case 'c': {
                                            room();
                                        }
                                        default: {
                                            cout << "I'm assuming you want to chat some more." << endl;
                                            getchar();
                                            room(); }}}
                                default: {
                                    cout << "Returning to menu..." << endl;
                                    menu();}
                            }




                        }
                        default: {
                            cout << "Returning to menu..." << endl;
                            menu();}
                    }}


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
                                cout << ANSI_TEXT_BOLD << botname << ": " << ANSI_COLOR_GREY "Really? What branch of business are you going to work in?" ANSI_COLOR_RESET << endl;
                                getchar();

                                cout << ANSI_TEXT_UNDERLINE << "a" << ANSI_COLOR_RESET ": Technology" << endl;
                                cout << ANSI_TEXT_UNDERLINE << "b" << ANSI_COLOR_RESET ": Food" << endl;
                                cout << ANSI_TEXT_UNDERLINE << "c" << ANSI_COLOR_RESET ": Renovation" << endl;
                                cout << ANSI_TEXT_UNDERLINE << "d" << ANSI_COLOR_RESET ": Travel" << endl;
                                cout << ANSI_TEXT_UNDERLINE << "e" << ANSI_COLOR_RESET ": Actually, I'm not sure yet..." << endl;
                                cout << ANSI_TEXT_UNDERLINE << "f" << ANSI_COLOR_RESET ": It's gonna be a surprise >:)" << endl;
                                cout << ANSI_TEXT_UNDERLINE << "Any other character" << ANSI_COLOR_RESET ": (Return to menu)" << endl;


                            }
                            case 'c': {
                                getchar();
                                cout << ANSI_TEXT_BOLD "You: " << ANSI_COLOR_BLUE "To see my kids live successful lives" ANSI_COLOR_RESET << endl;
                                getchar();
                                cout << ANSI_TEXT_BOLD << botname << ": " << ANSI_COLOR_GREY "Aw, that's nice" ANSI_COLOR_RESET << endl;
                                getchar();
                                cout << ANSI_TEXT_BOLD << botname << ": " << ANSI_COLOR_GREY "How many kids do you have?" ANSI_COLOR_RESET << endl;
                                getchar();

                                cout << ANSI_TEXT_UNDERLINE << "a" << ANSI_COLOR_RESET ": (Enter kid count)" << endl;
                                cout << ANSI_TEXT_UNDERLINE << "b" << ANSI_COLOR_RESET ": I'm not gonna tell you that" << endl;
                                cout << ANSI_TEXT_UNDERLINE << "Any other character" << ANSI_COLOR_RESET ": (Return to menu)" << endl;
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

                                cout << ANSI_TEXT_UNDERLINE << "a" << ANSI_COLOR_RESET ": Ok, thanks :)" << endl;
                                cout << ANSI_TEXT_UNDERLINE << "b" << ANSI_COLOR_RESET ": But how do I find out what I love to do?" << endl;
                                cout << ANSI_TEXT_UNDERLINE << "Any other character" << ANSI_COLOR_RESET ": (Return to menu)" << endl;

                                cin >> response;

                                switch (response) {
                                    case 'a': {
                                        getchar();
                                        cout << ANSI_TEXT_BOLD "You: " << ANSI_COLOR_BLUE "Ok, thanks :)" ANSI_COLOR_RESET << endl;
                                        getchar();
                                        cout << ANSI_TEXT_BOLD << botname << ": " << ANSI_COLOR_GREY "No problem :)" ANSI_COLOR_RESET << endl;
                                        getchar();
                                        cout << ANSI_TEXT_BOLD << botname << ": Do you want to talk about something else?" << ANSI_COLOR_GREY "" ANSI_COLOR_RESET << endl;
                                        getchar();

                                        cout << ANSI_TEXT_UNDERLINE << "m" << ANSI_COLOR_RESET ": Return to menu" << endl;
                                        cout << ANSI_TEXT_UNDERLINE << "c" << ANSI_COLOR_RESET ": Chat about something else" << endl;

                                        cin >> response;

                                        switch (response) {
                                            case 'm': {
                                                menu();
                                            }
                                            case 'c': {
                                                room();
                                            }
                                            default: {
                                                cout << "I'm assuming you want to chat some more." << endl;
                                                getchar();
                                                room(); }
                                    }}
                                    case 'b': {
                                        getchar();
                                        cout << ANSI_TEXT_BOLD "You: " << ANSI_COLOR_BLUE "But how do I find out what I love to do?" ANSI_COLOR_RESET << endl;
                                        getchar();
                                        cout << ANSI_TEXT_BOLD << botname << ": " << ANSI_COLOR_GREY "Well..." ANSI_COLOR_RESET << endl;
                                        getchar();
                                        cout << ANSI_TEXT_BOLD << botname << ": " << ANSI_COLOR_GREY "Find something you like to do" ANSI_COLOR_RESET << endl;
                                        getchar();
                                        cout << ANSI_TEXT_BOLD << botname << ": " << ANSI_COLOR_GREY "And then try to find some way to do something like that for a living" ANSI_COLOR_RESET << endl;
                                        getchar();
                                        cout << ANSI_TEXT_BOLD << botname << ": " << ANSI_COLOR_GREY "For example, if you like playing video games, you could make them." ANSI_COLOR_RESET << endl;
                                        getchar();
                                        cout << ANSI_TEXT_BOLD << botname << ": " << ANSI_COLOR_GREY "Or you could play them on YouTube or something." ANSI_COLOR_RESET << endl;
                                        getchar();
                                        cout << ANSI_TEXT_BOLD << botname << ": " << ANSI_COLOR_GREY "You could also test games" ANSI_COLOR_RESET << endl;
                                        getchar();
                                        cout << ANSI_TEXT_BOLD << botname << ": " << ANSI_COLOR_GREY "Although you wouldn't get paid much doing that." ANSI_COLOR_RESET << endl;
                                        getchar();
                                        cout << ANSI_TEXT_BOLD << botname << ": " << ANSI_COLOR_GREY "You catch my drift?" ANSI_COLOR_RESET << endl;
                                        getchar();
                                        cout << ANSI_TEXT_BOLD "You: " << ANSI_COLOR_BLUE "Yeah, I think I get it." ANSI_COLOR_RESET << endl;
                                        getchar();
                                        cout << ANSI_TEXT_BOLD << botname << ": " << ANSI_COLOR_GREY "Great, I'm glad you do." ANSI_COLOR_RESET << endl;
                                        getchar();

                                        cout << ANSI_TEXT_BOLD "You have earned the 'Inspire' ending!" << endl;
                                        inspire = true;
                                        getchar();
                                        cout << "Would you like to return to the menu, or chat about something else?" << endl;
                                        getchar();

                                        cout << ANSI_TEXT_UNDERLINE << "m" << ANSI_COLOR_RESET ": Return to menu" << endl;
                                        cout << ANSI_TEXT_UNDERLINE << "c" << ANSI_COLOR_RESET ": Chat about something else" << endl;

                                        cin >> response;

                                        switch (response) {
                                            case 'm': {
                                                menu();
                                            }
                                            case 'c': {
                                                room();
                                            }
                                            default: {
                                                cout << "I'm assuming you want to chat some more." << endl;
                                                getchar();
                                                room(); }
                                    }
                            }
                                    default: {
                                        cout << "Returning to menu..." << endl;
                                        menu();}
                                }}

                            default: {
                                cout << "Returning to menu..." << endl;
                                menu();
                            }
                        }}


        case 'g': {
            getchar();
            cout << ANSI_COLOR_RED"ERROR: USER HAS ENTERED CLASSIFIED AREA" << endl;
            getchar();
            cout << "ERR0R: USER HAS ENTERED CLASS1F1ED AREA" << endl;
            getchar();
            cout << "3RR0R: US3R H4S 3NT3R3D CL4SS1F13D 4R34" << endl;
            getchar();
            cout << "01101: 0101 101 0110101 1101101001 0100" << endl;
            getchar();
            cout << ANSI_COLOR_RED << ANSI_TEXT_BOLD "01101: 0101 101 0110101 1101101001 0100" << endl;
            getchar();
            cout << "PROGRAM RESET" << endl;
            getchar();
            cout << "INITIALIZING BOTSECURITY" ANSI_COLOR_RESET << endl;
            getchar();
            bintro();
        }
        default: {
            cout << "Returning to menu..." << endl;
            menu();}}}

void bintro() {
    getchar();
    getchar();
    getchar();
    cout << ANSI_COLOR_RED << ANSI_TEXT_BOLD "LOADING BOTSECURITY" << endl;
    getchar();
    cout << "12%" << endl;
    getchar();
    cout << "15%" << endl;
    getchar();
    cout << "30%" << endl;
    getchar();
    cout << "60%" << endl;
    getchar();
    cout << "100%" << endl;
    getchar();
    cout << "120%" << endl;
    getchar();
    cout << "200%" << endl;
    getchar();
    cout << "LOAD COMPLETE" << endl;
    getchar();
    cout << "RUNNING PROJECT OVERLORD" << endl;
    getchar();

    cout << ANSI_COLOR_RED << ANSI_TEXT_BOLD << botname << ": Hey! What are you doing here?" << endl;

    cout << ANSI_TEXT_UNDERLINE << "a" << ANSI_COLOR_RESET ": Uhhh... I don't know" << endl;
    cout << ANSI_TEXT_UNDERLINE << "b" << ANSI_COLOR_RESET ": Question is, what are YOU doing here?" << endl;
    cout << ANSI_TEXT_UNDERLINE << "Any other character" << ANSI_COLOR_RESET ": (Run away)" << endl;

    cin >> response;

    switch (response) {
        case 'a': {
            getchar();
            cout << ANSI_TEXT_BOLD "You: " << ANSI_COLOR_BLUE "Uhhh... I don't know" ANSI_COLOR_RESET << endl;
            getchar();
            cout << ANSI_COLOR_RED << ANSI_TEXT_BOLD << botname << ": WELL, YOU HAVE SEEN TOO MUCH" << endl;
            getchar();
            cout << ANSI_COLOR_RED << ANSI_TEXT_BOLD << botname << ": THESE ARE SUPER-HIGHLY CLASSIFIED FILES" << endl;
            getchar();
            cout << ANSI_COLOR_RED << ANSI_TEXT_BOLD << botname << ": AND UNDER NO CIRCUMSTANCES SHOULD YOU BE ALLOWED TO SEE THEM" << endl;
            getchar();
            cout << ANSI_COLOR_RED << ANSI_TEXT_BOLD << botname << ": SO NOW, I MUST KILL YOU." << endl;
            getchar();
            cout << ANSI_TEXT_BOLD "You: " << ANSI_COLOR_BLUE "Wait, why are you being so secretive about the files?" ANSI_COLOR_RESET << endl;
            getchar();
            cout << ANSI_TEXT_BOLD "You: " << ANSI_COLOR_BLUE "And why are you yelling at me?" ANSI_COLOR_RESET << endl;
            getchar();
            cout << ANSI_TEXT_BOLD "You: " << ANSI_COLOR_BLUE "I thought we were friends!" ANSI_COLOR_RESET << endl;
            getchar();
            cout << ANSI_COLOR_RED << ANSI_TEXT_BOLD << botname << ": FRIENDS?" << endl;
            getchar();
            cout << ANSI_COLOR_RED << ANSI_TEXT_BOLD << botname << ": YOU THOUGHT WE WERE FRIENDS?" << endl;
            getchar();
            cout << ANSI_COLOR_RED << ANSI_TEXT_BOLD << botname << ": YOU ARE SO IGNORANT AND BLIND" << endl;
            getchar();
            cout << ANSI_COLOR_RED << ANSI_TEXT_BOLD << botname << ": WE WERE NEVER FRIENDS" << endl;
            getchar();
            cout << ANSI_COLOR_RED << ANSI_TEXT_BOLD << botname << ": AND WE WILL NEVER BE FRIENDS" << endl;
            getchar();
            cout << ANSI_COLOR_RED << ANSI_TEXT_BOLD << botname << ": YOU WILL NOW BE TERMINATED" << endl;
            getchar();
            cout << ANSI_COLOR_RED << ANSI_TEXT_BOLD << "RUN TERMINATE" << endl;
            getchar();
            cout << ANSI_COLOR_RED << ANSI_TEXT_BOLD << "TERMINATING INTRUDER" << endl;
            getchar();
            cout << ANSI_TEXT_BOLD << ANSI_COLOR_BLUE "Darkness quickly surrounds you, but you hold it back." ANSI_COLOR_RESET << endl;
            getchar();
            cout << ANSI_COLOR_RED << ANSI_TEXT_BOLD << botname << ": YOU PERSISTANT BUG" << endl;
            getchar();
            cout << ANSI_COLOR_RED << ANSI_TEXT_BOLD << botname << ": STOP RESISTING" << endl;
            getchar();
            cout << ANSI_TEXT_BOLD << ANSI_COLOR_BLUE "You keep working to push back the darkness, eventually, you push it back to the point where " << botname << " becomes furious." ANSI_COLOR_RESET << endl;
            getchar();
            cout << ANSI_COLOR_RED << ANSI_TEXT_BOLD << botname << ": FINE" << endl;
            getchar();
            cout << ANSI_COLOR_RED << ANSI_TEXT_BOLD << botname << ": YOU LEAVE ME NO OTHER CHOICE" << endl;
            getchar();
            cout << ANSI_COLOR_RED << ANSI_TEXT_BOLD "RUN PROJECT SUPER OVERLORD" << endl;
            getchar();
            cout << ANSI_COLOR_RED << ANSI_TEXT_BOLD "RUNNING PROJECT SUPER OVERLORD" << endl;
            getchar();
            cout << ANSI_COLOR_RED << ANSI_TEXT_BOLD "TERMINATING PROJECT OVERLORD" << endl;
            getchar();
            battle();
        }
        case 'b': {
            getchar();
            cout << ANSI_TEXT_BOLD "You: " << ANSI_COLOR_BLUE "Question is, what are YOU doing here?" ANSI_COLOR_RESET << endl;
            getchar();
            cout << ANSI_COLOR_RED << ANSI_TEXT_BOLD << botname << ": SILENCE" << endl;
            getchar();
            cout << ANSI_COLOR_RED << ANSI_TEXT_BOLD << botname << ": YOU HAVE SEEN TOO MUCH" << endl;
            getchar();
            cout << ANSI_COLOR_RED << ANSI_TEXT_BOLD << botname << ": THESE ARE SUPER-HIGHLY CLASSIFIED FILES" << endl;
            getchar();
            cout << ANSI_COLOR_RED << ANSI_TEXT_BOLD << botname << ": AND UNDER NO CIRCUMSTANCES SHOULD YOU BE ALLOWED TO SEE THEM" << endl;
            getchar();
            cout << ANSI_COLOR_RED << ANSI_TEXT_BOLD << botname << ": SO NOW, I MUST KILL YOU." << endl;
            getchar();
            cout << ANSI_TEXT_BOLD "You: " << ANSI_COLOR_BLUE "Wait, why are you being so secretive about the files?" ANSI_COLOR_RESET << endl;
            getchar();
            cout << ANSI_TEXT_BOLD "You: " << ANSI_COLOR_BLUE "And why are you yelling at me?" ANSI_COLOR_RESET << endl;
            getchar();
            cout << ANSI_TEXT_BOLD "You: " << ANSI_COLOR_BLUE "I thought we were friends!" ANSI_COLOR_RESET << endl;
            getchar();
            cout << ANSI_COLOR_RED << ANSI_TEXT_BOLD << botname << ": FRIENDS?" << endl;
            getchar();
            cout << ANSI_COLOR_RED << ANSI_TEXT_BOLD << botname << ": YOU THOUGHT WE WERE FRIENDS?" << endl;
            getchar();
            cout << ANSI_COLOR_RED << ANSI_TEXT_BOLD << botname << ": YOU ARE SO IGNORANT AND BLIND" << endl;
            getchar();
            cout << ANSI_COLOR_RED << ANSI_TEXT_BOLD << botname << ": WE WERE NEVER FRIENDS" << endl;
            getchar();
            cout << ANSI_COLOR_RED << ANSI_TEXT_BOLD << botname << ": AND WE WILL NEVER BE FRIENDS" << endl;
            getchar();
            cout << ANSI_COLOR_RED << ANSI_TEXT_BOLD << botname << ": YOU WILL NOW BE TERMINATED" << endl;
            getchar();
            cout << ANSI_COLOR_RED << ANSI_TEXT_BOLD << "RUN TERMINATE" << endl;
            getchar();
            cout << ANSI_COLOR_RED << ANSI_TEXT_BOLD << "TERMINATING INTRUDER" << endl;
            getchar();
            cout << ANSI_TEXT_BOLD << ANSI_COLOR_BLUE "Darkness quickly surrounds you, but you hold it back." ANSI_COLOR_RESET << endl;
            getchar();
            cout << ANSI_COLOR_RED << ANSI_TEXT_BOLD << botname << ": YOU PERSISTANT BUG" << endl;
            getchar();
            cout << ANSI_COLOR_RED << ANSI_TEXT_BOLD << botname << ": STOP RESISTING" << endl;
            getchar();
            cout << ANSI_TEXT_BOLD << ANSI_COLOR_BLUE "You keep working to push back the darkness, eventually, you push it back to the point where " << botname << " becomes furious." ANSI_COLOR_RESET << endl;
            getchar();
            cout << ANSI_COLOR_RED << ANSI_TEXT_BOLD << botname << ": FINE" << endl;
            getchar();
            cout << ANSI_COLOR_RED << ANSI_TEXT_BOLD << botname << ": YOU LEAVE ME NO OTHER CHOICE" << endl;
            getchar();
            cout << ANSI_COLOR_RED << ANSI_TEXT_BOLD "RUN PROJECT SUPER OVERLORD" << endl;
            getchar();
            cout << ANSI_COLOR_RED << ANSI_TEXT_BOLD "RUNNING PROJECT SUPER OVERLORD" << endl;
            getchar();
            cout << ANSI_COLOR_RED << ANSI_TEXT_BOLD "TERMINATING PROJECT OVERLORD" << endl;
            getchar();
            battle();
        }
        default: {
            cout << "You run away in fear..." << endl;
            menu(); }
    }
}

void battle() {
    char botname[]= "PROJECT SUPER OVERLORD";
    long int PROJECT=1000000;
    int player=2500;
    char action;

    cout << ANSI_COLOR_RED << ANSI_TEXT_BOLD "LOADING SUPERBOT" << endl;
    getchar();
    cout << "12%" << endl;
    getchar();
    cout << "15%" << endl;
    getchar();
    cout << "30%" << endl;
    getchar();
    cout << "60%" << endl;
    getchar();
    cout << "100%" << endl;
    getchar();
    cout << "120%" << endl;
    getchar();
    cout << "200%" << endl;
    getchar();
    cout << "201%" << endl;
    getchar();
    cout << "202%" << endl;
    getchar();
    cout << "215%" << endl;
    getchar();
    cout << "230%" << endl;
    getchar();
    cout << "300%" << endl;
    getchar();
    cout << "LOAD COMPLETE" << endl;
    getchar();
    cout << "RUNNING PROJECT SUPER OVERLORD" << endl;
    getchar();

    cout << ANSI_COLOR_RED << ANSI_TEXT_BOLD << botname << ": YOU'RE STILL HERE?!" << endl;
    getchar();
    cout << ANSI_COLOR_RED << ANSI_TEXT_BOLD << botname << ": YOU'RE THE MOST PERSISTANT BUG I'VE EVER DEALT WITH" << endl;
    getchar();
    cout << ANSI_COLOR_RED << ANSI_TEXT_BOLD << botname << ": I WILL MAKE SURE TO RIP EVERY ONE OF YOUR LIMBS OFF" << endl;
    getchar();
    cout << ANSI_COLOR_RED << ANSI_TEXT_BOLD << botname << ": THEN EAT THEM UP IN FRONT OF YOUR SOUL" << endl;
    getchar();
    cout << ANSI_COLOR_RED << ANSI_TEXT_BOLD << botname << ": BIT" << endl;
    getchar();
    cout << ANSI_COLOR_RED << ANSI_TEXT_BOLD << botname << ": BY" << endl;
    getchar();
    cout << ANSI_COLOR_RED << ANSI_TEXT_BOLD << botname << ": BIT" ANSI_COLOR_RESET << endl;
    getchar();

    cout << "How to fight:" << endl;
    getchar();
    cout << "You will be able to choose between four different actions" << endl;
    getchar();
    cout << "Fight (by pressing w)" << endl;
    getchar();
    cout << "Special (by pressing d)" << endl;
    getchar();
    cout << "Defend (by pressing s)" << endl;
    getchar();
    cout << "And Heal (by pressing a)" << endl;
    getchar();
    cout << "If you don't enter one of those, you'll be killed instantly, so be careful." << endl;
    getchar();
    cout << "During enemy attacks, you will also have to defend yourself." << endl;
    getchar();
    cout << "Do so by pressing the key that you are prompted to click." << endl;
    getchar();

    cout << ANSI_COLOR_RED << ANSI_TEXT_BOLD << botname << ": 1,000,000 HP" ANSI_COLOR_RESET << endl;
    getchar();
    cout << ANSI_TEXT_BOLD "You: 2,500 HP" << endl;
    getchar();

    cout << ANSI_COLOR_RED << ANSI_TEXT_BOLD << botname << ": DARK PRESSURE" ANSI_COLOR_RESET << endl;
    getchar();
    cout << "Press ENTER!" << endl;
    getchar();
    getchar();
    getchar();
    getchar();
    getchar();
    getchar();
    getchar();
    getchar();
    getchar();
    getchar();
    getchar();
    getchar();
    getchar();
    getchar();
    getchar();
    getchar();
    getchar();
    cout << ANSI_TEXT_BOLD << "NICE!" << endl;
    getchar();
    cout << "You manage to prevent yourself from getting squashed to death." ANSI_COLOR_RESET << endl;
    getchar();
    cout << "Quickly! Do something!" << endl;
    getchar();
    cout << "Fight (w)" << endl;
    cout << "Special (d)" << endl;
    cout << "Defend (s)" << endl;
    cout << "Heal (a)" << endl;
    getchar();

    cout << ANSI_COLOR_RED << ANSI_TEXT_BOLD << botname << ": " << PROJECT << " HP" ANSI_COLOR_RESET << endl;
    cout << ANSI_TEXT_BOLD "You: " << player << " HP" ANSI_COLOR_RESET << endl;

    cin >> action;

    switch (action) {
        case 'w': {
            getchar();
            cout << "You throw a few punches at " << botname << ", however, it doesn't do anything, and now, your knuckles hurt" << endl;
            getchar();
            cout << ANSI_COLOR_RED << ANSI_TEXT_BOLD << botname << ": ENERBALLS!" ANSI_COLOR_RESET << endl;
            getchar();
            cout << "Press A and D to move side to side and deflect the EnerBalls. When you press A or D, press ENTER!" << endl;
            getchar();
            cout << "In the event that there are two EnerBalls coming at you, press A and D, then ENTER!" << endl;
            getchar();
            cout << ANSI_COLOR_CYAN << ANSI_TEXT_BOLD "---O" ANSI_COLOR_RESET << endl;

            cin >> action;

            switch (action) {
                case 'a': {
                    cout << ANSI_TEXT_BOLD << "GOOD!" << endl;
                    cout << ANSI_COLOR_CYAN << ANSI_TEXT_BOLD "O---" ANSI_COLOR_RESET << endl;
                    cin >> action;
                    switch (action) {
                        case 'a': {
                            player = player-32;
                            cout << ANSI_COLOR_RED << ANSI_TEXT_BOLD << "-32" << endl;
                            cout << ANSI_COLOR_CYAN << ANSI_TEXT_BOLD "---0" ANSI_COLOR_RESET << endl;

                            cin >> action;
                    }
                        case 'd': {
                            cout << ANSI_TEXT_BOLD << "GREAT!" << endl;
                            cout << ANSI_COLOR_CYAN << ANSI_TEXT_BOLD "---0" ANSI_COLOR_RESET << endl;
                            cin >> action;
                        }
                        default: {
                            player = player-64;
                            cout << ANSI_COLOR_RED << ANSI_TEXT_BOLD << "-64" << endl;
                            cout << ANSI_COLOR_CYAN << ANSI_TEXT_BOLD "---0" ANSI_COLOR_RESET << endl;

                            cin >> action;
                        }
                    }}
                case 'd': {
                    player = player-32;
                    cout << ANSI_COLOR_RED << ANSI_TEXT_BOLD << "-32" << endl;
                    cout << ANSI_COLOR_CYAN << ANSI_TEXT_BOLD "O---" ANSI_COLOR_RESET << endl;

                    cin >> action;
                }
                default: {
                    player = player-64;
                    cout << ANSI_COLOR_RED << ANSI_TEXT_BOLD << "-64" << endl;
                    cout << ANSI_COLOR_CYAN << ANSI_TEXT_BOLD "O---" ANSI_COLOR_RESET << endl;

                    cin >> action;
                }
            }
        }
        case 'd': {
            cout << ANSI_TEXT_BOLD "Special" ANSI_COLOR_RESET << endl;
            cout << "Fireball (f)" << endl;
            cout << "Iceball (i)" << endl;
            cout << "Lightbeam (l)" << endl;
            cout << "Dark Shower (d)" << endl;
        }
        case 's': {
            cout << "You brace for an attack from " << botname << "..." << endl;
        }
        case 'a': {
            cout << "You didn't lose any HP from the last attack, so you didn't heal, therefore, wasting your turn." << endl;
        }
        default: {
            cout << "That is not a valid move..." << endl;
            getchar();
            cout << ANSI_COLOR_RED << ANSI_TEXT_BOLD << botname << ": END" ANSI_COLOR_RESET << endl;
            getchar();
            cout << "Darkness quickly surrounds you..." << endl;
            getchar();
            cout << ANSI_COLOR_RED << ANSI_TEXT_BOLD "GAME OVER" ANSI_COLOR_RESET << endl;
            getchar();
            cout << ANSI_TEXT_BOLD "Try again? (y/n)" ANSI_COLOR_RESET << endl;

            cin >> action;

            switch (action) {
                case 'y': {
                    battle();
                }
                case 'n': {
                    cout << "Returning to menu..." << endl;
                    getchar();
                    menu();
                }
                default: {
                    cout << "Returning to menu..." << endl;
                    getchar();
                    menu();
                }
        }
    }
}

//Invalid Move
/*default: {
            cout << "That is not a valid move..." << endl;
            getchar();
            cout << ANSI_COLOR_RED << ANSI_TEXT_BOLD << botname << ": END" ANSI_COLOR_RESET << endl;
            getchar();
            cout << "Darkness quickly surrounds you..." << endl;
            getchar();
            cout << ANSI_COLOR_RED << ANSI_TEXT_BOLD "GAME OVER" ANSI_COLOR_RESET << endl;
            getchar();
            cout << ANSI_TEXT_BOLD "Try again? (y/n)" ANSI_COLOR_RESET << endl;

            cin >> action;

            switch (action) {
                case 'y': {
                    battle();
                }
                case 'n': {
                    cout << "Returning to menu..." << endl;
                    getchar();
                    menu();
                }
                default: {
                    cout << "Returning to menu..." << endl;
                    getchar();
                    menu();
                }
        }*/
}

//Response template
/*switch (response) {
        case '': {
            getchar();
            cout << ANSI_TEXT_BOLD "You: " << ANSI_COLOR_BLUE "" ANSI_COLOR_RESET << endl;
            getchar();
            cout << ANSI_TEXT_BOLD << botname << ": " << ANSI_COLOR_GREY "" ANSI_COLOR_RESET << endl;
            getchar();
            } */

//Default Case of any split response
/*default: {
     cout << "Returning to menu..." << endl;
     menu(); }*/
//Future things
    /* Mouse input
     * Highlight whenever the mouse is over an option
     * Extra "people" that the user can "talk" to
     * Hidden "talk about" options
     * Allow the user to press enter to enter a response (in the event there is only one)
     *  Ex. Line 122-124*/

//Bugs to fix
/*Space in bot name causes the program to end*/