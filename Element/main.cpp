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
void forest();

void forest11(); //Areas of the Dead Forest (void function "forest"); Has a 5x5 array
void forest12();
void forest13();
void forest14();
void forest15();
void forest21();
void forest22();
void forest23();
void forest24();
void forest25();
void forest31();
void forest32();
void forest33();
void forest34();
void forest35();
void forest41();
void forest42();
void forest43();
void forest44();
void forest45();
void forest51();
void forest52();
void forest53();
void forest54();
void forest55();

void goblinbat1();

void levelup();

void village();
void field();
void fvillage();

char pname[15]=" ";
char pgender;
char pweight;
char pelement;
char pclass;
char page;
int plevel=1;
int pexp=0;

int parmor;
int pweapon;
int pcore;
int pcoret;
int pcoremax=3;
int pdamage;
int pcrit;

char choice;
int count;

int pHP=50;
int pHPmax=50;
int pdefense=0;

int gold=0;

bool firstv=true;
bool firstf=true;
bool firstb=true;
bool pursenab=false;

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
    std::cout << ANSI_TEXT_BOLD << ANSI_COLOR_GREY "If you are getting weird characters before the outputs, then your"
            "\ncompiler cannot output the defined colors. Please download a" << endl;
         cout << "compiler that can output defined colors, or choose a different OS"
                 "\nto run this on." ANSI_COLOR_RESET<< std::endl;
    getchar();
    title();
};

