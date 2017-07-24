#include <iostream>

//You can edit the names to make them easier to type (The "ANSI_COLOR..." part)

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
#define ANSI_COLOR_TEST "\x1b[m"

using namespace std;

//Feel free to try and add your own colors!
int main() {
    cout << "This was made for any programming languages that can read and output defined color codes. For example, C and C++." << endl;
    getchar();
    cout <<ANSI_COLOR_RED "Red" << std::endl;
    cout <<ANSI_HIGHLIGHT_RED "Red Highlight" << std::endl;
    getchar();
    cout <<ANSI_COLOR_YELLOW "Yellow" << std::endl;
    cout <<ANSI_HIGHLIGHT_YELLOW "Yellow Highlight" << std::endl;
    getchar();
    cout <<ANSI_COLOR_GREEN "Green" << std::endl;
    cout <<ANSI_HIGHLIGHT_GREEN "Green Highlight" << std::endl;
    getchar();
    cout <<ANSI_COLOR_CYAN "Cyan" << std::endl;
    cout <<ANSI_HIGHLIGHT_CYAN "Cyan Highlight" << std::endl;
    getchar();
    cout <<ANSI_COLOR_BLUE "Blue" << std::endl;
    cout <<ANSI_HIGHLIGHT_BLUE "Blue Highlight" << std::endl;
    getchar();
    cout <<ANSI_COLOR_PURPLE "Lavender" << std::endl;
    cout <<ANSI_HIGHLIGHT_PURPLE "Lavender Highlight" << std::endl;
    getchar();
    cout <<ANSI_COLOR_GREY "Grey" << std::endl;
    cout <<ANSI_HIGHLIGHT_GREY "Grey Highlight" << std::endl;
    getchar();
    cout <<ANSI_HIGHLIGHT_WHITE "White Highlight" << std::endl;
    getchar();
    cout <<ANSI_COLOR_RESET "Reset" << std::endl;
    getchar();
    cout <<ANSI_TEXT_BOLD "Bold" << std::endl;
    getchar();
    cout <<ANSI_TEXT_UNDERLINE "Underline" << std::endl;
    getchar();
    cout <<ANSI_HIGHLIGHT_STD "Highlight" << std::endl;
    getchar();
    cout << ANSI_COLOR_TEST "Test" << endl;
    getchar();

    cout << ANSI_COLOR_RESET "You can also combine colors and highlights into one line:" << endl;
    getchar();
    cout << ANSI_COLOR_RED << ANSI_HIGHLIGHT_BLUE "See?" << endl;

    return 0;
}