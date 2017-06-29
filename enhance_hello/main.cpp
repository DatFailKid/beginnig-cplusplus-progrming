#include <iostream>

int main(int argc, char* argv[]) {

    if (argc < 6) {
        std::cerr << "Invalid number of arguments; You need at least 5" << std::endl;
        return 1;
    }

    std::cout << "Total arguments: " << argc << std::endl;

    for (int i = 0; i < argc; ++i) {
    std::cout << "arg[" << i << "] = " << argv[i] << std::endl;
}
    return 0;
}

//Notes
/*If you want to add extra arguments, go into the terminal, compile it, then say:
 * [command name] [name of argument] '[name of argument]'
 *      If you don't use single or multiple quotes, then it will be taken as multiple arguments.
 *          Ex: ./ehello hello there
 *          Total arguments: 3
 *          arg[0] = ./ehello
 *          arg[1] = hello
 *          arg[2] = there
 *
 *          Ex: ./ehello "hello there" (or 'hello there'; You can mix them up!)
 *          Total arguments: 2
 *          arg[0] = ./ehello
 *          arg[1] = hello there
 *Sometimes, you may need to compile it in the terminal to get a better look at errors
 *
 *"std::cerr": If this is not true, then...
 */