void title() {
    char command[10];
    char start[] = "start";
    char settings[] = "set";
    char end[] = "exit";
    char credit[] = "cred";
    char ans = ' ';

    cout << "Use Enter to progress through menus" << endl;
    cout << "Type one of the underlined following:" << endl;
    cout << ANSI_COLOR_GREEN << ANSI_TEXT_UNDERLINE "start" ANSI_COLOR_RESET << ": Start your adventurre" << endl;
    cout << ANSI_COLOR_GREY << ANSI_TEXT_UNDERLINE "set" ANSI_COLOR_RESET << ": Settings, change stuff..." << endl;
    cout << ANSI_COLOR_RED << ANSI_TEXT_UNDERLINE "cred" ANSI_COLOR_RESET<< ": Credits" << endl;
    cout << ANSI_COLOR_CYAN << ANSI_TEXT_UNDERLINE "exit" ANSI_COLOR_RESET << ": Exit the game" << endl;
    cin >> command;

    if (strcmp(command, start) == 0) {
        intro();
    }
    if (strcmp(command, settings) == 0) {
        getchar();
        cout << ANSI_COLOR_RED "Not done with this yet!" ANSI_COLOR_RESET << endl;
        getchar();
        title();

        /* Add in:
         * Turn highlight on/off
         * Change text color
         * Mouse input on/off*/
    }

    if (strcmp(command, end) == 0) {
        cout << ANSI_COLOR_CYAN"Are you sure you want to exit?" << endl;
        cout << "Type 'y' for 'yes', type 'n' for 'no'." ANSI_COLOR_RESET << endl;
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
        if (strcmp(command, credit) == 0) {
            cout << "Credits" << end;
            getchar();
            cout << "This text-based RPG was inspired by a few RPG's that I've loved." << endl;
            getchar();
            cout << "Super Mario RPG: Legend of the Seven Stars" << endl;
            cout << "Made by Square" << endl;
            cout << "Published by Nintendo" << endl;
            getchar();
            cout << "Oh yeah, by the way, Nintendo, you guys need to make a sequel." << endl;
            getchar();
            cout << "I'm serious." << endl;
            getchar();
            cout << "The 'Mario & Luigi' RPG series" << endl;
            cout << "Made by AlphaDream" << endl;
            cout << "Published by Nintendo" << endl;
            getchar();
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
    cout << "Here you can customize stuff that will alter your story." << endl;
    getchar();

    do {
        cout << ANSI_COLOR_YELLOW "Choose your character's gender! (This will only change conversations.)" << endl;
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
        cout << "and how much damage movement-based attacks will do.)" << endl;
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
        cout << "This does not change what spells your character can learn, though.)" << endl;
        getchar();
        cout << "(f) = Fire" << endl;
        cout << "(e) = Electricity" << endl;
        cout << "(w) = Water" << endl;
        cout << "(i) = Ice" << endl;
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

    do {
        cout << ANSI_COLOR_YELLOW "Choose your character's age! (This will change how characters interact with you.)" << endl;
        getchar();
        cout << "(a) = Adult" << endl;
        cout << "(t) = Teenager" << endl;
        cin >> page;
        if (page=='a') {
            cout << ANSI_COLOR_RESET"Age = " << page << " (Adult)" << endl;
            break;
        }
        if (page=='t') {
            cout << ANSI_COLOR_RESET"Age = " << page << " (Teenager)" << endl;
            break;
        }
        if (page=='A') {
            page='a';
            cout << ANSI_COLOR_RESET"Age = " << page << " (Adult)" << endl;
            break;
        }
        if (page=='T') {
            page='t';
            cout << ANSI_COLOR_RESET"Age = " << page << " (Teenager)" << endl;
            break;
        }
        else {
            continue;
        }

    } while (page==' ' ||
            page=='b' ||
            page=='c' ||
            page=='d' ||
            page=='e' ||
            page=='f' ||
            page=='g' ||
            page=='h' ||
            page=='i' ||
            page=='j' ||
            page=='k' ||
            page=='l' ||
            page=='m' ||
            page=='n' ||
            page=='o' ||
            page=='p' ||
            page=='q' ||
            page=='r' ||
            page=='s' ||
            page=='u' ||
            page=='v' ||
            page=='w' ||
            page=='x' ||
            page=='y' ||
            page=='z' ||
            page=='B' ||
            page=='C' ||
            page=='D' ||
            page=='E' ||
            page=='F' ||
            page=='G' ||
            page=='H' ||
            page=='I' ||
            page=='J' ||
            page=='K' ||
            page=='L' ||
             page=='M' ||
            page=='N' ||
            page=='O' ||
            page=='P' ||
            page=='Q' ||
            page=='R' ||
            page=='S' ||
            page=='U' ||
            page=='V' ||
            page=='W' ||
            page=='X' ||
            page=='Y' ||
            page=='Z');
    getchar();
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
        getchar();
        cout << "All too soon, you plummet into the ground, creating a crater around you." << endl;
        getchar();
        cout << "You slowly get up, and climb out of the crater." << endl;
        getchar();
        cout << ANSI_TEXT_BOLD "Press 'Enter' to climb!" << endl;
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
        cout << ANSI_COLOR_RESET"You manage to get yourself out of the crater and to the surface." << endl;
        getchar();
        cout << "And thankfully, you didn't crash into the village nearby." << endl;
        field();
    }
    if (pweight=='f') {
        getchar();
        cout << "Thankfully, you're just falling fast enough that you can make a safe landing in the middle of some plains." << endl;
        getchar();
        field();
    }
    else {
        getchar();
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
    field(); }

void field() {
    getchar();
    cout << "You see a heavy forest, and a village nearby." << endl;

    do {
        cout << "Which do you go to? (v=village, f=forest)" << endl;
        cin >> choice;

        if (choice=='f') {
            if (!pursenab && firstf) {
                cout << "You approach the forest..." << endl;
                getchar();
                cout << "However, you quickly walk away, remembering you don't have any gear." << endl;
                getchar();
                continue;
            }
            if (pursenab && firstf) {
                cout << "You see the kid from earlier bolt into the forest." << endl;
                getchar();
                cout << "So you run after him..." << endl;
                getchar();
                forest();
            }
        }
        if (choice=='v') {
            cout << "You walk to the village..." << endl;
            getchar();
            if (firstv) {
            fvillage();
            }
            if (!firstv) {
                village();
            }
        }
        if (choice=='F') {
            choice='f';
            if (!pursenab && firstf) {
                cout << "You approach the forest..." << endl;
                getchar();
                cout << "However, you quickly walk away, remembering you don't have any gear." << endl;
                getchar();
            }
            if (pursenab && firstf) {
                cout << "You see the kid from earlier bolt into the forest." << endl;
                getchar();
                cout << "So you run after him..." << endl;
                getchar();
                forest();
            }
        }
        if (choice=='V') {
            choice='v';
            cout << "You walk to the village..." << endl;
            getchar();
            if (firstv) {
                fvillage();
            }
            if (!firstv) {
                village();
            }
        }
    } while (choice==' ' ||
            choice=='a' ||
            choice=='b' ||
            choice=='c' ||
            choice=='d' ||
            choice=='e' ||
            choice=='g' ||
            choice=='h' ||
            choice=='i' ||
            choice=='j' ||
            choice=='k' ||
            choice=='l' ||
            choice=='m' ||
            choice=='n' ||
            choice=='o' ||
            choice=='p' ||
            choice=='q' ||
            choice=='r' ||
            choice=='s' ||
            choice=='t' ||
            choice=='u' ||
            choice=='w' ||
            choice=='x' ||
            choice=='y' ||
            choice=='z' ||
            choice=='A' ||
            choice=='B' ||
            choice=='C' ||
            choice=='D' ||
            choice=='E' ||
            choice=='G' ||
            choice=='H' ||
            choice=='I' ||
            choice=='J' ||
            choice=='K' ||
            choice=='L' ||
            choice=='M' ||
            choice=='N' ||
            choice=='O' ||
            choice=='P' ||
            choice=='Q' ||
            choice=='R' ||
            choice=='S' ||
            choice=='T' ||
            choice=='U' ||
            choice=='W' ||
            choice=='X' ||
            choice=='Y' ||
            choice=='Z');


}

void fvillage() {
    getchar();
        if (pweight == 't') {
            cout << "Some of the villagers watch you as you walk" << endl;
            cout << "into the village, some take quick looks at " << endl;
            cout << "you while whispering to people nearby." << endl;
            getchar();
            if (page == 't') {
                cout << "A lady comes up to you." << endl;
                getchar();
                cout << "Excuse me sir, where are your parents?" << endl;
                getchar();
                do {
                    cout << "Respond with one of the following:" << endl;
                    cout << ANSI_TEXT_UNDERLINE << "a" << ANSI_COLOR_RESET ": I don't have parents..." << endl;
                    cout << ANSI_TEXT_UNDERLINE << "b" << ANSI_COLOR_RESET ": They're at another village" << endl;
                    cin >> choice;

                    if (choice == 'a' && pelement == 'f') {
                        getchar();
                        cout << ANSI_COLOR_RED"'I don't have parents...', you respond." << endl;
                        getchar();
                        cout << ANSI_COLOR_RESET"'Oh, well, sorry to hear that...', the lady says, then walks away."
                             << endl;
                    }
                    if (choice == 'a' && pelement == 'w') {
                        getchar();
                        cout << ANSI_COLOR_BLUE"'I don't have parents...', you respond." << endl;
                        getchar();
                        cout << ANSI_COLOR_RESET"'Oh, well, sorry to hear that...', the lady says, then walks away."
                             << endl;
                    }
                    if (choice == 'a' && pelement == 'e') {
                        getchar();
                        cout << ANSI_COLOR_YELLOW"'I don't have parents...', you respond." << endl;
                        getchar();
                        cout << ANSI_COLOR_RESET"'Oh, well, sorry to hear that...', the lady says, then walks away."
                             << endl;
                    }
                    if (choice == 'a' && pelement == 'i') {
                        getchar();
                        cout << ANSI_COLOR_CYAN"'I don't have parents...', you respond." << endl;
                        getchar();
                        cout << ANSI_COLOR_RESET"'Oh, well, sorry to hear that...', the lady says, then walks away."
                             << endl;
                    }
                    if (choice == 'a' && pelement == 'd') {
                        getchar();
                        cout << ANSI_COLOR_PURPLE"'I don't have parents...', you respond." << endl;
                        getchar();
                        cout << ANSI_COLOR_RESET"'Oh, well, sorry to hear that...', the lady says, then walks away."
                             << endl;
                    }
                    if (choice == 'a' && pelement == 'l') {
                        getchar();
                        cout << ANSI_COLOR_RESET"'I don't have parents...', you respond." << endl;
                        getchar();
                        cout << ANSI_COLOR_RESET"'Oh, well, sorry to hear that...', the lady says, then walks away."
                             << endl;
                    }
                    if (choice == 'b' && pelement == 'f') {
                        getchar();
                        cout << ANSI_COLOR_RED"'They're at another village,' you reply, knowing good" << endl;
                        cout << "and well that wasn't true." << endl;
                        getchar();
                        cout << ANSI_COLOR_RESET"'Well, they must have a good son to sent him off into" << endl;
                        cout << "another village by himself,' the lady replies with a smile, walking off." << endl;
                    }
                    if (choice == 'b' && pelement == 'w') {
                        getchar();
                        cout << ANSI_COLOR_BLUE"'They're at another village,' you reply, knowing good" << endl;
                        cout << "and well that wasn't true." << endl;
                        getchar();
                        cout << ANSI_COLOR_RESET"'Well, they must have a good son to sent him off into" << endl;
                        cout << "another village by himself,' the lady replies with a smile, walking off." << endl;
                    }
                    if (choice == 'b' && pelement == 'e') {
                        getchar();
                        cout << ANSI_COLOR_YELLOW"'They're at another village,' you reply, knowing good" << endl;
                        cout << "and well that wasn't true." << endl;
                        getchar();
                        cout << ANSI_COLOR_RESET"'Well, they must have a good son to sent him off into" << endl;
                        cout << "another village by himself,' the lady replies with a smile, walking off." << endl;
                    }
                    if (choice == 'b' && pelement == 'i') {
                        getchar();
                        cout << ANSI_COLOR_CYAN"'They're at another village,' you reply, knowing good" << endl;
                        cout << "and well that wasn't true." << endl;
                        getchar();
                        cout << ANSI_COLOR_RESET"'Well, they must have a good son to sent him off into" << endl;
                        cout << "another village by himself,' the lady replies with a smile, walking off." << endl;
                    }
                    if (choice == 'b' && pelement == 'd') {
                        getchar();
                        cout << ANSI_COLOR_PURPLE"'They're at another village,' you reply, knowing good" << endl;
                        cout << "and well that wasn't true." << endl;
                        getchar();
                        cout << ANSI_COLOR_RESET"'Well, they must have a good son to sent him off into" << endl;
                        cout << "another village by himself,' the lady replies with a smile, walking off." << endl;
                    }
                    if (choice == 'b' && pelement == 'l') {
                        getchar();
                        cout << ANSI_COLOR_RESET"'They're at another village,' you reply, knowing good" << endl;
                        cout << "and well that wasn't true." << endl;
                        getchar();
                        cout << ANSI_COLOR_RESET"'Well, they must have a good son to sent him off into" << endl;
                        cout << "another village by himself,' the lady replies with a smile, walking off." << endl;
                    }
                    if (choice == 'A' && pelement == 'f') {
                        choice = 'a';
                        getchar();
                        cout << ANSI_COLOR_RED"'I don't have parents...', you respond." << endl;
                        getchar();
                        cout << ANSI_COLOR_RESET"'Oh, well, sorry to hear that...', the lady says, then walks away."
                             << endl;
                    }
                    if (choice == 'A' && pelement == 'w') {
                        choice = 'a';
                        getchar();
                        cout << ANSI_COLOR_BLUE"'I don't have parents...', you respond." << endl;
                        getchar();
                        cout << ANSI_COLOR_RESET"'Oh, well, sorry to hear that...', the lady says, then walks away."
                             << endl;
                    }
                    if (choice == 'A' && pelement == 'e') {
                        choice = 'a';
                        getchar();
                        cout << ANSI_COLOR_YELLOW"'I don't have parents...', you respond." << endl;
                        getchar();
                        cout << ANSI_COLOR_RESET"'Oh, well, sorry to hear that...', the lady says, then walks away."
                             << endl;
                    }
                    if (choice == 'A' && pelement == 'i') {
                        choice = 'a';
                        getchar();
                        cout << ANSI_COLOR_CYAN"'I don't have parents...', you respond." << endl;
                        getchar();
                        cout << ANSI_COLOR_RESET"'Oh, well, sorry to hear that...', the lady says, then walks away."
                             << endl;
                    }
                    if (choice == 'A' && pelement == 'd') {
                        choice = 'a';
                        getchar();
                        cout << ANSI_COLOR_PURPLE"'I don't have parents...', you respond." << endl;
                        getchar();
                        cout << ANSI_COLOR_RESET"'Oh, well, sorry to hear that...', the lady says, then walks away."
                             << endl;
                    }
                    if (choice == 'A' && pelement == 'l') {
                        choice = 'a';
                        getchar();
                        cout << ANSI_COLOR_RESET"'I don't have parents...', you respond." << endl;
                        getchar();
                        cout << ANSI_COLOR_RESET"'Oh, well, sorry to hear that...', the lady says, then walks away."
                             << endl;
                    }
                    if (choice == 'B' && pelement == 'f') {
                        choice = 'b';
                        getchar();
                        cout << ANSI_COLOR_RED"'They're at another village,' you reply, knowing good" << endl;
                        cout << "and well that wasn't true." << endl;
                        getchar();
                        cout << ANSI_COLOR_RESET"'Well, they must have a good son to sent him off into" << endl;
                        cout << "another village by himself,' the lady replies with a smile, walking off." << endl;
                    }
                    if (choice == 'B' && pelement == 'w') {
                        choice = 'b';
                        getchar();
                        cout << ANSI_COLOR_BLUE"'They're at another village,' you reply, knowing good" << endl;
                        cout << "and well that wasn't true." << endl;
                        getchar();
                        cout << ANSI_COLOR_RESET"'Well, they must have a good son to sent him off into" << endl;
                        cout << "another village by himself,' the lady replies with a smile, walking off." << endl;
                    }
                    if (choice == 'B' && pelement == 'e') {
                        choice = 'b';
                        getchar();
                        cout << ANSI_COLOR_YELLOW"'They're at another village,' you reply, knowing good" << endl;
                        cout << "and well that wasn't true." << endl;
                        getchar();
                        cout << ANSI_COLOR_RESET"'Well, they must have a good son to sent him off into" << endl;
                        cout << "another village by himself,' the lady replies with a smile, walking off." << endl;
                    }
                    if (choice == 'B' && pelement == 'i') {
                        choice = 'b';
                        getchar();
                        cout << ANSI_COLOR_CYAN"'They're at another village,' you reply, knowing good" << endl;
                        cout << "and well that wasn't true." << endl;
                        getchar();
                        cout << ANSI_COLOR_RESET"'Well, they must have a good son to sent him off into" << endl;
                        cout << "another village by himself,' the lady replies with a smile, walking off." << endl;
                    }
                    if (choice == 'B' && pelement == 'd') {
                        choice = 'b';
                        getchar();
                        cout << ANSI_COLOR_PURPLE"'They're at another village,' you reply, knowing good" << endl;
                        cout << "and well that wasn't true." << endl;
                        getchar();
                        cout << ANSI_COLOR_RESET"'Well, they must have a good son to sent him off into" << endl;
                        cout << "another village by himself,' the lady replies with a smile, walking off." << endl;
                    }
                    if (choice == 'B' && pelement == 'l') {
                        choice = 'b';
                        getchar();
                        cout << ANSI_COLOR_RESET"'They're at another village,' you reply, knowing good" << endl;
                        cout << "and well that wasn't true." << endl;
                        getchar();
                        cout << ANSI_COLOR_RESET"'Well, they must have a good son to sent him off into" << endl;
                        cout << "another village by himself,' the lady replies with a smile, walking off." << endl;
                    }
                } while (choice == ' ' ||
                         choice == 'c' ||
                         choice == 'd' ||
                         choice == 'e' ||
                         choice == 'f' ||
                         choice == 'g' ||
                         choice == 'h' ||
                         choice == 'i' ||
                         choice == 'j' ||
                         choice == 'k' ||
                         choice == 'l' ||
                         choice == 'm' ||
                         choice == 'n' ||
                         choice == 'o' ||
                         choice == 'p' ||
                         choice == 'q' ||
                         choice == 'r' ||
                         choice == 's' ||
                         choice == 't' ||
                         choice == 'u' ||
                         choice == 'v' ||
                         choice == 'w' ||
                         choice == 'x' ||
                         choice == 'y' ||
                         choice == 'z' ||
                         choice == 'C' ||
                         choice == 'D' ||
                         choice == 'E' ||
                         choice == 'F' ||
                         choice == 'G' ||
                         choice == 'H' ||
                         choice == 'I' ||
                         choice == 'J' ||
                         choice == 'K' ||
                         choice == 'L' ||
                         choice == 'M' ||
                         choice == 'N' ||
                         choice == 'O' ||
                         choice == 'P' ||
                         choice == 'Q' ||
                         choice == 'R' ||
                         choice == 'S' ||
                         choice == 'T' ||
                         choice == 'U' ||
                         choice == 'V' ||
                         choice == 'W' ||
                         choice == 'X' ||
                         choice == 'Y' ||
                         choice == 'Z');
            }
            getchar();
            cout << "You look down at your clothes, which you don't remember putting on," << endl;
            cout << "realizing how much dirt is on it." << endl;
            getchar();
            cout << "That may explain why all the villagers were watching you as you" << endl;
            cout << "came in..." << endl;
            getchar();
            cout << "Or it could just be your weight..." << endl;
            getchar();
            cout << "There doesn't seem to be anyone else who has an unusual weight." << endl;
            getchar();
        }
        if (pweight == 'r') {
            cout << "Some of the villagers watch you as you walk" << endl;
            cout << "into the village, some take quick looks at " << endl;
            cout << "you while whispering to people nearby." << endl;
            getchar();
            if (page == 't') {
                cout << "A lady comes up to you." << endl;
                getchar();
                cout << "Excuse me sir, where are your parents?" << endl;
                getchar();
                do {
                    cout << "Respond with one of the following:" << endl;
                    cout << ANSI_TEXT_UNDERLINE << "a" << ANSI_COLOR_RESET ": I don't have parents..." << endl;
                    cout << ANSI_TEXT_UNDERLINE << "b" << ANSI_COLOR_RESET ": They're at another village" << endl;
                    cin >> choice;

                    if (choice == 'a' && pelement == 'f') {
                        getchar();
                        cout << ANSI_COLOR_RED"'I don't have parents...', you respond." << endl;
                        getchar();
                        cout << ANSI_COLOR_RESET"'Oh, well, sorry to hear that...', the lady says, then walks away."
                             << endl;
                    }
                    if (choice == 'a' && pelement == 'w') {
                        getchar();
                        cout << ANSI_COLOR_BLUE"'I don't have parents...', you respond." << endl;
                        getchar();
                        cout << ANSI_COLOR_RESET"'Oh, well, sorry to hear that...', the lady says, then walks away."
                             << endl;
                    }
                    if (choice == 'a' && pelement == 'e') {
                        getchar();
                        cout << ANSI_COLOR_YELLOW"'I don't have parents...', you respond." << endl;
                        getchar();
                        cout << ANSI_COLOR_RESET"'Oh, well, sorry to hear that...', the lady says, then walks away."
                             << endl;
                    }
                    if (choice == 'a' && pelement == 'i') {
                        getchar();
                        cout << ANSI_COLOR_CYAN"'I don't have parents...', you respond." << endl;
                        getchar();
                        cout << ANSI_COLOR_RESET"'Oh, well, sorry to hear that...', the lady says, then walks away."
                             << endl;
                    }
                    if (choice == 'a' && pelement == 'd') {
                        getchar();
                        cout << ANSI_COLOR_PURPLE"'I don't have parents...', you respond." << endl;
                        getchar();
                        cout << ANSI_COLOR_RESET"'Oh, well, sorry to hear that...', the lady says, then walks away."
                             << endl;
                    }
                    if (choice == 'a' && pelement == 'l') {
                        getchar();
                        cout << ANSI_COLOR_RESET"'I don't have parents...', you respond." << endl;
                        getchar();
                        cout << ANSI_COLOR_RESET"'Oh, well, sorry to hear that...', the lady says, then walks away."
                             << endl;
                    }
                    if (choice == 'b' && pelement == 'f') {
                        getchar();
                        cout << ANSI_COLOR_RED"'They're at another village,' you reply, knowing good" << endl;
                        cout << "and well that wasn't true." << endl;
                        getchar();
                        cout << ANSI_COLOR_RESET"'Well, they must have a good son to sent him off into" << endl;
                        cout << "another village by himself,' the lady replies with a smile, walking off." << endl;
                    }
                    if (choice == 'b' && pelement == 'w') {
                        getchar();
                        cout << ANSI_COLOR_BLUE"'They're at another village,' you reply, knowing good" << endl;
                        cout << "and well that wasn't true." << endl;
                        getchar();
                        cout << ANSI_COLOR_RESET"'Well, they must have a good son to sent him off into" << endl;
                        cout << "another village by himself,' the lady replies with a smile, walking off." << endl;
                    }
                    if (choice == 'b' && pelement == 'e') {
                        getchar();
                        cout << ANSI_COLOR_YELLOW"'They're at another village,' you reply, knowing good" << endl;
                        cout << "and well that wasn't true." << endl;
                        getchar();
                        cout << ANSI_COLOR_RESET"'Well, they must have a good son to sent him off into" << endl;
                        cout << "another village by himself,' the lady replies with a smile, walking off." << endl;
                    }
                    if (choice == 'b' && pelement == 'i') {
                        getchar();
                        cout << ANSI_COLOR_CYAN"'They're at another village,' you reply, knowing good" << endl;
                        cout << "and well that wasn't true." << endl;
                        getchar();
                        cout << ANSI_COLOR_RESET"'Well, they must have a good son to sent him off into" << endl;
                        cout << "another village by himself,' the lady replies with a smile, walking off." << endl;
                    }
                    if (choice == 'b' && pelement == 'd') {
                        getchar();
                        cout << ANSI_COLOR_PURPLE"'They're at another village,' you reply, knowing good" << endl;
                        cout << "and well that wasn't true." << endl;
                        getchar();
                        cout << ANSI_COLOR_RESET"'Well, they must have a good son to sent him off into" << endl;
                        cout << "another village by himself,' the lady replies with a smile, walking off." << endl;
                    }
                    if (choice == 'b' && pelement == 'l') {
                        getchar();
                        cout << ANSI_COLOR_RESET"'They're at another village,' you reply, knowing good" << endl;
                        cout << "and well that wasn't true." << endl;
                        getchar();
                        cout << ANSI_COLOR_RESET"'Well, they must have a good son to sent him off into" << endl;
                        cout << "another village by himself,' the lady replies with a smile, walking off." << endl;
                    }
                    if (choice == 'A' && pelement == 'f') {
                        choice = 'a';
                        getchar();
                        cout << ANSI_COLOR_RED"'I don't have parents...', you respond." << endl;
                        getchar();
                        cout << ANSI_COLOR_RESET"'Oh, well, sorry to hear that...', the lady says, then walks away."
                             << endl;
                    }
                    if (choice == 'A' && pelement == 'w') {
                        choice = 'a';
                        getchar();
                        cout << ANSI_COLOR_BLUE"'I don't have parents...', you respond." << endl;
                        getchar();
                        cout << ANSI_COLOR_RESET"'Oh, well, sorry to hear that...', the lady says, then walks away."
                             << endl;
                    }
                    if (choice == 'A' && pelement == 'e') {
                        choice = 'a';
                        getchar();
                        cout << ANSI_COLOR_YELLOW"'I don't have parents...', you respond." << endl;
                        getchar();
                        cout << ANSI_COLOR_RESET"'Oh, well, sorry to hear that...', the lady says, then walks away."
                             << endl;
                    }
                    if (choice == 'A' && pelement == 'i') {
                        choice = 'a';
                        getchar();
                        cout << ANSI_COLOR_CYAN"'I don't have parents...', you respond." << endl;
                        getchar();
                        cout << ANSI_COLOR_RESET"'Oh, well, sorry to hear that...', the lady says, then walks away."
                             << endl;
                    }
                    if (choice == 'A' && pelement == 'd') {
                        choice = 'a';
                        getchar();
                        cout << ANSI_COLOR_PURPLE"'I don't have parents...', you respond." << endl;
                        getchar();
                        cout << ANSI_COLOR_RESET"'Oh, well, sorry to hear that...', the lady says, then walks away."
                             << endl;
                    }
                    if (choice == 'A' && pelement == 'l') {
                        choice = 'a';
                        getchar();
                        cout << ANSI_COLOR_RESET"'I don't have parents...', you respond." << endl;
                        getchar();
                        cout << ANSI_COLOR_RESET"'Oh, well, sorry to hear that...', the lady says, then walks away."
                             << endl;
                    }
                    if (choice == 'B' && pelement == 'f') {
                        choice = 'b';
                        getchar();
                        cout << ANSI_COLOR_RED"'They're at another village,' you reply, knowing good" << endl;
                        cout << "and well that wasn't true." << endl;
                        getchar();
                        cout << ANSI_COLOR_RESET"'Well, they must have a good son to sent him off into" << endl;
                        cout << "another village by himself,' the lady replies with a smile, walking off." << endl;
                    }
                    if (choice == 'B' && pelement == 'w') {
                        choice = 'b';
                        getchar();
                        cout << ANSI_COLOR_BLUE"'They're at another village,' you reply, knowing good" << endl;
                        cout << "and well that wasn't true." << endl;
                        getchar();
                        cout << ANSI_COLOR_RESET"'Well, they must have a good son to sent him off into" << endl;
                        cout << "another village by himself,' the lady replies with a smile, walking off." << endl;
                    }
                    if (choice == 'B' && pelement == 'e') {
                        choice = 'b';
                        getchar();
                        cout << ANSI_COLOR_YELLOW"'They're at another village,' you reply, knowing good" << endl;
                        cout << "and well that wasn't true." << endl;
                        getchar();
                        cout << ANSI_COLOR_RESET"'Well, they must have a good son to sent him off into" << endl;
                        cout << "another village by himself,' the lady replies with a smile, walking off." << endl;
                    }
                    if (choice == 'B' && pelement == 'i') {
                        choice = 'b';
                        getchar();
                        cout << ANSI_COLOR_CYAN"'They're at another village,' you reply, knowing good" << endl;
                        cout << "and well that wasn't true." << endl;
                        getchar();
                        cout << ANSI_COLOR_RESET"'Well, they must have a good son to sent him off into" << endl;
                        cout << "another village by himself,' the lady replies with a smile, walking off." << endl;
                    }
                    if (choice == 'B' && pelement == 'd') {
                        choice = 'b';
                        getchar();
                        cout << ANSI_COLOR_PURPLE"'They're at another village,' you reply, knowing good" << endl;
                        cout << "and well that wasn't true." << endl;
                        getchar();
                        cout << ANSI_COLOR_RESET"'Well, they must have a good son to sent him off into" << endl;
                        cout << "another village by himself,' the lady replies with a smile, walking off." << endl;
                    }
                    if (choice == 'B' && pelement == 'l') {
                        choice = 'b';
                        getchar();
                        cout << ANSI_COLOR_RESET"'They're at another village,' you reply, knowing good" << endl;
                        cout << "and well that wasn't true." << endl;
                        getchar();
                        cout << ANSI_COLOR_RESET"'Well, they must have a good son to sent him off into" << endl;
                        cout << "another village by himself,' the lady replies with a smile, walking off." << endl;
                    }
                } while (choice == ' ' ||
                         choice == 'c' ||
                         choice == 'd' ||
                         choice == 'e' ||
                         choice == 'f' ||
                         choice == 'g' ||
                         choice == 'h' ||
                         choice == 'i' ||
                         choice == 'j' ||
                         choice == 'k' ||
                         choice == 'l' ||
                         choice == 'm' ||
                         choice == 'n' ||
                         choice == 'o' ||
                         choice == 'p' ||
                         choice == 'q' ||
                         choice == 'r' ||
                         choice == 's' ||
                         choice == 't' ||
                         choice == 'u' ||
                         choice == 'v' ||
                         choice == 'w' ||
                         choice == 'x' ||
                         choice == 'y' ||
                         choice == 'z' ||
                         choice == 'C' ||
                         choice == 'D' ||
                         choice == 'E' ||
                         choice == 'F' ||
                         choice == 'G' ||
                         choice == 'H' ||
                         choice == 'I' ||
                         choice == 'J' ||
                         choice == 'K' ||
                         choice == 'L' ||
                         choice == 'M' ||
                         choice == 'N' ||
                         choice == 'O' ||
                         choice == 'P' ||
                         choice == 'Q' ||
                         choice == 'R' ||
                         choice == 'S' ||
                         choice == 'T' ||
                         choice == 'U' ||
                         choice == 'V' ||
                         choice == 'W' ||
                         choice == 'X' ||
                         choice == 'Y' ||
                         choice == 'Z');
            }
            getchar();
            cout << "You look down at your clothes, which you don't remember putting on," << endl;
            cout << "realizing that there's a bit of dirt on them." << endl;
            getchar();
            cout << "That may explain why all the villagers were watching you as you" << endl;
            cout << "came in..." << endl;
            getchar();
        } if (pweight=='f') {
            cout << "Some of the villagers watch you as you walk" << endl;
            cout << "into the village, however, most of them" << endl;
            cout << "turn back to what they were doing." << endl;
            getchar();
            if (page == 't') {
                cout << "A lady comes up to you." << endl;
                getchar();
                cout << "Excuse me sir, where are your parents?" << endl;
                getchar();
                do {
                    cout << "Respond with one of the following:" << endl;
                    cout << ANSI_TEXT_UNDERLINE << "a" << ANSI_COLOR_RESET ": I don't have parents..." << endl;
                    cout << ANSI_TEXT_UNDERLINE << "b" << ANSI_COLOR_RESET ": They're at another village" << endl;
                    cin >> choice;

                    if (choice == 'a' && pelement == 'f') {
                        getchar();
                        cout << ANSI_COLOR_RED"'I don't have parents...', you respond." << endl;
                        getchar();
                        cout << ANSI_COLOR_RESET"'Oh, well, sorry to hear that...', the lady says, then walks away."
                             << endl;
                    }
                    if (choice == 'a' && pelement == 'w') {
                        getchar();
                        cout << ANSI_COLOR_BLUE"'I don't have parents...', you respond." << endl;
                        getchar();
                        cout << ANSI_COLOR_RESET"'Oh, well, sorry to hear that...', the lady says, then walks away."
                             << endl;
                    }
                    if (choice == 'a' && pelement == 'e') {
                        getchar();
                        cout << ANSI_COLOR_YELLOW"'I don't have parents...', you respond." << endl;
                        getchar();
                        cout << ANSI_COLOR_RESET"'Oh, well, sorry to hear that...', the lady says, then walks away."
                             << endl;
                    }
                    if (choice == 'a' && pelement == 'i') {
                        getchar();
                        cout << ANSI_COLOR_CYAN"'I don't have parents...', you respond." << endl;
                        getchar();
                        cout << ANSI_COLOR_RESET"'Oh, well, sorry to hear that...', the lady says, then walks away."
                             << endl;
                    }
                    if (choice == 'a' && pelement == 'd') {
                        getchar();
                        cout << ANSI_COLOR_PURPLE"'I don't have parents...', you respond." << endl;
                        getchar();
                        cout << ANSI_COLOR_RESET"'Oh, well, sorry to hear that...', the lady says, then walks away."
                             << endl;
                    }
                    if (choice == 'a' && pelement == 'l') {
                        getchar();
                        cout << ANSI_COLOR_RESET"'I don't have parents...', you respond." << endl;
                        getchar();
                        cout << ANSI_COLOR_RESET"'Oh, well, sorry to hear that...', the lady says, then walks away."
                             << endl;
                    }
                    if (choice == 'b' && pelement == 'f') {
                        getchar();
                        cout << ANSI_COLOR_RED"'They're at another village,' you reply, knowing good" << endl;
                        cout << "and well that wasn't true." << endl;
                        getchar();
                        cout << ANSI_COLOR_RESET"'Well, they must have a good son to sent him off into" << endl;
                        cout << "another village by himself,' the lady replies with a smile, walking off." << endl;
                    }
                    if (choice == 'b' && pelement == 'w') {
                        getchar();
                        cout << ANSI_COLOR_BLUE"'They're at another village,' you reply, knowing good" << endl;
                        cout << "and well that wasn't true." << endl;
                        getchar();
                        cout << ANSI_COLOR_RESET"'Well, they must have a good son to sent him off into" << endl;
                        cout << "another village by himself,' the lady replies with a smile, walking off." << endl;
                    }
                    if (choice == 'b' && pelement == 'e') {
                        getchar();
                        cout << ANSI_COLOR_YELLOW"'They're at another village,' you reply, knowing good" << endl;
                        cout << "and well that wasn't true." << endl;
                        getchar();
                        cout << ANSI_COLOR_RESET"'Well, they must have a good son to sent him off into" << endl;
                        cout << "another village by himself,' the lady replies with a smile, walking off." << endl;
                    }
                    if (choice == 'b' && pelement == 'i') {
                        getchar();
                        cout << ANSI_COLOR_CYAN"'They're at another village,' you reply, knowing good" << endl;
                        cout << "and well that wasn't true." << endl;
                        getchar();
                        cout << ANSI_COLOR_RESET"'Well, they must have a good son to sent him off into" << endl;
                        cout << "another village by himself,' the lady replies with a smile, walking off." << endl;
                    }
                    if (choice == 'b' && pelement == 'd') {
                        getchar();
                        cout << ANSI_COLOR_PURPLE"'They're at another village,' you reply, knowing good" << endl;
                        cout << "and well that wasn't true." << endl;
                        getchar();
                        cout << ANSI_COLOR_RESET"'Well, they must have a good son to sent him off into" << endl;
                        cout << "another village by himself,' the lady replies with a smile, walking off." << endl;
                    }
                    if (choice == 'b' && pelement == 'l') {
                        getchar();
                        cout << ANSI_COLOR_RESET"'They're at another village,' you reply, knowing good" << endl;
                        cout << "and well that wasn't true." << endl;
                        getchar();
                        cout << ANSI_COLOR_RESET"'Well, they must have a good son to sent him off into" << endl;
                        cout << "another village by himself,' the lady replies with a smile, walking off." << endl;
                    }
                    if (choice == 'A' && pelement == 'f') {
                        choice = 'a';
                        getchar();
                        cout << ANSI_COLOR_RED"'I don't have parents...', you respond." << endl;
                        getchar();
                        cout << ANSI_COLOR_RESET"'Oh, well, sorry to hear that...', the lady says, then walks away."
                             << endl;
                    }
                    if (choice == 'A' && pelement == 'w') {
                        choice = 'a';
                        getchar();
                        cout << ANSI_COLOR_BLUE"'I don't have parents...', you respond." << endl;
                        getchar();
                        cout << ANSI_COLOR_RESET"'Oh, well, sorry to hear that...', the lady says, then walks away."
                             << endl;
                    }
                    if (choice == 'A' && pelement == 'e') {
                        choice = 'a';
                        getchar();
                        cout << ANSI_COLOR_YELLOW"'I don't have parents...', you respond." << endl;
                        getchar();
                        cout << ANSI_COLOR_RESET"'Oh, well, sorry to hear that...', the lady says, then walks away."
                             << endl;
                    }
                    if (choice == 'A' && pelement == 'i') {
                        choice = 'a';
                        getchar();
                        cout << ANSI_COLOR_CYAN"'I don't have parents...', you respond." << endl;
                        getchar();
                        cout << ANSI_COLOR_RESET"'Oh, well, sorry to hear that...', the lady says, then walks away."
                             << endl;
                    }
                    if (choice == 'A' && pelement == 'd') {
                        choice = 'a';
                        getchar();
                        cout << ANSI_COLOR_PURPLE"'I don't have parents...', you respond." << endl;
                        getchar();
                        cout << ANSI_COLOR_RESET"'Oh, well, sorry to hear that...', the lady says, then walks away."
                             << endl;
                    }
                    if (choice == 'A' && pelement == 'l') {
                        choice = 'a';
                        getchar();
                        cout << ANSI_COLOR_RESET"'I don't have parents...', you respond." << endl;
                        getchar();
                        cout << ANSI_COLOR_RESET"'Oh, well, sorry to hear that...', the lady says, then walks away."
                             << endl;
                    }
                    if (choice == 'B' && pelement == 'f') {
                        choice = 'b';
                        getchar();
                        cout << ANSI_COLOR_RED"'They're at another village,' you reply, knowing good" << endl;
                        cout << "and well that wasn't true." << endl;
                        getchar();
                        cout << ANSI_COLOR_RESET"'Well, they must have a good son to sent him off into" << endl;
                        cout << "another village by himself,' the lady replies with a smile, walking off." << endl;
                    }
                    if (choice == 'B' && pelement == 'w') {
                        choice = 'b';
                        getchar();
                        cout << ANSI_COLOR_BLUE"'They're at another village,' you reply, knowing good" << endl;
                        cout << "and well that wasn't true." << endl;
                        getchar();
                        cout << ANSI_COLOR_RESET"'Well, they must have a good son to sent him off into" << endl;
                        cout << "another village by himself,' the lady replies with a smile, walking off." << endl;
                    }
                    if (choice == 'B' && pelement == 'e') {
                        choice = 'b';
                        getchar();
                        cout << ANSI_COLOR_YELLOW"'They're at another village,' you reply, knowing good" << endl;
                        cout << "and well that wasn't true." << endl;
                        getchar();
                        cout << ANSI_COLOR_RESET"'Well, they must have a good son to sent him off into" << endl;
                        cout << "another village by himself,' the lady replies with a smile, walking off." << endl;
                    }
                    if (choice == 'B' && pelement == 'i') {
                        choice = 'b';
                        getchar();
                        cout << ANSI_COLOR_CYAN"'They're at another village,' you reply, knowing good" << endl;
                        cout << "and well that wasn't true." << endl;
                        getchar();
                        cout << ANSI_COLOR_RESET"'Well, they must have a good son to sent him off into" << endl;
                        cout << "another village by himself,' the lady replies with a smile, walking off." << endl;
                    }
                    if (choice == 'B' && pelement == 'd') {
                        choice = 'b';
                        getchar();
                        cout << ANSI_COLOR_PURPLE"'They're at another village,' you reply, knowing good" << endl;
                        cout << "and well that wasn't true." << endl;
                        getchar();
                        cout << ANSI_COLOR_RESET"'Well, they must have a good son to sent him off into" << endl;
                        cout << "another village by himself,' the lady replies with a smile, walking off." << endl;
                    }
                    if (choice == 'B' && pelement == 'l') {
                        choice = 'b';
                        getchar();
                        cout << ANSI_COLOR_RESET"'They're at another village,' you reply, knowing good" << endl;
                        cout << "and well that wasn't true." << endl;
                        getchar();
                        cout << ANSI_COLOR_RESET"'Well, they must have a good son to sent him off into" << endl;
                        cout << "another village by himself,' the lady replies with a smile, walking off." << endl;
                    }
                } while (choice == ' ' ||
                         choice == 'c' ||
                         choice == 'd' ||
                         choice == 'e' ||
                         choice == 'f' ||
                         choice == 'g' ||
                         choice == 'h' ||
                         choice == 'i' ||
                         choice == 'j' ||
                         choice == 'k' ||
                         choice == 'l' ||
                         choice == 'm' ||
                         choice == 'n' ||
                         choice == 'o' ||
                         choice == 'p' ||
                         choice == 'q' ||
                         choice == 'r' ||
                         choice == 's' ||
                         choice == 't' ||
                         choice == 'u' ||
                         choice == 'v' ||
                         choice == 'w' ||
                         choice == 'x' ||
                         choice == 'y' ||
                         choice == 'z' ||
                         choice == 'C' ||
                         choice == 'D' ||
                         choice == 'E' ||
                         choice == 'F' ||
                         choice == 'G' ||
                         choice == 'H' ||
                         choice == 'I' ||
                         choice == 'J' ||
                         choice == 'K' ||
                         choice == 'L' ||
                         choice == 'M' ||
                         choice == 'N' ||
                         choice == 'O' ||
                         choice == 'P' ||
                         choice == 'Q' ||
                         choice == 'R' ||
                         choice == 'S' ||
                         choice == 'T' ||
                         choice == 'U' ||
                         choice == 'V' ||
                         choice == 'W' ||
                         choice == 'X' ||
                         choice == 'Y' ||
                         choice == 'Z');
            }
            getchar();
        }
        cout << "A quick walk around town shows that there are a few shops," << endl;
        cout << "an inn, a village square (well, what seems to be one), and" << endl;
        cout << "a board, filled with announcements, requests and a few" << endl;
        cout << "other things." << endl;
        getchar();
        firstv = false;
    village();
    }

void village(){
    cout << "Where are you going to go?" << endl;
    getchar();
    cout << "(s) = shop" << endl;
    cout << "(i) = inn" << endl;
    cout << "(v) = village square" << endl;
    cout << "(b) = board" << endl;
    cout << "(Any other character)"
            "\n= exit village" << endl;
    cin >> choice;
    if (choice == 's') {
        getchar();
        cout << "You head to one of the shops." << endl;
        if (gold < 1) {
            getchar();
            cout << "Unfortunately, you don't have any money to spend." << endl;
            getchar();
            if (pursenab) {
                cout << "Actually, you surprisingly have 40 gold in your pockets!" << endl;
                gold=40;
                getchar();
            }
        }
        if (gold >= 1) {
            do {
                cout << "What would you like to buy?" << endl;
                cout << "===========================" << endl;
                cout << "Name            Key   Price" << endl;
                cout << "---------------------------" << endl;
                cout << "Iron Sword      (a) = 10 g" << endl;
                cout << "Iron Gloves     (b) = 10 g" << endl;
                cout << "Iron Blaster    (c) = 10 g" << endl;
                cout << "Iron Cores (x)  (d) = ?? g" << endl;
                cout << "Iron Backpack   (e) = 25 g" << endl;
                cout << "Iron Armor      (f) = 50 g" << endl;
                cout << "===========================" << endl;
                cout << "Enter an item's key to view it's information." << endl;
                cout << "Enter 'z' to exit the shop." << endl;
                cin >> choice;

                if (choice == 'a') {
                    do {
                    cout << "Iron Sword" << endl;
                    cout << "==========" << endl;
                    if (pclass != 's') {
                        cout << "No one in your party is a Swordsman" << endl;
                        cout << "Enter 'z' to go back to exit the shop." << endl;
                        cin >> choice;
                        if (choice=='z') {
                            return village();
                        }
                    }
                    if (pclass == 's') {
                        cout << "Damage  = 10" << endl;
                        cout << "Defense = N/A" << endl;
                        cout << "A regular Iron Sword... What else"
                                "\ndo you expect?" << endl;
                        cout << "Price = 10 gold" << endl;
                        cout << "Gold  = " << gold << " gold" << endl;
                        cout << "===========================" << endl;
                        cout << "Enter 'y' to buy this." << endl;
                        cout << "Enter 'z' to exit the shop" << endl;
                        cin >> choice;
                        if (choice=='y') {
                            cout << "Are you sure? (y/n)" << endl;
                            cin >> choice;
                            if (choice=='y' && gold >= 10) {
                                pweapon=11;
                                gold=gold-10;
                                cout << "Thank you for your purchase!" << endl;
                                getchar();
                                cout << "Gold left: " << gold << endl;
                                getchar();
                            }
                            if (choice=='y' && gold < 10) {
                                cout << "I'm sorry, you do not have"
                                        "\nenough gold for this item." << endl;
                                getchar();
                            }
                        }
                    }} while (choice==' ' ||
                              choice=='a' ||
                              choice=='b' ||
                              choice=='c' ||
                              choice=='d' ||
                              choice=='e' ||
                              choice=='f' ||
                              choice=='g' ||
                              choice=='h' ||
                              choice=='i' ||
                              choice=='j' ||
                              choice=='k' ||
                              choice=='l' ||
                              choice=='m' ||
                              choice=='n' ||
                              choice=='o' ||
                              choice=='p' ||
                              choice=='q' ||
                              choice=='r' ||
                              choice=='s' ||
                              choice=='t' ||
                              choice=='u' ||
                              choice=='v' ||
                              choice=='w' ||
                              choice=='x' ||
                              choice=='A' ||
                              choice=='B' ||
                              choice=='C' ||
                              choice=='D' ||
                              choice=='E' ||
                              choice=='F' ||
                              choice=='G' ||
                              choice=='H' ||
                              choice=='I' ||
                              choice=='J' ||
                              choice=='K' ||
                              choice=='L' ||
                              choice=='M' ||
                              choice=='N' ||
                              choice=='O' ||
                              choice=='P' ||
                              choice=='Q' ||
                              choice=='R' ||
                              choice=='S' ||
                              choice=='T' ||
                              choice=='U' ||
                              choice=='V' ||
                              choice=='W' ||
                              choice=='X' );}
                if (choice == 'b') {
                    do {
                        cout << "Iron Gloves" << endl;
                        cout << "==========" << endl;
                        if (pclass != 'f') {
                            cout << "No one in your party is a Fighter" << endl;
                            cout << "Enter 'z' to go back to exit the shop." << endl;
                            cin >> choice;
                            if (choice=='z') {
                                continue;
                            }
                        }
                        if (pclass == 'f') {
                            cout << "Damage  = 10" << endl;
                            cout << "Defense = 1" << endl;
                            cout << "A pair of Iron Gloves. Good for beating"
                                    "\nbeating up bullies!" << endl;
                            cout << "Price = 10 gold" << endl;
                            cout << "Gold  = " << gold << " gold" << endl;
                            cout << "===========================" << endl;
                            cout << "Enter 'y' to buy this." << endl;
                            cout << "Enter 'z' to go back to the main shop page." << endl;
                            cin >> choice;
                            if (choice=='y') {
                                cout << "Are you sure? (y/n)" << endl;
                                cin >> choice;
                                if (choice=='y' && gold >= 10) {
                                    pweapon=21;
                                    pdefense=pdefense+1;
                                    gold=gold-10;
                                    cout << "Thank you for your purchase!" << endl;
                                    getchar();
                                    cout << "Gold left: " << gold << endl;
                                    getchar();
                                }
                                if (choice=='y' && gold < 10) {
                                    cout << "I'm sorry, you do not have"
                                            "\nenough gold for this item." << endl;
                                    getchar();
                                }
                            }
                        }} while (choice==' ' ||
                                  choice=='a' ||
                                  choice=='b' ||
                                  choice=='c' ||
                                  choice=='d' ||
                                  choice=='e' ||
                                  choice=='f' ||
                                  choice=='g' ||
                                  choice=='h' ||
                                  choice=='i' ||
                                  choice=='j' ||
                                  choice=='k' ||
                                  choice=='l' ||
                                  choice=='m' ||
                                  choice=='n' ||
                                  choice=='o' ||
                                  choice=='p' ||
                                  choice=='q' ||
                                  choice=='r' ||
                                  choice=='s' ||
                                  choice=='t' ||
                                  choice=='u' ||
                                  choice=='v' ||
                                  choice=='w' ||
                                  choice=='x' ||
                                  choice=='A' ||
                                  choice=='B' ||
                                  choice=='C' ||
                                  choice=='D' ||
                                  choice=='E' ||
                                  choice=='F' ||
                                  choice=='G' ||
                                  choice=='H' ||
                                  choice=='I' ||
                                  choice=='J' ||
                                  choice=='K' ||
                                  choice=='L' ||
                                  choice=='M' ||
                                  choice=='N' ||
                                  choice=='O' ||
                                  choice=='P' ||
                                  choice=='Q' ||
                                  choice=='R' ||
                                  choice=='S' ||
                                  choice=='T' ||
                                  choice=='U' ||
                                  choice=='V' ||
                                  choice=='W' ||
                                  choice=='X' );}

                        if (choice == 'c') {
                            do {
                            cout << "Iron Blaster" << endl;
                            cout << "==========" << endl;
                            if (pclass != 'b') {
                                cout << "No one in your party is a Blaster" << endl;
                                cout << "Enter 'z' to go back to exit the shop." << endl;
                                cin >> choice;
                                if (choice=='z') {
                                    continue;
                                }
                            }
                            if (pclass == 'b') {
                                cout << "Damage Multiplier  = 1x" << endl;
                                cout << "Defense            = N/A" << endl;
                                cout << "Don't ask me how someone managed to"
                                        "\nmake a blaster out of iron, but it"
                                        "\nworks!" << endl;
                                cout << "Price = 10 gold" << endl;
                                cout << "Gold  = " << gold << " gold" << endl;
                                cout << "===========================" << endl;
                                cout << "Enter 'y' to buy this." << endl;
                                cout << "Enter 'z' to go back to the main shop page." << endl;
                                cin >> choice;
                                if (choice=='y') {
                                    cout << "Are you sure? (y/n)" << endl;
                                    cin >> choice;
                                    if (choice=='y' && gold >= 10) {
                                        pweapon=31;
                                        gold=gold-10;
                                        cout << "Thank you for your purchase!" << endl;
                                        getchar();
                                        cout << "Gold left: " << gold << endl;
                                        getchar();
                                    }
                                    if (choice=='y' && gold < 10) {
                                        cout << "I'm sorry, you do not have"
                                                "\nenough gold for this item." << endl;
                                        getchar();
                                    }
                                }
                            }
                        } while (choice==' ' ||
                                  choice=='a' ||
                                  choice=='b' ||
                                  choice=='c' ||
                                  choice=='d' ||
                                  choice=='e' ||
                                  choice=='f' ||
                                  choice=='g' ||
                                  choice=='h' ||
                                  choice=='i' ||
                                  choice=='j' ||
                                  choice=='k' ||
                                  choice=='l' ||
                                  choice=='m' ||
                                  choice=='n' ||
                                  choice=='o' ||
                                  choice=='p' ||
                                  choice=='q' ||
                                  choice=='r' ||
                                  choice=='s' ||
                                  choice=='t' ||
                                  choice=='u' ||
                                  choice=='v' ||
                                  choice=='w' ||
                                  choice=='x' ||
                                  choice=='A' ||
                                  choice=='B' ||
                                  choice=='C' ||
                                  choice=='D' ||
                                  choice=='E' ||
                                  choice=='F' ||
                                  choice=='G' ||
                                  choice=='H' ||
                                  choice=='I' ||
                                  choice=='J' ||
                                  choice=='K' ||
                                  choice=='L' ||
                                  choice=='M' ||
                                  choice=='N' ||
                                  choice=='O' ||
                                  choice=='P' ||
                                  choice=='Q' ||
                                  choice=='R' ||
                                  choice=='S' ||
                                  choice=='T' ||
                                  choice=='U' ||
                                  choice=='V' ||
                                  choice=='W' ||
                                  choice=='X' );}
                        if (choice == 'd') {
                            do {
                            cout << "Iron Cores" << endl;
                            cout << "==========" << endl;
                            if (pclass != 'b') {
                                cout << "No one in your party is a Blaster" << endl;
                                cout << "Enter 'z' to go back to exit the shop." << endl;
                                cin >> choice;
                                if (choice=='z') {
                                    continue;
                                }
                            }
                            if (pclass == 'b') {
                                cout << "Damage       = 10" << endl;
                                cout << "Defense      = N/A" << endl;
                                cout << "Regeneration = 3 turns" << endl;
                                cout << "Iron cores for your blaster. They"
                                        "\nregenerate after three turns, but do a"
                                        "\ngood bit of damage." << endl;
                                cout << "Price = 1 per core" << endl;
                                cout << "Gold  = " << gold << " gold" << endl;
                                cout << "===========================" << endl;
                                cout << "Enter 'y' to buy this." << endl;
                                cout << "Enter 'z' to go back to the main shop page." << endl;
                                cin >> choice;
                                if (choice=='y') {
                                    cout << "How many do you want to buy?" << endl;
                                    cout << "You can currently buy up to " << pcoremax << " cores." << endl;
                                    cin >> count;
                                    if (count > pcoremax) {
                                        count = pcoremax;
                                    }
                                    cout << count << " cores will cost you " << 1 * count << " gold." << endl;
                                    cout << "Are you sure you want to buy this many?" << endl;
                                    if (choice=='y' && gold >= (1 * count)) {
                                        gold=gold - (1 * count);
                                        pcore = count;
                                        pcoret=1;
                                        cout << "Thank you for your purchase!" << endl;
                                        getchar();
                                        cout << "Gold left: " << gold << endl;
                                        getchar();
                                    }
                                    if (choice=='y' && gold < (1*count)) {
                                        cout << "I'm sorry, you do not have"
                                                "\nenough gold for this item." << endl;
                                        getchar();
                                    }
                                }
                            }
                        } while (choice==' ' ||
                                  choice=='a' ||
                                  choice=='b' ||
                                  choice=='c' ||
                                  choice=='d' ||
                                  choice=='e' ||
                                  choice=='f' ||
                                  choice=='g' ||
                                  choice=='h' ||
                                  choice=='i' ||
                                  choice=='j' ||
                                  choice=='k' ||
                                  choice=='l' ||
                                  choice=='m' ||
                                  choice=='n' ||
                                  choice=='o' ||
                                  choice=='p' ||
                                  choice=='q' ||
                                  choice=='r' ||
                                  choice=='s' ||
                                  choice=='t' ||
                                  choice=='u' ||
                                  choice=='v' ||
                                  choice=='w' ||
                                  choice=='x' ||
                                  choice=='A' ||
                                  choice=='B' ||
                                  choice=='C' ||
                                  choice=='D' ||
                                  choice=='E' ||
                                  choice=='F' ||
                                  choice=='G' ||
                                  choice=='H' ||
                                  choice=='I' ||
                                  choice=='J' ||
                                  choice=='K' ||
                                  choice=='L' ||
                                  choice=='M' ||
                                  choice=='N' ||
                                  choice=='O' ||
                                  choice=='P' ||
                                  choice=='Q' ||
                                  choice=='R' ||
                                  choice=='S' ||
                                  choice=='T' ||
                                  choice=='U' ||
                                  choice=='V' ||
                                  choice=='W' ||
                                  choice=='X' );}
                    if (choice == 'e') {
                        do {
                            cout << "Iron Backpack" << endl;
                            cout << "==========" << endl;
                            if (pclass != 'b') {
                                cout << "No one in your party is a Blaster" << endl;
                                cout << "Enter 'z' to go back to exit the shop." << endl;
                                cin >> choice;
                                if (choice=='z') {
                                    continue;
                                }
                            }
                            if (pclass == 'b') {
                                cout << "Damage  = 1-5" << endl;
                                cout << "Defense = 1" << endl;
                                cout << "Storage = 40" << endl;
                                cout << "A backpack used to hold blaster cores, and"
                                        "\nprotect your back." << endl;
                                cout << "Price = 25 gold" << endl;
                                cout << "Gold  = " << gold << " gold" << endl;
                                cout << "===========================" << endl;
                                cout << "Enter 'y' to buy this." << endl;
                                cout << "Enter 'z' to go back to the main shop page." << endl;
                                cin >> choice;
                                if (choice=='y') {
                                    cout << "Are you sure? (y/n)" << endl;
                                    cin >> choice;
                                    if (choice=='y' && gold >= 25) {
                                        pcoremax=10;
                                        pdefense=pdefense+1;
                                        gold=gold-25;
                                        cout << "Thank you for your purchase!" << endl;
                                        getchar();
                                        cout << "Gold left: " << gold << endl;
                                        getchar();
                                    }
                                    if (choice=='y' && gold < 25) {
                                        cout << "I'm sorry, you do not have"
                                                "\nenough gold for this item." << endl;
                                        getchar();
                                    }
                            }
                        }} while (choice==' ' ||
                                  choice=='a' ||
                                  choice=='b' ||
                                  choice=='c' ||
                                  choice=='d' ||
                                  choice=='e' ||
                                  choice=='f' ||
                                  choice=='g' ||
                                  choice=='h' ||
                                  choice=='i' ||
                                  choice=='j' ||
                                  choice=='k' ||
                                  choice=='l' ||
                                  choice=='m' ||
                                  choice=='n' ||
                                  choice=='o' ||
                                  choice=='p' ||
                                  choice=='q' ||
                                  choice=='r' ||
                                  choice=='s' ||
                                  choice=='t' ||
                                  choice=='u' ||
                                  choice=='v' ||
                                  choice=='w' ||
                                  choice=='x' ||
                                  choice=='A' ||
                                  choice=='B' ||
                                  choice=='C' ||
                                  choice=='D' ||
                                  choice=='E' ||
                                  choice=='F' ||
                                  choice=='G' ||
                                  choice=='H' ||
                                  choice=='I' ||
                                  choice=='J' ||
                                  choice=='K' ||
                                  choice=='L' ||
                                  choice=='M' ||
                                  choice=='N' ||
                                  choice=='O' ||
                                  choice=='P' ||
                                  choice=='Q' ||
                                  choice=='R' ||
                                  choice=='S' ||
                                  choice=='T' ||
                                  choice=='U' ||
                                  choice=='V' ||
                                  choice=='W' ||
                                  choice=='X' );}
                    if (choice == 'f') {
                        do {
                            cout << "Iron Armor" << endl;
                            cout << "==========" << endl;
                            cout << "Damage  = N/A" << endl;
                            cout << "Defense = 5" << endl;
                            cout << "Standard Iron Armor. Pretty durable, and"
                                    "\nkeeps you from dying... for a while..." << endl;
                            cout << "Price = 50 gold" << endl;
                            cout << "Gold  = " << gold << " gold" << endl;
                            cout << "===========================" << endl;
                            cout << "Enter 'y' to buy this." << endl;
                            cout << "Enter 'z' to go back to exit the shop." << endl;
                            cin >> choice;
                            if (choice=='z') {
                                continue;
                            }
                        if (choice=='y') {
                            cout << "Are you sure? (y/n)" << endl;
                            cin >> choice;
                            if (choice=='y' && gold >= 50) {
                                parmor=1;
                                pdefense=pdefense+5;
                                gold=gold-50;
                                cout << "Thank you for your purchase!" << endl;
                                getchar();
                                cout << "Gold left: " << gold << endl;
                                getchar();
                            }
                            if (choice=='y' && gold < 50) {
                                cout << "I'm sorry, you do not have"
                                        "\nenough gold for this item." << endl;
                                getchar();
                            }
                        }
                        } while (choice==' ' ||
                             choice=='a' ||
                             choice=='b' ||
                             choice=='c' ||
                             choice=='d' ||
                             choice=='e' ||
                             choice=='f' ||
                             choice=='g' ||
                             choice=='h' ||
                             choice=='i' ||
                             choice=='j' ||
                             choice=='k' ||
                             choice=='l' ||
                             choice=='m' ||
                             choice=='n' ||
                             choice=='o' ||
                             choice=='p' ||
                             choice=='q' ||
                             choice=='r' ||
                             choice=='s' ||
                             choice=='t' ||
                             choice=='u' ||
                             choice=='v' ||
                             choice=='w' ||
                             choice=='x' ||
                             choice=='A' ||
                             choice=='B' ||
                             choice=='C' ||
                             choice=='D' ||
                             choice=='E' ||
                             choice=='F' ||
                             choice=='G' ||
                             choice=='H' ||
                             choice=='I' ||
                             choice=='J' ||
                             choice=='K' ||
                             choice=='L' ||
                             choice=='M' ||
                             choice=='N' ||
                             choice=='O' ||
                             choice=='P' ||
                             choice=='Q' ||
                             choice=='R' ||
                             choice=='S' ||
                             choice=='T' ||
                             choice=='U' ||
                             choice=='V' ||
                             choice=='W' ||
                             choice=='X' );}
                if (choice == 'z') {
                    return village();
                }
            } while (choice==' ' ||
                     choice=='g' ||
                     choice=='h' ||
                     choice=='i' ||
                     choice=='j' ||
                     choice=='k' ||
                     choice=='l' ||
                     choice=='m' ||
                     choice=='n' ||
                     choice=='o' ||
                     choice=='p' ||
                     choice=='q' ||
                     choice=='r' ||
                     choice=='s' ||
                     choice=='t' ||
                     choice=='u' ||
                     choice=='v' ||
                     choice=='w' ||
                     choice=='x' ||
                     choice=='y' ||
                     choice=='G' ||
                     choice=='H' ||
                     choice=='I' ||
                     choice=='J' ||
                     choice=='K' ||
                     choice=='L' ||
                     choice=='M' ||
                     choice=='N' ||
                     choice=='O' ||
                     choice=='P' ||
                     choice=='Q' ||
                     choice=='R' ||
                     choice=='S' ||
                     choice=='T' ||
                     choice=='U' ||
                     choice=='V' ||
                     choice=='W' ||
                     choice=='X' ||
                     choice=='Y' );
        }
    }
    if (choice=='i') {
        printf("You go to one of the inns...\n");
        if (pHP < pHPmax) {
            printf("Welcome to the Sleeper's Inn!\n");
            do {
                printf("One night = 10 gold\n");
                printf("Enter 'y' to stay for a night.\n");
                printf("Enter 'n' to exit the inn.\n");
                cin >> choice;
                if (choice == 'y' && gold >= 10) {
                    gold=gold-10;
                    printf("Have a great stay!\n");
                    cout << "Gold left: " << gold << " gold" << endl;
                    pHP=pHPmax;
                    getchar();
                    printf("You wake up refreshed...\n");
                    return village();
                }
                if (choice == 'y' && gold < 10) {
                    printf("I'm sorry, but you don't have"
                           "\nenough gold to stay a night.\n");
                }
            } while (choice==' ' ||
                     choice=='a' ||
                     choice=='b' ||
                     choice=='c' ||
                     choice=='d' ||
                     choice=='e' ||
                     choice=='f' ||
                     choice=='g' ||
                     choice=='h' ||
                     choice=='i' ||
                     choice=='j' ||
                     choice=='k' ||
                     choice=='l' ||
                     choice=='m' ||
                     choice=='o' ||
                     choice=='p' ||
                     choice=='q' ||
                     choice=='r' ||
                     choice=='s' ||
                     choice=='t' ||
                     choice=='u' ||
                     choice=='v' ||
                     choice=='w' ||
                     choice=='x' ||
                     choice=='z' ||
                     choice=='A' ||
                     choice=='B' ||
                     choice=='C' ||
                     choice=='D' ||
                     choice=='E' ||
                     choice=='F' ||
                     choice=='G' ||
                     choice=='H' ||
                     choice=='I' ||
                     choice=='J' ||
                     choice=='K' ||
                     choice=='L' ||
                     choice=='M' ||
                     choice=='O' ||
                     choice=='P' ||
                     choice=='Q' ||
                     choice=='R' ||
                     choice=='S' ||
                     choice=='T' ||
                     choice=='U' ||
                     choice=='V' ||
                     choice=='W' ||
                     choice=='X' ||
                     choice=='Z');
        }
        if (pHP==pHPmax) {
            getchar();
            cout << "However, you don't feel tired..." << endl;
            getchar();
        }
    }
    if (choice=='b') {
        cout << "You head back to the board..." << endl;
        getchar();
        cout << "There are a few quests on the board..." << endl;
        getchar();
        cout << "Unfortunately, there are no quests on"
                "\nthe board right now..." << endl;
    }
    if (choice=='v') {
        getchar();
        cout << "You head back to the village square..." << endl;
        getchar();
        cout << "When you get to the square, you see a"
                "\nboy shouting at a man with a mask"
                "\ncovering his face." << endl;
        getchar();
        cout << "'Give me my purse back!', the boy yells." << endl;
        getchar();
        cout << "'Make me give it back!', the masked"
                "\nthief responds." << endl;
        getchar();
        cout << "The boy lunges at the thief, however,"
                "\nhe's too slow." << endl;
        getchar();
        cout << "The thief dodges him, then takes off,"
                "\nknocking you over in the process." << endl;
        getchar();
        cout << "The boy gets back up, yells, 'Get back"
                "\nhere, you thief!', then takes off after him." << endl;
        getchar();
        pursenab=true;
        cout << "You get back up, then look in the direction the"
                "\nkid chased after, deciding that you have to go"
                "\nafter him." << endl;
        getchar();
        cout << "But you'll need gear first..." << endl;
        return village();
    }
    if (choice != 's' && choice != 'i' && choice != 'v' && choice != 'b') {
        return field();
    }
}

void forest() {
    if (firstf) {
        cout << "The forest doesn't smell like a forest.." << endl;
        getchar();
        cout << "Actually, it smells like death." << endl;
        getchar();
        cout << "Way to kill the mood..." << endl;
        getchar();
        cout << "This is how exploration works in this game:" << endl;
        getchar();
        cout << "You will be given some directions that you can go to." << endl;
        getchar();
        cout << "Either forward (w), backwards (s), left (a), or right"
                "\n(d) (Although not all the areas will have all four "
                "\ndirections)." << endl;
        getchar();
        cout << "Enter one of the letters to move in that direction." << endl;
        getchar();
        cout << "Some of the areas may have events." << endl;
        cout << "These can either be battles, finding loot, or"
                "\nchoices you can make." << endl;
        firstf = false;
        getchar();
    }
    do {
        cout << "Choose a direction to go in:" << endl;
        cout << "Forward (w)" << endl;
        cin >> choice;
        if (choice == 'w') {
            forest13();
        }
        if (choice == 'W') {
            forest13();
        }
    } while (choice == ' ' ||
             choice == 'a' ||
             choice == 'b' ||
             choice == 'c' ||
             choice == 'd' ||
             choice == 'e' ||
             choice == 'f' ||
             choice == 'g' ||
             choice == 'h' ||
             choice == 'i' ||
             choice == 'j' ||
             choice == 'k' ||
             choice == 'l' ||
             choice == 'm' ||
             choice == 'n' ||
             choice == 'o' ||
             choice == 'p' ||
             choice == 'q' ||
             choice == 'r' ||
             choice == 's' ||
             choice == 't' ||
             choice == 'u' ||
             choice == 'v' ||
             choice == 'x' ||
             choice == 'y' ||
             choice == 'z' ||
             choice == 'A' ||
             choice == 'B' ||
             choice == 'C' ||
             choice == 'D' ||
             choice == 'E' ||
             choice == 'F' ||
             choice == 'G' ||
             choice == 'H' ||
             choice == 'I' ||
             choice == 'J' ||
             choice == 'K' ||
             choice == 'L' ||
             choice == 'M' ||
             choice == 'N' ||
             choice == 'O' ||
             choice == 'P' ||
             choice == 'Q' ||
             choice == 'R' ||
             choice == 'S' ||
             choice == 'T' ||
             choice == 'U' ||
             choice == 'V' ||
             choice == 'X' ||
             choice == 'Y' ||
             choice == 'Z');
}

void forest13() {
    getchar();
    cout << "You end up getting ambushed by a small party of goblins!" << endl;
    getchar();
    goblinbat1();
    getchar();
    cout << "Choose a direction:" << endl;
    cout << "Forward (w)" << endl;
    cout << "Backward (Out of the forest) (s)" << endl;
    cout << "Left (a)" << endl;
    cout << "Right (d)" << endl;
}

void goblinbat1() {
    int goblin1HP = 10;
    int goblin2HP = 10;
    int goblin3HP = 10;

    if (firstb) {
        cout << "This how battling works in the game:" << endl;
        getchar();
        cout << "You will have to choose between one"
                "\nof the following every time it's"
                "\nyour turn:" << endl;
        getchar();
        cout << "Attack  (a)" << endl;
        getchar();
        cout << "Special (w)" << endl;
        getchar();
        cout << "Item    (d)" << endl;
        getchar();
        cout << "Other   (s)" << endl;
        getchar();
        cout << "\nAttack will do a normal attack to"
                "\nthe enemy you choose by entering a"
                "\ncertain button" << endl;
        getchar();
        cout << "Special will attack an enemy (or"
                "\nsometimes the whole enemy party)"
                "\nusing your element or some other"
                "\nform of magic." << endl;
        getchar();
        cout << "Item will allow you to use an item"
                "\nthat can heal you, raise stats, or"
                "\neven give your party certain "
                "\neffects" << endl;
        getchar();
        cout << "Other does... well... other stuff." << endl;
        getchar();
        cout << "You can run away from a battle (in most cases), or you can defend yourself and stop taking damage."
             << endl;
        getchar();
        firstb = false;
    }
    do {
        if (pname != " ") {
            cout << pname << "'s turn" << endl;
            cout << "HP: " << pHP << endl;
            cout << "Attack  (a)" << endl;
            cout << "Special (w)" << endl;
            cout << "Item    (d)" << endl;
            cout << "Other   (s)" << endl;
            cin >> choice;
            if (choice == 'a') {
                cout << "Select target" << endl;
                if (goblin1HP > 0) {
                    cout << "Goblin 1 (a)" << endl;
                    cout << "HP: " << goblin1HP << endl;
                }
                if (goblin2HP > 0) {
                    cout << "Goblin 2 (b)" << endl;
                    cout << "HP: " << goblin2HP << endl;
                }
                if (goblin3HP > 0) {
                    cout << "Goblin 3 (c)" << endl;
                    cout << "HP: " << goblin3HP << endl;
                }
                cin >> choice;
                if (choice == 'a') {
                    if (pweapon == 11) {
                        getchar();
                        cout << "You struck Goblin 1 with your sword." << endl;
                        getchar();
                        goblin1HP = goblin1HP - 10;
                        cout << "Goblin 1 took 10 damage." << endl;
                        getchar();
                        if (goblin1HP <= 0) {
                            cout << "Goblin 1 is now dead" << endl;
                            getchar();
                        }
                        else if (goblin1HP > 0) {
                            cout << "Goblin 1 shanked you with a dagger." << endl;
                            getchar();
                            pHP=pHP-5;
                            cout << "You took 5 damage." << endl;
                            getchar();
                        }
                        if (goblin2HP > 0) {
                            cout << "Goblin 2 punched you in the gut." << endl;
                            getchar();
                            pHP=pHP-2;
                            cout << "You took 2 damage" << endl;
                            getchar();
                        }
                        if (goblin3HP > 0) {
                            cout << "Goblin 3 punched you in the gut." << endl;
                            getchar();
                            pHP=pHP-2;
                            cout << "You took 2 damage" << endl;
                            getchar();
                        }
                    } else if (pweapon == 21) {
                        cout << "You gave Goblin 1 good punch to the face." << endl;
                        goblin1HP = goblin1HP - 10;
                        cout << "Goblin 1 took 10 damage." << endl;
                        if (goblin1HP == 0) {
                            cout << "Goblin 1 is now dead" << endl;
                        }
                        else if (goblin1HP > 0) {
                            cout << "Goblin 1 shanked you with a dagger." << endl;
                            getchar();
                            pHP=pHP-5;
                            cout << "You took 5 damage." << endl;
                        }
                        if (goblin2HP > 0) {
                            cout << "Goblin 2 punched you in the gut." << endl;
                            getchar();
                            pHP=pHP-2;
                            cout << "You took 2 damage" << endl;
                        }
                        if (goblin3HP > 0) {
                            cout << "Goblin 3 punched you in the gut." << endl;
                            getchar();
                            pHP=pHP-2;
                            cout << "You took 2 damage" << endl;
                        }
                    } else if (pweapon == 31) {
                        pcore = pcore - 1;
                        cout << "You have " << pcore << " cores left." << endl;
                        getchar();
                        cout << "You charged up your blaster...." << endl;
                        getchar();
                        cout << "Then BOOOOM!" << endl;
                        getchar();
                        cout << "You shot a beam of raw energy at Goblin 1" << endl;
                        if (pcoret == 1) {
                            goblin1HP = goblin1HP - (1 * 10);
                            cout << "Goblin 1 took 10 damage." << endl;
                        }
                        if (goblin1HP <= 0) {
                            cout << "Goblin 1 is now dead" << endl;
                        }
                        else if (goblin1HP > 0) {
                            cout << "Goblin 1 shanked you with a dagger." << endl;
                            getchar();
                            pHP=pHP-5;
                            cout << "You took 5 damage." << endl;
                        }
                        if (goblin2HP > 0) {
                            cout << "Goblin 2 punched you in the gut." << endl;
                            getchar();
                            pHP=pHP-2;
                            cout << "You took 2 damage" << endl;
                        }
                        if (goblin3HP > 0) {
                            cout << "Goblin 3 punched you in the gut." << endl;
                            getchar();
                            pHP=pHP-2;
                            cout << "You took 2 damage" << endl;
                        }
                    }
                }
            }
            if (choice == 'b') {
                if (pweapon == 11) {
                    cout << "You struck Goblin 2 with your sword." << endl;
                    goblin2HP = goblin2HP - 10;
                    cout << "Goblin 2 took 10 damage." << endl;
                    if (goblin2HP <= 0) {
                        cout << "Goblin 2 is now dead" << endl;
                    }
                    else if (goblin2HP>0) {
                        cout << "Goblin 2 punched you in the gut." << endl;
                        getchar();
                        pHP=pHP-2;
                        cout << "You took 2 damage." << endl;
                    }
                    if (goblin1HP > 0) {
                        cout << "Goblin 1 shanked you with a dagger." << endl;
                        getchar();
                        pHP=pHP-5;
                        cout << "You took 5 damage" << endl;
                    }
                    if (goblin3HP > 0) {
                        cout << "Goblin 3 punched you in the gut." << endl;
                        getchar();
                        pHP=pHP-2;
                        cout << "You took 2 damage" << endl;
                    }
                }
                if (pweapon == 21) {
                    cout << "You gave Goblin 2 good punch to the face." << endl;
                    goblin2HP = goblin2HP - 10;
                    cout << "Goblin 2 took 10 damage." << endl;
                    if (goblin2HP <= 0) {
                        cout << "Goblin 2 is now dead" << endl;

                    }
                    else if (goblin2HP>0) {
                        cout << "Goblin 2 punched you in the gut." << endl;
                        getchar();
                        pHP=pHP-2;
                        cout << "You took 2 damage." << endl;
                    }
                    if (goblin1HP > 0) {
                        cout << "Goblin 1 shanked you with a dagger." << endl;
                        getchar();
                        pHP=pHP-5;
                        cout << "You took 5 damage" << endl;
                    }
                    if (goblin3HP > 0) {
                        cout << "Goblin 3 punched you in the gut." << endl;
                        getchar();
                        pHP=pHP-2;
                        cout << "You took 2 damage" << endl;
                    }
                }
                if (pweapon == 31) {
                    pcore = pcore - 1;
                    cout << "You have " << pcore << " cores left." << endl;
                    getchar();
                    cout << "You charged up your blaster...." << endl;
                    getchar();
                    cout << "Then BOOOOM!" << endl;
                    getchar();
                    cout << "You shot a beam of raw energy at Goblin 2" << endl;
                    if (pcoret == 1) {
                        goblin2HP = goblin2HP - (1 * 10);
                        cout << "Goblin 2 took 10 damage." << endl;
                    }
                    if (goblin2HP <= 0) {
                        cout << "Goblin 2 is now dead" << endl;
                    }
                    else if (goblin2HP>0) {
                        cout << "Goblin 2 punched you in the gut." << endl;
                        getchar();
                        pHP=pHP-2;
                        cout << "You took 2 damage." << endl;
                    }
                    if (goblin1HP > 0) {
                        cout << "Goblin 1 shanked you with a dagger." << endl;
                        getchar();
                        pHP=pHP-5;
                        cout << "You took 5 damage" << endl;
                    }
                    if (goblin3HP > 0) {
                        cout << "Goblin 3 punched you in the gut." << endl;
                        getchar();
                        pHP=pHP-2;
                        cout << "You took 2 damage" << endl;
                    }
                }
            }
        }
        if (choice == 'c') {
            if (pweapon == 11) {
                cout << "You struck Goblin 3 with your sword." << endl;
                goblin3HP = goblin3HP - 10;
                cout << "Goblin 3 took 10 damage." << endl;
                if (goblin3HP <= 0) {
                    cout << "Goblin 3 is now dead" << endl;
                }
                else if (goblin3HP>0) {
                    cout << "Goblin 3 punched you in the gut." << endl;
                    getchar();
                    pHP=pHP-2;
                    cout << "You took 2 damage." << endl;
                }
                if (goblin1HP > 0) {
                    cout << "Goblin 1 shanked you with a dagger." << endl;
                    getchar();
                    pHP=pHP-5;
                    cout << "You took 5 damage" << endl;
                }
                if (goblin2HP > 0) {
                    cout << "Goblin 2 punched you in the gut." << endl;
                    getchar();
                    pHP=pHP-2;
                    cout << "You took 2 damage" << endl;
                }
            }
            if (pweapon == 21) {
                cout << "You gave Goblin 3 good punch to the face." << endl;
                goblin3HP = goblin3HP - 10;
                cout << "Goblin 3 took 10 damage." << endl;
                if (goblin3HP <= 0) {
                    cout << "Goblin 3 is now dead" << endl;
                }
                else if (goblin3HP>0) {
                    cout << "Goblin 3 punched you in the gut." << endl;
                    getchar();
                    pHP=pHP-2;
                    cout << "You took 2 damage." << endl;
                }
                if (goblin1HP > 0) {
                    cout << "Goblin 1 shanked you with a dagger." << endl;
                    getchar();
                    pHP=pHP-5;
                    cout << "You took 5 damage" << endl;
                }
                if (goblin2HP > 0) {
                    cout << "Goblin 2 punched you in the gut." << endl;
                    getchar();
                    pHP=pHP-2;
                    cout << "You took 2 damage" << endl;
                }
            }
            if (pweapon == 31) {
                pcore = pcore - 1;
                cout << "You have " << pcore << " cores left." << endl;
                getchar();
                cout << "You charged up your blaster...." << endl;
                getchar();
                cout << "Then BOOOOM!" << endl;
                getchar();
                cout << "You shot a beam of raw energy at Goblin 3" << endl;
                if (pcoret == 1) {
                    goblin3HP = goblin3HP - (1 * 10);
                    cout << "Goblin 3 took 10 damage." << endl;
                }
                if (goblin3HP <= 0) {
                    cout << "Goblin 3 is now dead" << endl;
                }
                else if (goblin3HP>0) {
                    cout << "Goblin 3 punched you in the gut." << endl;
                    getchar();
                    pHP=pHP-2;
                    cout << "You took 2 damage." << endl;
                }
                if (goblin1HP > 0) {
                    cout << "Goblin 1 shanked you with a dagger." << endl;
                    getchar();
                    pHP=pHP-5;
                    cout << "You took 5 damage" << endl;
                }
                if (goblin2HP > 0) {
                    cout << "Goblin 2 punched you in the gut." << endl;
                    getchar();
                    pHP=pHP-2;
                    cout << "You took 2 damage" << endl;
                }
            }
        }
        if (goblin1HP<=0 && goblin2HP<=0 && goblin3HP<=0) {
            cout << "You won!" << endl;
            getchar();
            cout << "Level " << plevel << endl;
            cout << "EXP: " << pexp << " + 6" << endl;
            cout << "Gold: " << gold << " + 1" << endl;
            pexp=pexp+6;
            if (pexp<=20) {
                plevel=2;
                levelup();
            }
        }
        if (pHP <=0) {
            cout << "GAME OVER..." << endl;
            getchar();
            forest13();
        }
    } while (goblin1HP > 0 ||
             goblin2HP > 0 ||
             goblin3HP > 0);
}
void levelup() {
    if (plevel==2) {
        pHPmax = 65;
        pHP = pHPmax;
        pdefense=pdefense+2;
    }
}

//Choice template
/*
   do {
        cout << " ( = ,  = )" << endl;
        cin >> choice;

        if (choice==' ') {
            cout << " " << endl;
            getchar();

        }
        if (choice==' ') {
            cout << " " << endl;
            getchar();

        }
        if (choice==' ') {
            choice=' ';
            cout << " " << endl;
            getchar();

        }
        if (choice==' ') {
            choice=' ';
            cout << " " << endl;
            getchar();

        }
    } while (choice==' ' ||
            choice=='a' ||
            choice=='b' ||
            choice=='c' ||
            choice=='d' ||
            choice=='e' ||
            choice=='f' ||
            choice=='g' ||
            choice=='h' ||
            choice=='i' ||
            choice=='j' ||
            choice=='k' ||
            choice=='l' ||
            choice=='m' ||
            choice=='n' ||
            choice=='o' ||
            choice=='p' ||
            choice=='q' ||
            choice=='r' ||
            choice=='s' ||
            choice=='t' ||
            choice=='u' ||
            choice=='v' ||
            choice=='w' ||
            choice=='x' ||
            choice=='y' ||
            choice=='z' ||
            choice=='A' ||
            choice=='B' ||
            choice=='C' ||
            choice=='D' ||
            choice=='E' ||
            choice=='F' ||
            choice=='G' ||
            choice=='H' ||
            choice=='I' ||
            choice=='J' ||
            choice=='K' ||
            choice=='L' ||
            choice=='M' ||
            choice=='N' ||
            choice=='O' ||
            choice=='P' ||
            choice=='Q' ||
            choice=='R' ||
            choice=='S' ||
            choice=='T' ||
            choice=='U' ||
            choice=='V' ||
            choice=='W' ||
            choice=='X' ||
            choice=='Y' ||
            choice=='Z');
 */