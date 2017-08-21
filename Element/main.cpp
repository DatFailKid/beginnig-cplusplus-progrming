#include <iostream>
#include <cstring>

#define ANSI_COLOR_RED     "\x1b[31m" //Use for negative events
#define ANSI_COLOR_GREEN   "\x1b[32m" //Use for positive events
#define ANSI_COLOR_CYAN    "\x1b[36m" //Use for any decisions
#define ANSI_COLOR_RESET   "\x1b[0m"
#define ANSI_COLOR_PURPLE "\x1b[35m"
#define ANSI_TEXT_BOLD     "\x1b[1m"
#define ANSI_TEXT_UNDERLINE   "\x1b[4m"
#define ANSI_COLOR_YELLOW   "\x1b[33m" //Use for any mentions of Gold
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

void village(); //Oakwood Village
void field();
void fvillage();

void menu();

char pname[15]="???";
char pgender;
char pweight;
char pelement;
char pclass;
char page;
int plevel=1;
int pexp=0;

int parmor=0; //The Player's armor
int pweapon=0; //The Player's weapon
int pcore=0; //How many Blaster cores a player is holding
int pcoret=0; //The type of cores the player is holding
int pcoremax=3; //The maximum amount of Blaster cores a player can hold at once
int paccess=0; //The Player's Accessory
int pdamage;
int pcrit;

//Basic Spells
bool fireball=false;    //"Small Fireball" Spell
bool spark=false;       //"Spark" Spell
bool swave=false;       //"Small Wave" Spell
bool shard=false;       //"Ice Shard" Spell
bool light=false;       //"Holy Light" Spell
bool dark=false;        //"Darkness" Spell

char choice;
int count;

float pHP=50;
int pHPmax=50;
int pdefense=0;
int pFP=0;     //Fire Points
int pFPmax=0;  //Max Fire Points
int pSP=0;     //Spark Points; However, SP is used to generally describe Spell Points
int pSPmax=0;  //Max Spark Points
int pAP=0;     //Aqua Points
int pAPmax=0;  //Max Aqua Points
int pIP=0;     //Ice Points
int pIPmax=0;  //Max Ice Points
int pLP=0;     //Light Points
int pLPmax=0;  //Max Light Points
int pVP=0;     //Void Points
int pVPmax=0;  //Max Void Points

int tealmush=0;     //Teal Mushroom; Restores 50 HP
int flampeach=0;    //Flaming Peach; Restore 10 Fire Points (FP)
int shinrock=0;     //Shiny Rock; Restores 10 Spark Points (SP)
int watbulb=0;      //Water Bulb; Restores 10 Aqua Points (AP)
int iceblos=0;      //Ice Blossom; Restores 10 Ice Points (IP)
int starbot=0;      //Star in a Bottle; Restores 10 Light Points (LP)
int bholebot=0;     //Black Hole in a Bottle; Restores 10 Void Points (VP)
int ltealmush=0;    //Large Teal Mushroom; Restores 30 of the party's HP
int mcrock=0;       //Small Multi-colored Rock; Restores 5 of the party's Spell Points (FP, SP, etc.)

int bagmax=10;
int bag=tealmush+flampeach+shinrock+watbulb+iceblos+starbot+bholebot+ltealmush+mcrock;

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
         cout <<                                   "compiler that can output defined colors, or consider choosing a"
                                                   "\ndifferent OS to run this on." ANSI_COLOR_RESET<< std::endl;
    getchar();
    title();
};

