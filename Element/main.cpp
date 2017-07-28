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
void title();
void intro();

char pname[15];
char pgender=' ';
char pweight=' ';
char pelement=' ';
char pclass=' ';

int main() {
    greeting();
    return 0;
}
void greeting() {
    std::cout << ANSI_TEXT_BOLD << ANSI_COLOR_RED "DatFailKid " << ANSI_TEXT_BOLD "Presents" ANSI_COLOR_RESET << std::endl;
    std::cout << "(Press Enter)" << std::endl;
    getchar();
    std::cout << ANSI_TEXT_BOLD << ANSI_COLOR_GREEN "Element" ANSI_COLOR_RESET<< std::endl;
    getchar();
    title();
};

void title() {
    char command[10];
    char start[]="start";
    char settings[]="set";
    char end[]="exit";
    char ans=' ';

    cout << "Use Enter to progress through menus" << endl;
    cout << "Type one of the underlined following:" << endl;
    cout << ANSI_COLOR_GREEN << ANSI_TEXT_UNDERLINE "start" ANSI_COLOR_RESET << ": Start your adventurre" << endl;
    cout << ANSI_COLOR_GREY << ANSI_TEXT_UNDERLINE "set" ANSI_COLOR_RESET << ": Settings, change stuff..." << endl;
    cout << ANSI_COLOR_CYAN << ANSI_TEXT_UNDERLINE "exit" ANSI_COLOR_RESET << ": Exit the game" << endl;
    cin >> command;

    if (strcmp(command, start) == 0) {
        intro();
    }
    if (strcmp(command, settings) == 0) {
        getchar();
        cout << ANSI_COLOR_RED "Not done with this yet!" ANSI_COLOR_RESET<< endl;
        getchar();
        title();

        /* Add in:
         * Turn highlight on/off
         * Change text color
         * Mouse input on/off*/
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
                title();
            default:
                getchar();
                cout << "I'm assuming you mean 'no'." << endl;
                getchar();
                title();
        }
    }
    else {
        title();
    }
}

