#include <iostream>
#include <string>

constexpr auto greeting = "Hello World!"; //Constant=Like a "void" function in C
auto another_greeting = [] (std::string m) { return std::string("How are you, ") + m; }; //This is going to give you an error, but you can still run the program

// [] = Capture; if this is empty, then you're not capturing anything from the environment

int main() {
/*Could be also typed as "int main (int argc, char* agrv[])
 * argc: This can be changed to any LEGAL (or available) integer name;
 *      The number of arguments passed to the application
 *      Starts at 0, and ends at [total count (argc) - 1]
 *      Used in several languages
 *      Can ONLY be positive
 * argv[]: An array of null terminated, multibyte characters
 *      The actual arguments
 *      argv[0]: App name or empty string
 *This HAS to be included in a C++ program
 *You can ONLY use "return" to return out of main, or you may have undefined results */
    std::cout << greeting << std::endl; //"std::endl": End of line character
    std::cout << another_greeting("dude?") << std::endl;
    return 0; //You don't have to have this in C++
}
//C++ compilers have 2 phases: Compiling and Linking
//You can compile and run programs in the terminal like so:
/* g++ -o [name of command that you want to enter into the terminal] main.cpp -std=c++11 [Or whatever the c++ version is]
 * ./[name of command] */