void title() {
    char command[10];
    char start[] = "start";
    char settings[] = "set";
    char credit[] = "cred";

    cout << ANSI_COLOR_RESET"Use Enter to progress through menus" << endl;
    cout << "Type one of the underlined following:" << endl;
    cout << ANSI_COLOR_GREEN << ANSI_TEXT_UNDERLINE "start" ANSI_COLOR_RESET << ": Start your adventure" << endl;
    cout << ANSI_COLOR_GREY << ANSI_TEXT_UNDERLINE "set" ANSI_COLOR_RESET << ": Settings, change stuff..." << endl;
    cout << ANSI_COLOR_RED << ANSI_TEXT_UNDERLINE "cred" ANSI_COLOR_RESET<< ": Credits" << endl;
    cout << ANSI_COLOR_CYAN << ANSI_TEXT_UNDERLINE "[Any other character]" ANSI_COLOR_RESET << ": Exit the game" << endl;
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
         * Mouse input on/off*/
    }
        if (strcmp(command, credit) == 0) {
            getchar();
            cout << ANSI_COLOR_RED "Credits" << endl;
            getchar();
            cout << "This text-based RPG was inspired by a few RPG's that I've loved." << endl;
            getchar();
            cout << ANSI_COLOR_RED << ANSI_TEXT_UNDERLINE "Super Mario RPG: Legend of the Seven Stars" << endl;
            cout << ANSI_COLOR_RED"Made by Square" << endl;
            cout << ANSI_COLOR_RED"Published by Nintendo" << endl;
            getchar();
            cout << "Oh yeah, by the way, Nintendo, you guys need to make a sequel." << endl;
            getchar();
            cout << "I'm serious." << endl;
            getchar();
            cout << ANSI_COLOR_RED << ANSI_TEXT_UNDERLINE "The 'Mario & Luigi' RPG series" << endl;
            cout << ANSI_COLOR_RED"Made by AlphaDream" << endl;
            cout << ANSI_COLOR_RED"Published by Nintendo" << endl;
            getchar();
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
    cout << "Here you can customize stuff that will alter your stor and stats." << endl;
    getchar();

    do {
        cout << ANSI_COLOR_YELLOW "Choose your character's gender!" << endl;
        getchar();
        cout << "(m) = Male" << endl;
        cout << "(f) = Female (-5 Heath Points; +5 Spell Points)" << endl;
        cin >> pgender;
        if (pgender=='f') {
            getchar();
            pHPmax=pHPmax-5;
            cout << ANSI_COLOR_CYAN"Gender = " << pgender << " (Female)" << endl;
            getchar();
            break;
        }
        if (pgender=='m') {
            getchar();
            cout << ANSI_COLOR_CYAN"Gender = " << pgender << " (Male)" << endl;
            getchar();
            break;
        }
        if (pgender=='F') {
            pgender='f';
            getchar();
            pHPmax=pHPmax-5;
            cout << ANSI_COLOR_CYAN"Gender = " << pgender << " (Female)" << endl;
            getchar();
            break;
        }
        if (pgender=='M') {
            pgender='m';
            getchar();
            cout << ANSI_COLOR_CYAN"Gender = " << pgender << " (Male)" << endl;
            getchar();
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
        cout << ANSI_COLOR_YELLOW "Choose your weight!" << endl;
        getchar();
        cout << "(f) = Feather-weight" << endl;
        cout << "(r) = Regular" << endl;
        cout << "(t) = Tank (+5 Defense; +5 HP; -5 SP)" << endl;
        cin >> pweight;
        if (pweight=='f') {
            getchar();
            cout << ANSI_COLOR_CYAN"Weight = " << pweight << " (Feather-weight)" << endl;
            getchar();
            break;
        }
        if (pweight=='r') {
            getchar();
            cout << ANSI_COLOR_CYAN"Weight = " << pweight << " (Regular)" << endl;
            getchar();
            break;
        }
        if (pweight=='t') {
            getchar();
            cout << ANSI_COLOR_CYAN"Weight = " << pweight << " (Tank)" << endl;
            getchar();
            pdefense=pdefense+5;
            pHPmax=pHPmax+5;
            pHP=pHPmax;
            break;
        }
        if (pweight=='F') {
            pweight='f';
            getchar();
            cout << ANSI_COLOR_CYAN"Weight = " << pweight << " (Feather-weight)" << endl;
            getchar();
            break;
        }
        if (pweight=='R') {
            pweight='r';
            getchar();
            cout << ANSI_COLOR_CYAN"Weight = " << pweight << " (Regular)" << endl;
            getchar();
            break;
        }
        if (pweight=='T') {
            pweight='t';
            getchar();
            cout << ANSI_COLOR_CYAN"Weight = " << pweight << " (Tank)" << endl;
            getchar();
            pdefense=pdefense+5;
            pHPmax=pHPmax+5;
            pHP=pHPmax;
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
            getchar();
            pFPmax=0;
            pFP=pFPmax;
            if (pgender=='f') {
                pFPmax=pFPmax+5;
                pFP=pFPmax;
            }
            if (pweight=='t') {
                pFPmax=pFPmax-5;
                pFP=pFPmax;
            }
            cout << ANSI_COLOR_RED"Element = " << pelement << " (Fire)" << endl;
            getchar();
            break;
        }
        if (pelement=='e') {
            getchar();
            pSPmax=0;
            pSP=pSPmax;
            if (pgender=='f') {
                pSPmax=pSPmax+5;
                pSP=pSPmax;
            }
            if (pweight=='t') {
                pSPmax=pSPmax-5;
                pSP=pSPmax;
            }
            cout << ANSI_COLOR_YELLOW"Element = " << pelement << " (Electricity)" << endl;
            getchar();
            break;
        }
        if (pelement=='w') {
            getchar();
            pAPmax=0;
            pAP=pAPmax;
            if (pgender=='f') {
                pAPmax=pAPmax+5;
                pAP=pAPmax;
            }
            if (pweight=='t') {
                pAPmax=pAPmax-5;
                pAP=pAPmax;
            }
            cout << ANSI_COLOR_BLUE"Element = " << pelement << " (Water)" << endl;
            getchar();
            break;
        }
        if (pelement=='i') {
            getchar();
            pIPmax=0;
            pIP=pIPmax;
            if (pgender=='f') {
                pIPmax=pIPmax+5;
                pIP=pIPmax;
            }
            if (pweight=='t') {
                pIPmax=pIPmax-5;
                pIP=pIPmax;
            }
            cout << ANSI_COLOR_CYAN"Element = " << pelement << " (Ice)" << endl;
            getchar();
            break;
        }
        if (pelement=='d') {
            getchar();
            pVPmax=0;
            pVP=pVPmax;
            if (pgender=='f') {
                pVPmax=pVPmax+5;
                pVP=pVPmax;
            }
            if (pweight=='t') {
                pVPmax=pVPmax-5;
                pVP=pVPmax;
            }
            cout << ANSI_COLOR_PURPLE"Element = " << pelement << " (Darkness)" << endl;
            getchar();
            break;
        }
        if (pelement=='l') {
            getchar();
            pLPmax=0;
            pLP=pLPmax;
            if (pgender=='f') {
                pLPmax=pLPmax+5;
                pLP=pLPmax;
            }
            if (pweight=='t') {
                pLPmax=pLPmax-5;
                pLP=pLPmax;
            }
            cout << ANSI_COLOR_RESET"Element = " << pelement << " (Light)" << endl;
            getchar();
            break;
        }
        if (pelement=='F') {
            pelement='f';
            getchar();
            pFPmax=0;
            pFP=pFPmax;
            if (pgender=='f') {
                pFPmax=pFPmax+5;
                pFP=pFPmax;
            }
            if (pweight=='t') {
                pFPmax=pFPmax-5;
                pFP=pFPmax;
            }
            cout << ANSI_COLOR_RED"Element = " << pelement << " (Fire)" << endl;
            getchar();
            break;
        }
        if (pelement=='E') {
            pelement='e';
            getchar();
            pSPmax=0;
            pSP=pSPmax;
            if (pgender=='f') {
                pSPmax=pSPmax+5;
                pSP=pSPmax;
            }
            if (pweight=='t') {
                pSPmax=pSPmax-5;
                pSP=pSPmax;
            }
            cout << ANSI_COLOR_YELLOW"Element = " << pelement << " (Electricity)" << endl;
            getchar();
            break;
        }
        if (pelement=='W') {
            pelement='w';
            getchar();
            pAPmax=0;
            pAP=pAPmax;
            if (pgender=='f') {
                pAPmax=pAPmax+5;
                pAP=pAPmax;
            }
            if (pweight=='t') {
                pAPmax=pAPmax-5;
                pAP=pAPmax;
            }
            cout << ANSI_COLOR_BLUE"Element = " << pelement << " (Water)" << endl;
            getchar();
            break;
        }
        if (pelement=='I') {
            pelement='i';
            getchar();
            pIPmax=0;
            pIP=pIPmax;
            if (pgender=='f') {
                pIPmax=pIPmax+5;
                pIP=pIPmax;
            }
            if (pweight=='t') {
                pIPmax=pIPmax-5;
                pIP=pIPmax;
            }
            cout << ANSI_COLOR_CYAN"Element = " << pelement << " (Ice)" << endl;
            getchar();
            break;
        }
        if (pelement=='D') {
            pelement='d';
            getchar();
            pVPmax=0;
            pVP=pVPmax;
            if (pgender=='f') {
                pVPmax=pVPmax+5;
                pVP=pVPmax;
            }
            if (pweight=='t') {
                pVPmax=pVPmax-5;
                pVP=pVPmax;
            }
            cout << ANSI_COLOR_PURPLE"Element = " << pelement << " (Darkness)" << endl;
            getchar();
            break;
        }
        if (pelement=='L') {
            pelement='l';
            getchar();
            pLPmax=0;
            pLP=pLPmax;
            if (pgender=='f') {
                pLPmax=pLPmax+5;
                pLP=pLPmax;
            }
            if (pweight=='t') {
                pLPmax=pLPmax-5;
                pLP=pLPmax;
            }
            cout << ANSI_COLOR_RESET"Element = " << pelement << " (Light)" << endl;
            getchar();
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
            getchar();
            cout << ANSI_COLOR_CYAN"Class = " << pclass << " (Fighter)" << endl;
            getchar();
            break;
        }
        if (pclass=='s') {
            getchar();
            cout << ANSI_COLOR_CYAN"Class = " << pclass << " (Swordsman)" << endl;
            getchar();
            break;
        }
        if (pclass=='b') {
            getchar();
            cout << ANSI_COLOR_CYAN"Class = " << pclass << " (Blaster)" << endl;
            getchar();
            break;
        }
        if (pclass=='F') {
            pclass='f';
            getchar();
            cout << ANSI_COLOR_CYAN"Class = " << pclass << " (Fighter)" << endl;
            getchar();
            break;
        }
        if (pclass=='S') {
            pclass='s';
            getchar();
            cout << ANSI_COLOR_CYAN"Class = " << pclass << " (Swordsman)" << endl;
            getchar();
            break;
        }
        if (pclass=='B') {
            pclass='b';
            getchar();
            cout << ANSI_COLOR_CYAN"Class = " << pclass << " (Blaster)" << endl;
            getchar();
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
        cout << ANSI_COLOR_YELLOW "Choose your character's age!" << endl;
        getchar();
        cout << "(a) = Adult" << endl;
        cout << "(t) = Teenager" << endl;
        cin >> page;
        if (page=='a') {
            getchar();
            cout << ANSI_COLOR_CYAN"Age = " << page << " (Adult)" << endl;
            getchar();
            break;
        }
        if (page=='t') {
            getchar();
            cout << ANSI_COLOR_CYAN"Age = " << page << " (Teenager)" << endl;
            getchar();
            break;
        }
        if (page=='A') {
            page='a';
            getchar();
            cout << ANSI_COLOR_CYAN"Age = " << page << " (Adult)" << endl;
            getchar();
            break;
        }
        if (page=='T') {
            page='t';
            getchar();
            cout << ANSI_COLOR_CYAN"Age = " << page << " (Teenager)" << endl;
            getchar();
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
        cout << ANSI_COLOR_GREEN"You manage to get yourself out of the crater and to the surface." << endl;
        getchar();
        cout << ANSI_COLOR_RESET"And thankfully, you didn't crash into the village nearby." << endl;
        getchar();
    }
    if (pweight=='f') {
        getchar();
        cout << "Thankfully, you're just falling fast enough that you can make a safe landing in the middle of some plains." << endl;
        getchar();

    }
    if (pweight=='r') {
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
        cout << ANSI_COLOR_GREEN "Your head flies up out of the ground, causing you to stagger backwards." << endl;
        getchar();
    }
    cout << ANSI_COLOR_RESET"You look around at the grasslands you've landed in." << endl;
    getchar();
    cout << "You see a heavy forest, and a village nearby." << endl;
    getchar();
    field();
}

void field() {
    do {
        cout << ANSI_COLOR_RESET"Choose a location to go to:" << endl;
        cout << "(v) = Oakwood Village" << endl;
        cout << "(f) = The Dead Forest" << endl;
        cout << "(q) = Menu" << endl;
        cin >> choice;
        if (choice=='q') {
            menu();
        }
        if (choice=='f') {
            if (!pursenab && firstf) {
                cout << ANSI_COLOR_CYAN"You approach the forest..." << endl;
                getchar();
                cout << "However, you quickly walk away, remembering you don't have any gear." << endl;
                getchar();
                return field();
            }
            if (pursenab && firstf) {
                cout << "You see the kid from earlier bolt into the forest." << endl;
                getchar();
                cout << ANSI_COLOR_CYAN"So you run after him..." << endl;
                getchar();
                forest();
            }
        }
        if (choice=='v') {
            cout << ANSI_COLOR_CYAN"You walk to the village..."<< ANSI_COLOR_RESET << endl;
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
                cout << ANSI_COLOR_CYAN"You approach the forest..." << endl;
                getchar();
                cout << "However, you quickly walk away, remembering you don't have any gear." << endl;
                getchar();
                return field();
            }
            if (pursenab && firstf) {
                cout << "You see the kid from earlier bolt into the forest." << endl;
                getchar();
                cout << ANSI_COLOR_CYAN"So you run after him..." << endl;
                getchar();
                forest();
            }
        }
        if (choice=='V') {
            choice='v';
            cout << ANSI_COLOR_CYAN"You walk to the village..." ANSI_COLOR_RESET << endl;
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
            cout << ANSI_COLOR_RESET"Some of the villagers watch you as you walk" << endl;
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
    getchar();
    do {
        cout << ANSI_COLOR_RESET "Where are you going to go?" << endl;
        getchar();
        cout << "(s) = shop" << endl;
        cout << "(i) = inn" << endl;
        cout << "(v) = village square" << endl;
        cout << "(b) = board" << endl;
        cout << "(q) = menu" << endl;
        cout << "(Any other character)"
                "\n= exit village" << endl;
        cin >> choice;
        if (choice == 'q') {
            menu();
        }
        if (choice == 's') {
            getchar();
            cout << ANSI_COLOR_CYAN"You head to one of the shops." << endl;
            if (gold < 1) {
                getchar();
                cout << ANSI_COLOR_RED"Unfortunately, you don't have any money to spend." << endl;
                getchar();
                if (pursenab) {
                    cout << ANSI_COLOR_GREEN"Actually, you surprisingly have 40 gold in your pockets!" << endl;
                    gold = 40;
                    getchar();
                }
            }
            if (gold >= 1) {
                do {
                    cout << ANSI_COLOR_RESET"What would you like to buy?" << endl;
                    cout << "===========================" << endl;
                    cout << "Name            Key   Price" << endl;
                    cout << "---------------------------" << endl;
                    cout << ANSI_COLOR_RESET"Iron Sword      (a) = " << ANSI_COLOR_YELLOW << "10 g" << endl;
                    cout << ANSI_COLOR_RESET"Iron Gloves     (b) = " << ANSI_COLOR_YELLOW << "10 g" << endl;
                    cout << ANSI_COLOR_RESET"Iron Blaster    (c) = " << ANSI_COLOR_YELLOW << "10 g" << endl;
                    cout << ANSI_COLOR_RESET"Iron Cores (x)  (d) = " << ANSI_COLOR_YELLOW << "?? g" << endl;
                    cout << ANSI_COLOR_RESET"Iron Backpack   (e) = " << ANSI_COLOR_YELLOW << "25 g" << endl;
                    cout << ANSI_COLOR_RESET"Small Backpack  (f) = " << ANSI_COLOR_YELLOW << "25 g" << endl;
                    cout << ANSI_COLOR_RESET"Iron Armor      (g) = " << ANSI_COLOR_YELLOW << "50 g" << endl;
                    cout << ANSI_COLOR_RESET"===========================" << endl;
                    cout << "Enter an item's key to view it's information." << endl;
                    cout << "Enter 'x' to exit the shop." << endl;
                    cin >> choice;

                    if (choice == 'a') {
                        do {
                            cout << "Iron Sword" << endl;
                            cout << "==========" << endl;
                            if (pclass != 's') {
                                cout << ANSI_COLOR_RED"No one in your party is a Swordsman" << endl;
                                cout << "Enter 'x' to go back to exit the shop." << endl;
                                cin >> choice;
                                if (choice == 'x') {
                                    continue;
                                }
                            }
                            if (pclass == 's') {
                                cout << "Damage  = 10" << endl;
                                cout << "Defense = N/A" << endl;
                                cout << "A regular Iron Sword... What else"
                                        "\ndo you expect?" << endl;
                                cout << "Price = " << ANSI_COLOR_YELLOW << "10 gold" << endl;
                                cout << ANSI_COLOR_RESET"Gold  = " << ANSI_COLOR_YELLOW << gold << " gold" << endl;
                                cout << ANSI_COLOR_RESET"===========================" << endl;
                                cout << "Enter 'y' to buy this." << endl;
                                cout << "Enter 'x' to exit the shop" << endl;
                                cin >> choice;
                                if (choice == 'y') {
                                    cout << "Are you sure? (y/n)" << endl;
                                    cin >> choice;
                                    if (choice == 'y' && gold >= 10) {
                                        pweapon = 11;
                                        gold = gold - 10;
                                        cout << ANSI_COLOR_CYAN"Thank you for your purchase!" << endl;
                                        getchar();
                                        cout << ANSI_COLOR_RESET"Gold left: " << ANSI_COLOR_YELLOW << gold << endl;
                                        getchar();
                                    }
                                    if (choice == 'y' && gold < 10) {
                                        cout << ANSI_COLOR_RED"I'm sorry, you do not have"
                                                "\nenough gold for this item." << endl;
                                        getchar();
                                    }
                                }
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
                                 choice == 'w' ||
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
                                 choice == 'W');
                    }
                    if (choice == 'b') {
                        do {
                            cout << "Iron Gloves" << endl;
                            cout << "==========" << endl;
                            if (pclass != 'f') {
                                cout << ANSI_COLOR_RED"No one in your party is a Fighter" << endl;
                                cout << "Enter 'x' to go back to exit the shop." << endl;
                                cin >> choice;
                                if (choice == 'x') {
                                    continue;
                                }
                            }
                            if (pclass == 'f') {
                                cout << "Damage  = 10" << endl;
                                cout << "Defense = 1" << endl;
                                cout << "A pair of Iron Gloves. Good for beating"
                                        "\nbeating up bullies!" << endl;
                                cout << "Price = " << ANSI_COLOR_YELLOW << "10 gold" << endl;
                                cout << ANSI_COLOR_RESET"Gold  = " << ANSI_COLOR_YELLOW << gold << " gold" << endl;
                                cout << ANSI_COLOR_RESET"===========================" << endl;
                                cout << "Enter 'y' to buy this." << endl;
                                cout << "Enter 'x' to go back to the main shop page." << endl;
                                cin >> choice;
                                if (choice == 'y') {
                                    cout << "Are you sure? (y/n)" << endl;
                                    cin >> choice;
                                    if (choice == 'y' && gold >= 10) {
                                        pweapon = 21;
                                        pdefense = pdefense + 1;
                                        gold = gold - 10;
                                        cout << ANSI_COLOR_CYAN"Thank you for your purchase!" << endl;
                                        getchar();
                                        cout << ANSI_COLOR_RESET"Gold left: " << ANSI_COLOR_YELLOW << gold << endl;
                                        getchar();
                                    }
                                    if (choice == 'y' && gold < 10) {
                                        cout << ANSI_COLOR_RED"I'm sorry, you do not have"
                                                "\nenough gold for this item." << endl;
                                        getchar();
                                    }
                                }
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
                                 choice == 'w' ||
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
                                 choice == 'W');
                    }

                    if (choice == 'c') {
                        do {
                            cout << "Iron Blaster" << endl;
                            cout << "==========" << endl;
                            if (pclass != 'b') {
                                cout << ANSI_COLOR_RED"No one in your party is a Blaster" << endl;
                                cout << "Enter 'x' to go back to exit the shop." << endl;
                                cin >> choice;
                                if (choice == 'x') {
                                    continue;
                                }
                            }
                            if (pclass == 'b') {
                                cout << "Damage Multiplier  = 1x" << endl;
                                cout << "Defense            = N/A" << endl;
                                cout << "Don't ask me how someone managed to"
                                        "\nmake a blaster out of iron, but it"
                                        "\nworks!" << endl;
                                cout << "Price = " << ANSI_COLOR_YELLOW << "10 gold" << endl;
                                cout << ANSI_COLOR_RESET"Gold  = " << ANSI_COLOR_YELLOW << gold << " gold" << endl;
                                cout << ANSI_COLOR_RESET"===========================" << endl;
                                cout << "Enter 'y' to buy this." << endl;
                                cout << "Enter 'x' to go back to the main shop page." << endl;
                                cin >> choice;
                                if (choice == 'y') {
                                    cout << "Are you sure? (y/n)" << endl;
                                    cin >> choice;
                                    if (choice == 'y' && gold >= 10) {
                                        pweapon = 31;
                                        gold = gold - 10;
                                        cout << ANSI_COLOR_CYAN"Thank you for your purchase!" << endl;
                                        getchar();
                                        cout << ANSI_COLOR_RESET"Gold left: " << ANSI_COLOR_YELLOW << gold << endl;
                                        getchar();
                                    }
                                    if (choice == 'y' && gold < 10) {
                                        cout << ANSI_COLOR_RED"I'm sorry, you do not have"
                                                "\nenough gold for this item." << endl;
                                        getchar();
                                    }
                                }
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
                                 choice == 'w' ||
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
                                 choice == 'W');
                    }
                    if (choice == 'd') {
                        do {
                            cout << "Iron Cores" << endl;
                            cout << "==========" << endl;
                            if (pclass != 'b') {
                                cout << ANSI_COLOR_RED"No one in your party is a Blaster" << endl;
                                cout << "Enter 'x' to go back to exit the shop." << endl;
                                cin >> choice;
                                if (choice == 'x') {
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
                                cout << "Price = " << ANSI_COLOR_YELLOW << "1 " << ANSI_COLOR_RESET << "per core"
                                     << endl;
                                cout << "Gold  = " << ANSI_COLOR_YELLOW << gold << " gold" << endl;
                                cout << ANSI_COLOR_RESET"===========================" << endl;
                                cout << "Enter 'y' to buy this." << endl;
                                cout << "Enter 'z' to go back to the main shop page." << endl;
                                cin >> choice;
                                if (choice == 'y') {
                                    cout << "How many do you want to buy?" << endl;
                                    cout << "You can currently buy up to " << pcoremax << " cores." << endl;
                                    cin >> count;
                                    if (count > pcoremax) {
                                        count = pcoremax;
                                    }
                                    cout << count << " cores will cost you " << 1 * count << " gold." << endl;
                                    cout << "Are you sure you want to buy this many?" << endl;
                                    if (choice == 'y' && gold >= (1 * count)) {
                                        gold = gold - (1 * count);
                                        pcore = count;
                                        pcoret = 1;
                                        cout << ANSI_COLOR_CYAN"Thank you for your purchase!" << endl;
                                        getchar();
                                        cout << ANSI_COLOR_RESET"Gold left: " << gold << endl;
                                        getchar();
                                    }
                                    if (choice == 'y' && gold < (1 * count)) {
                                        cout << ANSI_COLOR_RED"I'm sorry, you do not have"
                                                "\nenough gold for this item." << endl;
                                        getchar();
                                    }
                                }
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
                                 choice == 'w' ||
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
                                 choice == 'W');
                    }
                    if (choice == 'e') {
                        do {
                            cout << "Iron Backpack" << endl;
                            cout << "==========" << endl;
                            if (pclass != 'b') {
                                cout << ANSI_COLOR_RED"No one in your party is a Blaster" << endl;
                                cout << "Enter 'x' to go back to exit the shop." << endl;
                                cin >> choice;
                                if (choice == 'x') {
                                    continue;
                                }
                            }
                            if (pclass == 'b') {
                                cout << "Damage  = 1-5" << endl;
                                cout << "Defense = 1" << endl;
                                cout << "Storage = 40" << endl;
                                cout << "A backpack used to hold blaster cores, and"
                                        "\nprotect your back." << endl;
                                cout << "Price = " << ANSI_COLOR_YELLOW << "25 gold" << endl;
                                cout << "Gold  = " << ANSI_COLOR_YELLOW << gold << " gold" << endl;
                                cout << ANSI_COLOR_RESET"===========================" << endl;
                                cout << "Enter 'y' to buy this." << endl;
                                cout << "Enter 'z' to go back to the main shop page." << endl;
                                cin >> choice;
                                if (choice == 'y') {
                                    cout << "Are you sure? (y/n)" << endl;
                                    cin >> choice;
                                    if (choice == 'y' && gold >= 25) {
                                        pcoremax = 10;
                                        pdefense = pdefense + 1;
                                        gold = gold - 25;
                                        cout << ANSI_COLOR_CYAN"Thank you for your purchase!" << endl;
                                        getchar();
                                        cout << ANSI_COLOR_RESET"Gold left: " << gold << endl;
                                        getchar();
                                    }
                                    if (choice == 'y' && gold < 25) {
                                        cout << ANSI_COLOR_RED"I'm sorry, you do not have"
                                                "\nenough gold for this item." << endl;
                                        getchar();
                                    }
                                }
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
                                 choice == 'w' ||
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
                                 choice == 'W');
                    }
                    if (choice == 'f') {
                        do {
                            cout << "Iron Armor" << endl;
                            cout << "==========" << endl;
                            cout << "Damage  = N/A" << endl;
                            cout << "Defense = 5" << endl;
                            cout << "Standard Iron Armor. Pretty durable, and"
                                    "\nkeeps you from dying... for a while..." << endl;
                            cout << "Price = " << ANSI_COLOR_YELLOW << "50 gold" << endl;
                            cout << "Gold  = " << ANSI_COLOR_YELLOW << gold << " gold" << endl;
                            cout << ANSI_COLOR_RESET"===========================" << endl;
                            cout << "Enter 'y' to buy this." << endl;
                            cout << "Enter 'x' to go back to exit the shop." << endl;
                            cin >> choice;
                            if (choice == 'x') {
                                continue;
                            }
                            if (choice == 'y') {
                                cout << "Are you sure? (y/n)" << endl;
                                cin >> choice;
                                if (choice == 'y' && gold >= 50) {
                                    parmor = 1;
                                    pdefense = pdefense + 5;
                                    gold = gold - 50;
                                    cout << ANSI_COLOR_CYAN"Thank you for your purchase!" << endl;
                                    getchar();
                                    cout << ANSI_COLOR_RESET"Gold left: " << ANSI_COLOR_YELLOW << gold << endl;
                                    getchar();
                                }
                                if (choice == 'y' && gold < 50) {
                                    cout << ANSI_COLOR_RED"I'm sorry, you do not have"
                                            "\nenough gold for this item." << endl;
                                    getchar();
                                }
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
                                 choice == 'w' ||
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
                                 choice == 'W');
                    }
                    if (choice == 'g') {
                        do {
                            cout << "Small Backpack" << endl;
                            cout << "==============" << endl;
                            cout << "Damage  = N/A" << endl;
                            cout << "Defense = N/A" << endl;
                            cout << "Storage = 50" << endl;
                            cout << "A backpack to hold more items in." << endl;
                            cout << "Price = " << ANSI_COLOR_YELLOW << "25 gold" << endl;
                            cout << "Gold  = " << ANSI_COLOR_YELLOW << gold << " gold" << endl;
                            cout << ANSI_COLOR_RESET"===========================" << endl;
                            cout << "Enter 'y' to buy this." << endl;
                            cout << "Enter 'x' to go back to exit the shop." << endl;
                            cin >> choice;
                            if (choice == 'x') {
                                continue;
                            }
                            if (choice == 'y') {
                                cout << "Are you sure? (y/n)" << endl;
                                cin >> choice;
                                if (choice == 'y' && gold >= 25) {
                                    bagmax=50;
                                    gold = gold - 25;
                                    cout << ANSI_COLOR_CYAN"Thank you for your purchase!" << endl;
                                    getchar();
                                    cout << ANSI_COLOR_RESET"Gold left: " << ANSI_COLOR_YELLOW << gold << endl;
                                    getchar();
                                }
                                if (choice == 'y' && gold < 50) {
                                    cout << ANSI_COLOR_RED"I'm sorry, you do not have"
                                            "\nenough gold for this item." << endl;
                                    getchar();
                                }
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
                                 choice == 'w' ||
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
                                 choice == 'W');
                    }
                    if (choice == 'x') {
                        return village();
                    }
                } while (choice == ' ' ||
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
                         choice == 'y' ||
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
                         choice == 'Y');
            }
        }
        if (choice == 'i') {
            getchar();
            printf(ANSI_COLOR_CYAN"You go to one of the inns...\n");
            if (pHP < pHPmax) {
                printf("Welcome to the Sleeper's Inn!\n");
                do {
                    printf("One night = 10 gold\n");
                    printf("Enter 'y' to stay for a night.\n");
                    printf("Enter 'n' to exit the inn.\n");
                    cin >> choice;
                    if (choice == 'y' && gold >= 10) {
                        gold = gold - 10;
                        printf(ANSI_COLOR_CYAN"Have a great stay!\n");
                        cout << ANSI_COLOR_RESET"Gold left: " << ANSI_COLOR_YELLOW << gold << endl;
                        getchar();
                        pHP = pHPmax;
                        getchar();
                        printf(ANSI_COLOR_RESET"You wake up refreshed...\n");
                        return village();
                    }
                    if (choice == 'y' && gold < 10) {
                        cout << ANSI_COLOR_RED"I'm sorry, you do not have"
                                "\nenough gold to stay a night." << endl;
                        getchar();
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
                         choice == 'Z');
            }
            if (pHP == pHPmax) {
                getchar();
                cout << ANSI_COLOR_RESET"However, you don't feel tired..." << endl;
                getchar();
                village();
            }
        }
        if (choice == 'b') {
            getchar();
            cout << ANSI_COLOR_CYAN"You head back to the board..." << endl;
            getchar();
            cout << ANSI_COLOR_RESET"Unfortunately, there are no quests on"
                    "\nthe board right now..." << endl;
            getchar();
            village();
        }
        if (choice == 'v') {
            getchar();
            cout << ANSI_COLOR_CYAN"You head back to the village square..." << endl;
            getchar();
            cout << ANSI_COLOR_RESET"When you get to the square, you see a"
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
            pursenab = true;
            cout << "You get back up, then look in the direction the"
                    "\nkid chased after, deciding that you have to go"
                    "\nafter him." << endl;
            getchar();
            cout << "But you'll need gear first..." << endl;
            return village();
        }
    } while (choice!='z');
}

void forest() {
    if (firstf) {
        cout << ANSI_COLOR_RESET"The Dead Forest lives up to it's name." << endl;
        getchar();
        cout << "It smells like someone dropped a bunch of dead bodies"
                "\nhere." << endl;
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
        cout << "Enter 'q' to open the menu" << endl;
        cin >> choice;
        if (choice == 'w') {
            getchar();
            cout << ANSI_COLOR_CYAN"You continue forward..." << endl;
            getchar();
            forest13();
        }
        if (choice == 'W') {
            getchar();
            cout << ANSI_COLOR_CYAN"You continue forward..." << endl;
            getchar();
            forest13();
        }
        if (choice=='q') {
            menu();
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
    cout << ANSI_COLOR_RED <<"You end up getting ambushed by a small party of goblins!" << endl;
    getchar();
    goblinbat1();
    getchar();
    cout << ANSI_COLOR_RESET "Choose a direction:" << endl;
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
        cout << ANSI_COLOR_RESET"This how battling works in the game:" << endl;
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

        cout << ANSI_COLOR_RESET << pname << "'s turn" << endl;
        if (pHP <= (pHPmax * 0.1)) {
            cout << ANSI_COLOR_RED"HP: " << pHP << endl;
        }
        if (pHP > (pHPmax * 0.1)) {
            cout << ANSI_COLOR_RESET "HP: " << pHP << endl;
        }
        cout << ANSI_COLOR_RESET "Attack  (a)" << endl;
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
            cout << "Enter 'z' to cancel" << endl;
            cin >> choice;
            if (choice == 'a') {
                if (pweapon == 11) {
                    getchar();
                    cout << ANSI_COLOR_CYAN"You struck Goblin 1 with your sword." << endl;
                    getchar();
                    goblin1HP = goblin1HP - 10;
                    cout << ANSI_COLOR_GREEN "Goblin 1 took 10 damage." << endl;
                    getchar();
                    if (goblin1HP <= 0) {
                        cout << ANSI_COLOR_GREEN"Goblin 1 is now dead" << endl;
                        getchar();
                    } else if (goblin1HP > 0) {
                        cout << ANSI_COLOR_RED "Goblin 1 shanked you with a dagger." << endl;
                        getchar();
                        pHP = pHP - 5;
                        cout << ANSI_COLOR_RED "You took 5 damage." << endl;
                        getchar();
                    }
                    if (goblin2HP > 0) {
                        cout << ANSI_COLOR_RED "Goblin 2 punched you in the gut." << endl;
                        getchar();
                        pHP = pHP - 2;
                        cout << ANSI_COLOR_RED "You took 2 damage" << endl;
                        getchar();
                    }
                    if (goblin3HP > 0) {
                        cout << ANSI_COLOR_RED "Goblin 3 punched you in the gut." << endl;
                        getchar();
                        pHP = pHP - 2;
                        cout << ANSI_COLOR_RED "You took 2 damage" << endl;
                        getchar();
                    }
                } else if (pweapon == 21) {
                    getchar();
                    cout << ANSI_COLOR_CYAN"You gave Goblin 1 good punch to the face." << endl;
                    goblin1HP = goblin1HP - 10;
                    getchar();
                    cout << ANSI_COLOR_GREEN"Goblin 1 took 10 damage." << endl;
                    getchar();
                    if (goblin1HP == 0) {
                        cout << ANSI_COLOR_GREEN"Goblin 1 is now dead" << endl;
                        getchar();
                    } else if (goblin1HP > 0) {
                        cout << ANSI_COLOR_RED "Goblin 1 shanked you with a dagger." << endl;
                        getchar();
                        pHP = pHP - 5;
                        cout << ANSI_COLOR_RED "You took 5 damage." << endl;
                    }
                    if (goblin2HP > 0) {
                        cout << ANSI_COLOR_RED "Goblin 2 punched you in the gut." << endl;
                        getchar();
                        pHP = pHP - 2;
                        cout << ANSI_COLOR_RED "You took 2 damage" << endl;
                    }
                    if (goblin3HP > 0) {
                        cout << ANSI_COLOR_RED "Goblin 3 punched you in the gut." << endl;
                        getchar();
                        pHP = pHP - 2;
                        cout << ANSI_COLOR_RED "You took 2 damage" << endl;
                    }
                } else if (pweapon == 31) {
                    getchar();
                    pcore = pcore - 1;
                    cout << "You have " << pcore << " cores left." << endl;
                    getchar();
                    cout << ANSI_COLOR_CYAN"You charged up your blaster...." << endl;
                    getchar();
                    cout << ANSI_COLOR_CYAN"Then BOOOOM!" << endl;
                    getchar();
                    cout << ANSI_COLOR_GREEN "You shot a beam of raw energy at Goblin 1" << endl;
                    getchar();
                    if (pcoret == 1) {
                        goblin1HP = goblin1HP - (1 * 10);
                        cout << ANSI_COLOR_GREEN "Goblin 1 took 10 damage." << endl;
                        getchar();
                    }
                    if (goblin1HP <= 0) {
                        cout << ANSI_COLOR_GREEN "Goblin 1 is now dead" << endl;
                        getchar();
                    } else if (goblin1HP > 0) {
                        cout << ANSI_COLOR_RED "Goblin 1 shanked you with a dagger." << endl;
                        getchar();
                        pHP = pHP - 5;
                        cout << ANSI_COLOR_RED "You took 5 damage." << endl;
                        getchar();
                    }
                    if (goblin2HP > 0) {
                        cout << ANSI_COLOR_RED "Goblin 2 punched you in the gut." << endl;
                        getchar();
                        pHP = pHP - 2;
                        cout << ANSI_COLOR_RED "You took 2 damage" << endl;
                        getchar();
                    }
                    if (goblin3HP > 0) {
                        cout << ANSI_COLOR_RED "Goblin 3 punched you in the gut." << endl;
                        getchar();
                        pHP = pHP - 2;
                        cout << ANSI_COLOR_RED "You took 2 damage" << endl;
                        getchar();
                    }
                }
            }
            if (choice == 'b') {
                if (pweapon == 11) {
                    getchar();
                    cout << ANSI_COLOR_CYAN"You struck Goblin 2 with your sword." << endl;
                    goblin2HP = goblin2HP - 10;
                    getchar();
                    cout << ANSI_COLOR_GREEN "Goblin 2 took 10 damage." << endl;
                    getchar();
                    if (goblin2HP <= 0) {
                        cout << ANSI_COLOR_GREEN "Goblin 2 is now dead" << endl;
                        getchar();
                    } else if (goblin2HP > 0) {
                        cout << ANSI_COLOR_RED "Goblin 2 punched you in the gut." << endl;
                        getchar();
                        pHP = pHP - 2;
                        cout << ANSI_COLOR_RED "You took 2 damage." << endl;
                        getchar();
                    }
                    if (goblin1HP > 0) {
                        cout << ANSI_COLOR_RED "Goblin 1 shanked you with a dagger." << endl;
                        getchar();
                        pHP = pHP - 5;
                        cout << ANSI_COLOR_RED "You took 5 damage" << endl;
                        getchar();
                    }
                    if (goblin3HP > 0) {
                        cout << ANSI_COLOR_RED "Goblin 3 punched you in the gut." << endl;
                        getchar();
                        pHP = pHP - 2;
                        cout << ANSI_COLOR_RED "You took 2 damage" << endl;
                        getchar();
                    }
                }
                if (pweapon == 21) {
                    getchar();
                    cout << ANSI_COLOR_CYAN"You gave Goblin 2 good knuckle sandwich." << endl;
                    goblin2HP = goblin2HP - 10;
                    getchar();
                    cout << ANSI_COLOR_GREEN "Goblin 2 took 10 damage." << endl;
                    getchar();
                    if (goblin2HP <= 0) {
                        cout << ANSI_COLOR_GREEN "Goblin 2 is now dead" << endl;
                        getchar();
                    } else if (goblin2HP > 0) {
                        cout << ANSI_COLOR_RED "Goblin 2 punched you in the gut." << endl;
                        getchar();
                        pHP = pHP - 2;
                        cout << ANSI_COLOR_RED "You took 2 damage." << endl;
                        getchar();
                    }
                    if (goblin1HP > 0) {
                        cout << ANSI_COLOR_RED "Goblin 1 shanked you with a dagger." << endl;
                        getchar();
                        pHP = pHP - 5;
                        cout << ANSI_COLOR_RED "You took 5 damage" << endl;
                        getchar();
                    }
                    if (goblin3HP > 0) {
                        cout << ANSI_COLOR_RED "Goblin 3 punched you in the gut." << endl;
                        getchar();
                        pHP = pHP - 2;
                        cout << ANSI_COLOR_RED "You took 2 damage" << endl;
                        getchar();
                    }
                }
                if (pweapon == 31) {
                    getchar();
                    pcore = pcore - 1;
                    cout << "You have " << pcore << " cores left." << endl;
                    getchar();
                    cout << ANSI_COLOR_CYAN"You charged up your blaster...." << endl;
                    getchar();
                    cout << ANSI_COLOR_CYAN"Then BOOOOM!" << endl;
                    getchar();
                    cout << ANSI_COLOR_GREEN "You shot a beam of raw energy at Goblin 2" << endl;
                    getchar();
                    if (pcoret == 1) {
                        goblin2HP = goblin2HP - (1 * 10);
                        cout << ANSI_COLOR_GREEN "Goblin 2 took 10 damage." << endl;
                        getchar();
                    }
                    if (goblin2HP <= 0) {
                        cout << ANSI_COLOR_GREEN "Goblin 2 is now dead" << endl;
                        getchar();
                    } else if (goblin2HP > 0) {
                        cout << ANSI_COLOR_RED "Goblin 2 punched you in the gut." << endl;
                        getchar();
                        pHP = pHP - 2;
                        cout << ANSI_COLOR_RED "You took 2 damage." << endl;
                        getchar();
                    }
                    if (goblin1HP > 0) {
                        cout << ANSI_COLOR_RED "Goblin 1 shanked you with a dagger." << endl;
                        getchar();
                        pHP = pHP - 5;
                        cout << ANSI_COLOR_RED "You took 5 damage" << endl;
                        getchar();
                    }
                    if (goblin3HP > 0) {
                        cout << ANSI_COLOR_RED "Goblin 3 punched you in the gut." << endl;
                        getchar();
                        pHP = pHP - 2;
                        cout << ANSI_COLOR_RED "You took 2 damage" << endl;
                        getchar();
                    }
                }
            }
            if (choice == 'c') {
                if (pweapon == 11) {
                    getchar();
                    cout << ANSI_COLOR_CYAN"You struck Goblin 3 with your sword." << endl;
                    goblin3HP = goblin3HP - 10;
                    getchar();
                    cout << ANSI_COLOR_GREEN "Goblin 3 took 10 damage." << endl;
                    getchar();
                    if (goblin3HP <= 0) {
                        cout << ANSI_COLOR_GREEN "Goblin 3 is now dead" << endl;
                        getchar();
                    } else if (goblin3HP > 0) {
                        cout << ANSI_COLOR_RED "Goblin 3 punched you in the gut." << endl;
                        getchar();
                        pHP = pHP - 2;
                        cout << ANSI_COLOR_RED "You took 2 damage." << endl;
                        getchar();
                    }
                    if (goblin1HP > 0) {
                        cout << ANSI_COLOR_RED "Goblin 1 shanked you with a dagger." << endl;
                        getchar();
                        pHP = pHP - 5;
                        cout << ANSI_COLOR_RED "You took 5 damage" << endl;
                        getchar();
                    }
                    if (goblin2HP > 0) {
                        cout << ANSI_COLOR_RED "Goblin 2 punched you in the gut." << endl;
                        getchar();
                        pHP = pHP - 2;
                        cout << ANSI_COLOR_RED "You took 2 damage" << endl;
                        getchar();
                    }
                }
                if (pweapon == 21) {
                    getchar();
                    cout << ANSI_COLOR_CYAN"You gave Goblin 3 good punch to the face." << endl;
                    goblin3HP = goblin3HP - 10;
                    getchar();
                    cout << ANSI_COLOR_GREEN "Goblin 3 took 10 damage." << endl;
                    getchar();
                    if (goblin3HP <= 0) {
                        cout << ANSI_COLOR_GREEN "Goblin 3 is now dead" << endl;
                        getchar();
                    } else if (goblin3HP > 0) {
                        cout << ANSI_COLOR_RED "Goblin 3 punched you in the gut." << endl;
                        getchar();
                        pHP = pHP - 2;
                        cout << ANSI_COLOR_RED "You took 2 damage." << endl;
                        getchar();
                    }
                    if (goblin1HP > 0) {
                        cout << ANSI_COLOR_RED "Goblin 1 shanked you with a dagger." << endl;
                        getchar();
                        pHP = pHP - 5;
                        cout << ANSI_COLOR_RED "You took 5 damage" << endl;
                        getchar();
                    }
                    if (goblin2HP > 0) {
                        cout << ANSI_COLOR_RED "Goblin 2 punched you in the gut." << endl;
                        getchar();
                        pHP = pHP - 2;
                        cout << ANSI_COLOR_RED "You took 2 damage" << endl;
                        getchar();
                    }
                }
                if (pweapon == 31) {
                    getchar();
                    pcore = pcore - 1;
                    cout << "You have " << pcore << " cores left." << endl;
                    getchar();
                    cout << ANSI_COLOR_CYAN"You charged up your blaster...." << endl;
                    getchar();
                    cout << ANSI_COLOR_CYAN"Then BOOOOM!" << endl;
                    getchar();
                    cout << ANSI_COLOR_GREEN "You shot a beam of raw energy at Goblin 3" << endl;
                    getchar();
                    if (pcoret == 1) {
                        goblin3HP = goblin3HP - (1 * 10);
                        cout << ANSI_COLOR_GREEN "Goblin 3 took 10 damage." << endl;
                        getchar();
                    }
                    if (goblin3HP <= 0) {
                        cout << ANSI_COLOR_GREEN "Goblin 3 is now dead" << endl;
                        getchar();
                    } else if (goblin3HP > 0) {
                        cout << ANSI_COLOR_RED "Goblin 3 punched you in the gut." << endl;
                        getchar();
                        pHP = pHP - 2;
                        cout << ANSI_COLOR_RED "You took 2 damage." << endl;
                        getchar();
                    }
                    if (goblin1HP > 0) {
                        cout << ANSI_COLOR_RED "Goblin 1 shanked you with a dagger." << endl;
                        getchar();
                        pHP = pHP - 5;
                        cout << ANSI_COLOR_RED "You took 5 damage" << endl;
                        getchar();
                    }
                    if (goblin2HP > 0) {
                        cout << ANSI_COLOR_RED"Goblin 2 punched you in the gut." << endl;
                        getchar();
                        pHP = pHP - 2;
                        cout << ANSI_COLOR_RED"You took 2 damage" << endl;
                        getchar();
                    }
                }
            }
            if (choice == 'z') {
                continue;
            }
        }
        if (choice == 's') {
            cout << "Defend (d)" << endl;
            cout << "Run away (a)" << endl;
            cout << "Enter 'z' to cancel" << endl;
            cin >> choice;
            if (choice == 'z') {
                continue;
            }
            if (choice == 'a') {
                cout << "Are you sure you want to run away? (y/n)" << endl;
                cin >> choice;
                if (choice == 'y') {
                    cout << ANSI_COLOR_CYAN "You ran away..." ANSI_COLOR_RESET << endl;
                    getchar();
                    break;
                }
                if (choice != 'y') {
                    continue;
                }
            }
            if (choice == 'd') {
                cout << "Defend yourself? (y/n)" << endl;
                cin >> choice;
                if (choice != 'y') {
                    continue;
                }
                if (choice == 'y') {
                    getchar();
                    cout << ANSI_COLOR_CYAN "Your defense has been raised." ANSI_COLOR_RESET << endl;
                    getchar();
                    if (goblin1HP > 0) {
                        cout << ANSI_COLOR_RED "Goblin 1 attempted to shank you with a dagger." << endl;
                        getchar();
                        pHP = pHP - 0;
                        cout << ANSI_COLOR_GREEN "However, you blocked it, so you took no damage." << endl;
                        getchar();
                    }
                    if (goblin2HP > 0) {
                        cout << ANSI_COLOR_RED"Goblin 2 attempted to punch you in the gut." << endl;
                        getchar();
                        pHP = pHP - 0;
                        cout << ANSI_COLOR_GREEN "However, you blocked it, so you took no damage." << endl;
                        getchar();
                    }
                    if (goblin3HP > 0) {
                        cout << ANSI_COLOR_RED "Goblin 3 attempted to punch you in the gut." << endl;
                        getchar();
                        pHP = pHP - 0;
                        cout << ANSI_COLOR_GREEN "However, you blocked it, so you took no damage." << endl;
                        getchar();
                    }
                }
            }
        }
        if (choice == 'w') {
            if (pelement == 'f') {
                if (fireball) {
                    cout << "Small Fireball (a)" << endl;
                } else {
                    cout << "You know no spells..." << endl;
                }
                cout << "Enter 'z' to cancel" << endl;
                cin >> choice;
                if (choice == 'z') {
                    continue;
                }
            }
            if (pelement == 'e') {
                if (spark) {
                    cout << "Spark (a)" << endl;
                } else {
                    cout << "You know no spells..." << endl;
                }
                cout << "Enter 'z' to cancel" << endl;
                cin >> choice;
                if (choice == 'z') {
                    continue;
                }
            }
            if (pelement == 'w') {
                if (swave) {
                    cout << "Small Wave (a)" << endl;
                } else {
                    cout << "You know no spells..." << endl;
                }
                cout << "Enter 'z' to cancel" << endl;
                cin >> choice;
                if (choice == 'z') {
                    continue;
                }
            }
            if (pelement == 'i') {
                if (shard) {
                    cout << "Ice Shard (a)" << endl;
                } else {
                    cout << "You know no spells..." << endl;
                }
                cout << "Enter 'z' to cancel" << endl;
                cin >> choice;
                if (choice == 'z') {
                    continue;
                }
            }
            if (pelement == 'l') {
                if (light) {
                    cout << "Holy Light (a)" << endl;
                } else {
                    cout << "You know no spells..." << endl;
                }
                cout << "Enter 'z' to cancel" << endl;
                cin >> choice;
                if (choice == 'z') {
                    continue;
                }
            }
            if (pelement == 'd') {
                if (dark) {
                    cout << "Darkness (a)" << endl;
                } else {
                    cout << "You know no spells..." << endl;
                }
                cout << "Enter 'z' to cancel" << endl;
                cin >> choice;
                if (choice == 'z') {
                    continue;
                }
            }
        }
        if (choice=='d') {
            if (tealmush>0) {
                cout << "Teal Mushroom(s): " << tealmush << " (a)" << endl;
            }
            if (flampeach>0) {
                cout << "Flaming Peach(es): " << tealmush << " (b)" << endl;
            }
            if (shinrock>0) {
                cout << "Shiny Rock(s): " << tealmush << " (c)" << endl;
            }
            if (watbulb>0) {
                cout << "Water Bulb(s): " << tealmush << " (d)" << endl;
            }
            if (iceblos>0) {
                cout << "Ice Blossom(s): " << tealmush << " (e)" << endl;
            }
            if (starbot>0) {
                cout << "Bottled Star(s): " << tealmush << " (f)" << endl;
            }
            if (bholebot>0) {
                cout << "Bottled Black Hole(s): " << tealmush << " (g)" << endl;
            }
            cin >> choice;
                if (choice=='a' && tealmush>0) {
                    getchar();
                    cout << "You eat the smelly mushroom" << endl;
                    getchar();
                    cout << "You feel extremely nauseated..." << endl;
                    getchar();
                    cout << "But soon you feel better" << endl;
                    getchar();
                    cout << "You gained 50 HP" << endl;
                    pHP=pHP+50;
                    if (pHP>pHPmax) {
                        pHP=pHPmax;
                    }
                }
        }
        if (goblin1HP<=0 && goblin2HP<=0 && goblin3HP<=0) {
            cout << ANSI_COLOR_GREEN"You won!" << endl;
            getchar();
            cout << ANSI_COLOR_GREEN"Level " << plevel << endl;
            cout << ANSI_COLOR_GREEN"EXP: " << pexp << " + 6" << endl;
            cout << ANSI_COLOR_GREEN"Gold: " << ANSI_COLOR_YELLOW << gold << " + 1" << endl;
            pexp=pexp+6;
            getchar();
            if (pexp<=20) {
                plevel=2;
                levelup();
            }
        }
        if (pHP <=0) {
            cout << ANSI_COLOR_RED "GAME OVER..." << endl;
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
        cout << "Level Up!" << endl;
        getchar();
        cout << "HP: " << pHPmax-15 << " +15" << endl;
        if (pelement=='f') {
            pFPmax=pFPmax+10;
            pFP=pFPmax;
            cout << "FP: " << pFPmax-10 << " +10" << endl;
            getchar();
            cout << "You learned 'Small Fireball'" << endl;
            fireball=true;
            getchar();
        }
        if (pelement=='e') {
            pSPmax=pSPmax+10;
            pSP=pSPmax;
            cout << "SP: " << pSPmax-10 << " +10" << endl;
            getchar();
            cout << "You learned 'Spark'" << endl;
            spark=true;
            getchar();
        }
        if (pelement=='w') {
            pAPmax=pAPmax+10;
            pAP=pAPmax;
            cout << "AP: " << pAPmax-10 << " +10" << endl;
            getchar();
            cout << "You learned 'Small Wave'" << endl;
            swave=true;
            getchar();
        }
        if (pelement=='i') {
            pIPmax=pIPmax+10;
            pIP=pIPmax;
            cout << "IP: " << pIPmax-10 << " +10" << endl;
            getchar();
            cout << "You learned 'Ice Shard'" << endl;
            shard=true;
            getchar();
        }
        if (pelement=='d') {
            pVPmax=pVPmax+10;
            pVP=pVPmax;
            cout << "VP: " << pVPmax-10 << " +10" << endl;
            getchar();
            cout << "You learned 'Darkness'" << endl;
            dark=true;
            getchar();
        }
        if (pelement=='l') {
            pLPmax=pLPmax+10;
            pLP=pLPmax;
            cout << "LP: " << pLPmax-10 << " +10" << endl;
            getchar();
            cout << "You learned 'Holy Light'" << endl;
            light=true;
            getchar();
        }
        cout << "Defense: " << pdefense-2 << "+2" << endl;
    }
    cout << "Choose a Stat to upgrade:"
            "\nVitality"
            "\nPhysical"
            "\nMagic" << endl;
}

void menu() {
    do {
        cout << "============================"
                "\n          MENU"
                "\nEquip         (a)"
                "\nStats         (b)"
                "\nSpecial       (c)"
                "\nItem          (d)"
                "\nExit the menu (z)"
                "\n============================" << endl;
        cin >> choice;
        if (choice =='a') {
            getchar();
            cout << "========================="
                    "\n          EQUIP"
                    "\n" << pname << endl;
            if (parmor==1) {
                cout << "Iron Armor" << endl;
            }
            if (parmor==0) {
                cout << "No Armor" << endl;
            }
            if (pweapon==0) {
                cout << "No Weapon" << endl;
            }
            if (pweapon==11) {
                cout << "Iron Sword" << endl;
            }
            if (pweapon==21) {
                cout << "Iron Gloves" << endl;
            }
            if (pweapon==31) {
                cout << "Iron Blaster" << endl;
                cout << "Cores: " << pcore << "/" << pcoremax << endl;
            }if (paccess==0) {
                cout << "No Accessory" << endl;
            }
            getchar();
            cout << "Change Weapon    (a)" << endl;
            cout << "Change Armor     (b)" << endl;
            cout << "Change Accessory (c)" << endl;
            cout << "Back             (x)" << endl;
            cout << "Exit the menu    (z)" << endl;
            cout << "=========================" << endl;
            cin >> choice;
            if (choice=='x') {
                continue;
            }
        }
        if (choice=='b') {
            cout << "========================="
                    "\n          STATS"
                    "\n" << pname << endl;
            cout << "HP: " << pHP << "/" << pHPmax << endl;
            cout << "Class: ";
            if (pclass=='s') {
                cout << "Swordsman" << endl;
            }
            if (pclass=='f') {
                cout << "Fighter" << endl;
            }
            if (pclass=='b') {
                cout << "Blaster" << endl;
            }
            cout << "Back             (x)" << endl;
            cout << "Exit the menu    (z)" << endl;
            cout << "=========================" << endl;
            cin >> choice;
            if (choice=='x') {
                continue;
            }
        }
        if (choice=='c') {
            cout << "==================================="
                    "\n            SPECIAL"
                    "\n" << pname << endl;
            if (pelement=='f') {
                if (fireball) {
                    cout << "Small Fireball" << endl;
                }
                if (!fireball) {
                    cout << "You don't know any Fire Spells" << endl;
                }
                cout << "Press the Spell's letter to view"
                        "\ninformation about it" << endl;
                cout << "Back             (x)" << endl;
                cout << "Exit the menu    (z)" << endl;
                cout << "===================================" << endl;
                cin >> choice;
                if (choice=='x') {
                    continue;
                }
            }
            if (pelement=='e') {
                if (spark) {
                    cout << "Spark" << endl;
                }
                if (!spark) {
                    cout << "You don't know any Electric Spells" << endl;
                }
                cout << "Press the Spell's letter to view"
                        "\ninformation about it" << endl;
                cout << "Back             (x)" << endl;
                cout << "Exit the menu    (z)" << endl;
                cout << "===================================" << endl;
                cin >> choice;
                if (choice=='x') {
                    continue;
                }
            }
            if (pelement=='w') {
                if (swave) {
                    cout << "Small Wave" << endl;
                }
                if (!swave) {
                    cout << "You don't know any Water Spells" << endl;
                }
                cout << "Press the Spell's letter to view"
                        "\ninformation about it" << endl;
                cout << "Back             (x)" << endl;
                cout << "Exit the menu    (z)" << endl;
                cout << "===================================" << endl;
                cin >> choice;
                if (choice=='x') {
                    continue;
                }
            }
            if (pelement=='i') {
                if (shard) {
                    cout << "Ice Shard" << endl;
                }
                if (!shard) {
                    cout << "You don't know any Ice Spells" << endl;
                }
                cout << "Press the Spell's letter to view"
                        "\ninformation about it" << endl;
                cout << "Back             (x)" << endl;
                cout << "Exit the menu    (z)" << endl;
                cout << "===================================" << endl;
                cin >> choice;
                if (choice=='x') {
                    continue;
                }
            }
            if (pelement=='l') {
                if (light) {
                    cout << "Holy Light" << endl;
                }
                if (!light) {
                    cout << "You don't know any Light Spells" << endl;
                }
                cout << "Press the Spell's letter to view"
                        "\ninformation about it" << endl;
                cout << "Back             (x)" << endl;
                cout << "Exit the menu    (z)" << endl;
                cout << "===================================" << endl;
                cin >> choice;
                if (choice=='x') {
                    continue;
                }
            }
            if (pelement=='d') {
                if (dark) {
                    cout << "Darkness (a)" << endl;
                }
                if (!dark) {
                    cout << "You don't know any Dark Spells" << endl;
                }
                cout << "Press the Spell's letter to view"
                        "\ninformation about it" << endl;
                cout << "Back             (x)" << endl;
                cout << "Exit the menu    (z)" << endl;
                cout << "===================================" << endl;
                cin >> choice;
                if (choice=='x') {
                    continue;
                }
            }
        }
        if (choice=='d') {
            cout << "========================="
                    "\n       ITEMS" << endl;
            if (tealmush>0) {
                cout << "Teal Mushrooms: " << tealmush << " (a)" << endl;
            }
            if (flampeach>0) {
                cout << "Flaming Peaches: " << flampeach << " (b)" << endl;
            }
            if (shinrock>0) {
                cout << "Shiny Rocks: " << shinrock << " (c)" << endl;
            }
            if (watbulb>0) {
                cout << "Water Bulbs: " << watbulb << " (d)" << endl;
            }
            if (iceblos>0) {
                cout << "Ice Blossoms: " << iceblos << " (e)" << endl;
            }
            if (starbot>0) {
                cout << "Star in a Bottle: " << starbot << " (f)" << endl;
            }
            if (bholebot>0) {
                cout << "Black Hole in a Bottle: " << bholebot << " (g)" << endl;
            }
            if (tealmush<=0 && flampeach<=0 && shinrock<=0 && watbulb<=0 && iceblos<0 && starbot<=0 && bholebot<=0) {
                cout << "You have no items..." << endl;
            }
            cout << "Press the Item's letter to use"
                    "\nit" << endl;
            cout << "Back             (x)" << endl;
            cout << "Exit the menu    (z)" << endl;
            cout << "=========================" << endl;
            cin >> choice;
            if (choice=='x') {
                continue;
            }
        }
    } while (choice != 'z');
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