void intro() {
    getchar();
    cout << ANSI_COLOR_RESET"You wake up to a seriously bright light" << endl;
    getchar();
    cout << "A light so bright you can't even squint at it" << endl;
    getchar();
    cout << "Then, gradually, you can open your eyes with a bit of ease." << endl;
    getchar();
    cout << "'Rise, Great Hero', some female voice says..." << endl;
    getchar();
    cout << ANSI_COLOR_YELLOW "Character customization!" << endl;
    getchar();
    cout << "Although you can't customize your personal appearance..." << endl;
    getchar();
    cout << "You can still customize your gender, weight, element, and class." << endl;
    getchar();

    do {
        cout << ANSI_COLOR_YELLOW "Choose your character's gender! (This will only change conversations." << endl;
        getchar();
        cout << "(m) = Male" << endl;
        cout << "(f) = Female" << endl;
        cin >> pgender;
        if (pgender=='f') {
            cout << ANSI_COLOR_RESET"Gender = " << pgender << " (Female)" << endl;
            break;
        }
        if (pgender=='m') {
            cout << ANSI_COLOR_RESET"Gender = " << pgender << " (Male)" << endl;
            break;
        }
        if (pgender=='F') {
            pgender='f';
            cout << ANSI_COLOR_RESET"Gender = " << pgender << " (Female)" << endl;
            break;
        }
        if (pgender=='M') {
            pgender='m';
            cout << ANSI_COLOR_RESET"Gender = " << pgender << " (Male)" << endl;
            break;
        }
        else {
            continue;
        }

    } while (pgender==' ' ||
            pgender=='a' ||
            pgender=='b' ||
            pgender=='c' ||
            pgender=='d' ||
            pgender=='e' ||
            pgender=='g' ||
            pgender=='h' ||
            pgender=='i' ||
            pgender=='j' ||
            pgender=='k' ||
            pgender=='l' ||
            pgender=='n' ||
            pgender=='o' ||
            pgender=='p' ||
            pgender=='q' ||
            pgender=='r' ||
            pgender=='s' ||
            pgender=='t' ||
            pgender=='u' ||
            pgender=='v' ||
            pgender=='w' ||
            pgender=='x' ||
            pgender=='y' ||
            pgender=='z' ||
            pgender=='A' ||
            pgender=='B' ||
            pgender=='C' ||
            pgender=='D' ||
            pgender=='E' ||
            pgender=='G' ||
            pgender=='H' ||
            pgender=='I' ||
            pgender=='J' ||
            pgender=='K' ||
            pgender=='L' ||
            pgender=='N' ||
            pgender=='O' ||
            pgender=='P' ||
            pgender=='Q' ||
            pgender=='R' ||
            pgender=='S' ||
            pgender=='T' ||
            pgender=='U' ||
            pgender=='V' ||
            pgender=='W' ||
            pgender=='X' ||
            pgender=='Y' ||
            pgender=='Z');

    do {
        cout << ANSI_COLOR_YELLOW "Choose your weight! (This will determine how much your character can move around," << endl;
        cout << "how much they can get knocked around," << endl;
        cout << "and how much damage movement-based attacks will do." << endl;
        getchar();
        cout << "(f) = Feather-weight" << endl;
        cout << "(r) = Regular" << endl;
        cout << "(t) = Tank" << endl;
        cin >> pweight;
        if (pweight=='f') {
            cout << ANSI_COLOR_RESET"Weight = " << pweight << " (Feather-weight)" << endl;
            break;
        }
        if (pweight=='r') {
            cout << ANSI_COLOR_RESET"Weight = " << pweight << " (Regular)" << endl;
            break;
        }
        if (pweight=='t') {
            cout << ANSI_COLOR_RESET"Weight = " << pweight << " (Tank)" << endl;
            break;
        }
        if (pweight=='F') {
            pweight='f';
            cout << ANSI_COLOR_RESET"Weight = " << pweight << " (Feather-weight)" << endl;
            break;
        }
        if (pweight=='R') {
            pweight='r';
            cout << ANSI_COLOR_RESET"Weight = " << pweight << " (Regular)" << endl;
            break;
        }
        if (pweight=='T') {
            pweight='t';
            cout << ANSI_COLOR_RESET"Weight = " << pweight << " (Tank)" << endl;
            break;
        }
        else {
            continue;
        }

    } while (pweight==' ' ||
            pweight=='a' ||
            pweight=='b' ||
            pweight=='c' ||
            pweight=='d' ||
            pweight=='e' ||
            pweight=='g' ||
            pweight=='h' ||
            pweight=='i' ||
            pweight=='j' ||
            pweight=='k' ||
            pweight=='l' ||
            pweight=='m' ||
            pweight=='n' ||
            pweight=='o' ||
            pweight=='p' ||
            pweight=='q' ||
            pweight=='s' ||
            pweight=='u' ||
            pweight=='v' ||
            pweight=='w' ||
            pweight=='x' ||
            pweight=='y' ||
            pweight=='z' ||
            pweight=='A' ||
            pweight=='B' ||
            pweight=='C' ||
            pweight=='D' ||
            pweight=='E' ||
            pweight=='G' ||
            pweight=='H' ||
            pweight=='I' ||
            pweight=='J' ||
            pweight=='K' ||
            pweight=='L' ||
            pweight=='M' ||
            pweight=='N' ||
            pweight=='O' ||
            pweight=='P' ||
            pweight=='Q' ||
            pweight=='S' ||
            pweight=='U' ||
            pweight=='V' ||
            pweight=='W' ||
            pweight=='X' ||
            pweight=='Y' ||
            pweight=='Z');
    do {
        cout << ANSI_COLOR_YELLOW "Choose your character's element! (This will determine your character's weakness, " << endl;
        cout << "and what spells they will start out with." << endl;
        cout << "This does not change what spells your character can learn, though." << endl;
        getchar();
        cout << "(f) = Fire" << endl;
        cout << "(e) = Electricity" << endl;
        cout << "(w) = Water" << endl;
        cout << "(d) = Darkness" << endl;
        cout << "(l) = Light" << endl;
        cin >> pelement;
        if (pelement=='f') {
            cout << ANSI_COLOR_RESET"Element = " << pelement << " (Fire)" << endl;
            break;
        }
        if (pelement=='e') {
            cout << ANSI_COLOR_RESET"Element = " << pelement << " (Electricity)" << endl;
            break;
        }
        if (pelement=='w') {
            cout << ANSI_COLOR_RESET"Element = " << pelement << " (Water)" << endl;
            break;
        }
        if (pelement=='i') {
            cout << ANSI_COLOR_RESET"Element = " << pelement << " (Ice)" << endl;
            break;
        }
        if (pelement=='d') {
            cout << ANSI_COLOR_RESET"Element = " << pelement << " (Darkness)" << endl;
            break;
        }
        if (pelement=='l') {
            cout << ANSI_COLOR_RESET"Element = " << pelement << " (Light)" << endl;
            break;
        }
        if (pelement=='F') {
            pelement='f';
            cout << ANSI_COLOR_RESET"Element = " << pelement << " (Fire)" << endl;
            break;
        }
        if (pelement=='E') {
            pelement='e';
            cout << ANSI_COLOR_RESET"Element = " << pelement << " (Electricity)" << endl;
            break;
        }
        if (pelement=='W') {
            pelement='w';
            cout << ANSI_COLOR_RESET"Element = " << pelement << " (Water)" << endl;
            break;
        }
        if (pelement=='I') {
            pelement='i';
            cout << ANSI_COLOR_RESET"Element = " << pelement << " (Ice)" << endl;
            break;
        }
        if (pelement=='D') {
            pelement='d';
            cout << ANSI_COLOR_RESET"Element = " << pelement << " (Darkness)" << endl;
            break;
        }
        if (pelement=='L') {
            pelement='l';
            cout << ANSI_COLOR_RESET"Element = " << pelement << " (Light)" << endl;
            break;
        }
        else {
            continue;
        }

    } while (pelement==' ' ||
            pelement=='a' ||
            pelement=='b' ||
            pelement=='c' ||
            pelement=='g' ||
            pelement=='h' ||
            pelement=='j' ||
            pelement=='k' ||
            pelement=='m' ||
            pelement=='n' ||
            pelement=='o' ||
            pelement=='p' ||
            pelement=='q' ||
            pelement=='r' ||
            pelement=='s' ||
            pelement=='t' ||
            pelement=='u' ||
            pelement=='v' ||
            pelement=='x' ||
            pelement=='y' ||
            pelement=='z' ||
            pelement=='A' ||
            pelement=='B' ||
            pelement=='C' ||
            pelement=='G' ||
            pelement=='H' ||
            pelement=='J' ||
            pelement=='K' ||
            pelement=='M' ||
            pelement=='N' ||
            pelement=='O' ||
            pelement=='P' ||
            pelement=='Q' ||
            pelement=='R' ||
            pelement=='S' ||
            pelement=='T' ||
            pelement=='U' ||
            pelement=='V' ||
            pelement=='X' ||
            pelement=='Y' ||
            pelement=='Z');

    do {
        cout << ANSI_COLOR_YELLOW "Choose your character's class! (This will change how you fight and how you defend.)" << endl;
        getchar();
        cout << "(s) = Swordsman" << endl;
        cout << "(f) = Fighter" << endl;
        cout << "(b) = Blaster" << endl;
        cin >> pclass;
        if (pclass=='f') {
            cout << ANSI_COLOR_RESET"Class = " << pclass << " (Fighter)" << endl;
            break;
        }
        if (pclass=='s') {
            cout << ANSI_COLOR_RESET"Class = " << pclass << " (Swordsman)" << endl;
            break;
        }
        if (pclass=='b') {
            cout << ANSI_COLOR_RESET"Class = " << pclass << " (Blaster)" << endl;
            break;
        }
        if (pclass=='F') {
            pclass='f';
            cout << ANSI_COLOR_RESET"Class = " << pclass << " (Fighter)" << endl;
            break;
        }
        if (pclass=='S') {
            pclass='s';
            cout << ANSI_COLOR_RESET"Class = " << pclass << " (Swordsman)" << endl;
            break;
        }
        if (pclass=='B') {
            pclass='b';
            cout << ANSI_COLOR_RESET"Class = " << pclass << " (Blaster)" << endl;
            break;
        }
        else {
            continue;
        }

    } while (pclass==' ' ||
            pclass=='a' ||
            pclass=='c' ||
            pclass=='d' ||
            pclass=='e' ||
            pclass=='g' ||
            pclass=='h' ||
            pclass=='i' ||
            pclass=='j' ||
            pclass=='k' ||
            pclass=='l' ||
            pclass=='m' ||
            pclass=='n' ||
            pclass=='o' ||
            pclass=='p' ||
            pclass=='q' ||
            pclass=='r' ||
            pclass=='t' ||
            pclass=='u' ||
            pclass=='v' ||
            pclass=='w' ||
            pclass=='x' ||
            pclass=='y' ||
            pclass=='z' ||
            pclass=='A' ||
            pclass=='C' ||
            pclass=='D' ||
            pclass=='E' ||
            pclass=='G' ||
            pclass=='H' ||
            pclass=='I' ||
            pclass=='J' ||
            pclass=='K' ||
            pclass=='L' ||
            pclass=='M' ||
            pclass=='N' ||
            pclass=='O' ||
            pclass=='P' ||
            pclass=='Q' ||
            pclass=='R' ||
            pclass=='T' ||
            pclass=='U' ||
            pclass=='V' ||
            pclass=='W' ||
            pclass=='X' ||
            pclass=='Y' ||
            pclass=='Z');
    getchar();
    cout << ANSI_COLOR_RESET"'Now, go my hero', the voice says again." << endl;
    getchar();
    cout << "'Save this world from eternal doom.'" << endl;
    getchar();
    cout << "Now you feel yourself falling..." << endl;
    getchar();
    cout << "Wait... falling?" << endl;
    getchar();
    cout << "You just realized how high up you are in the sky, along with how fast you're falling!" << endl;
    if (pweight=='t') {
        cout << "All too soon, you plummet into the ground, creating a crater around you." << endl;
        getchar();
        cout << "All too soon, you plummet into the ground, creating a crater around you." << endl;
    }
    if (pweight=='f') {
        cout << "Thankfully, you're just falling fast enough that you can make a safe landing in the middle of some plains." << endl;
        getchar();
    }
    else {
        cout << "Within a few minutes, you crash into the ground, burying your head underground." << endl;
        getchar();
        cout << ANSI_TEXT_BOLD "Press 'Enter' to pull your head out!" << endl;
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
        cout << ANSI_TEXT_BOLD "PLOP!" << endl;
        getchar();
        cout << ANSI_COLOR_RESET "Your head flies up out of the ground, causing you to stagger backwards." << endl;
        getchar();
    }
    cout << "You look around at the grasslands you've landed in." << endl;
}