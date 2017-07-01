#include <iostream>
#include <cmath>

int main(int argc, char* argv[]) {
    if (argc != 4) {
        std::cerr << "You need 4 arguments" << std::endl;
        return 1;
    }

    double lhs = std::stod(argv[1]);
    std::string op = argv[2];
    double rhs = std::stod(argv[3]);

    if (op == "+") {
        std::cout << " " << lhs << " + " << rhs << " = " << lhs + rhs << std::endl;
    } else if (op == "-") {
        std::cout << " " << lhs << " - " << rhs << " = " << lhs - rhs << std::endl;
    } else if (op == "x") {
        std::cout << " " << lhs << " * " << rhs << " = " << lhs * rhs << std::endl;
    } else if (op == "/") {
        std::cout << " " << lhs << " / " << rhs << " = " << lhs / rhs << std::endl;
    } else if (op == "^") {
        std::cout << " " << lhs << " ^ " << rhs << " = " << std::pow(lhs, rhs) << std::endl;
    }
    else {
        std::cerr << "Operation" << op << "not recognized by system." << std::endl;
        return 1;
    }

    /*double operator1;
    double operator2; */
    return 0;
}

//Notes

//Data Types
/*Character types
 *      "char": Takes up 1 byte
 *      "char16_t": Takes up 2 bytes; Allow for "utf-16" character sets
 *      "char32_t": Takes up 4 bytes; Allow for "utf-32" character sets
 *      "wchar_t": Supports the largest character sets (Ex. Japanese or Chinese characters)
 *Integral types (Doesn't include decimals)
 *      "short int": Commonly known as a "short"; No smaller than a char, but usually 2 bytes
 *      "int": At least 2 bytes
 *      "long int": Commonly known as a "long"; At least 4 bytes
 *      "long long int": At least 8 bytes
 *      "signed int": Can be positive or negative, but the range is limited based on the integer type
 *      "unsigned int": Ranges from 0 to the maximum number it can hold based on how many bits are allocated
 *          "signed short": 32,767
 *          "unsigned short": 65,535
 *          "signed int": 2,147,483,647
 *          "unsigned int": 4,294,967,295
 *          "signed long": 2,147,483,647 x 2^31-1
 *          "unsigned long": 4,294,967,295 x 2^32-1
 *  A "short" can be promoted to an "int", then a "long". However, if you convert backwards, you'll lose bits.
 *Float types
 *      "float": Has some precision (decimal points)
 *      "double": More precision (Great for beginning numbers)
 *      "long double": MORE precision (Requires some crazy advanced number; requires the "Stood complex" class)
 *  Same applies here, you can convert up, but you can't convert down with losing bits
 *Boolean type (bool)
 *  Can be written as "true" or "false" */

//Using variables
/*Similar to C: "int i=123" (You don't have to initialize it on the same line as the declaration)
 * If you declare it, but don't initialize it, you'll get a different value each time.
 * Declare and initialize ASAP
 * "int month=currentmonth()" (Similar to an array in C; You can later assign a number to a variable)
 * mutable variable = a variable that can be changed during the program
 * Constexpr: Value is known when compiled, and doesn't change as long as the app is running
 *  Ex. constexpr double  pi = 3.14159 (Pi doesn't change, so it can stay as a fixed variable)
 * Const Qualifier: Value that is mutable
 *  Ex. const double circumference = calc_circumference(radius()) (The circumference can change, since not all circles are of the same size) */

//Operators And Operator Precedence
/*Mathematical Operators
 *  Addition (a+b)
 *  Pre-increment(++a; continually adds 1; For now, this will almost always be used)
 *  Post-increment (a++; Same as above)
 *  Subtraction (a-b)
 *  Pre-decrement (--a; continually subtracts 1)
 *  Post-decrement (a--; Same as above)
 *  Division (a/b)
 *  Multiplication (a*b)
 *  Modulus (a%b; Takes the remainder of dividing "a" and "b")
 *  All operations will be operated by PEMDAS (Multiplication and division first, from left to right)
 *Comparison operators (Same as C)
 *  Equal to (==) (NOT "=")
 *  Not equal to (!=)
 *  Greater than (>)
 *  Less than (<)
 *  Greater than or equal to (>=)
 *  Less than or equal to (<=)
 *Logical Operators (Same as C)
 *  And (&&)
 *  Or (||)
 *  Not (!)*/

//Control Flow
/* If statements can appear on their own, or have an else statement, too.
 *  However, an else statement CANNOT appear on it's own, or be in one if statement (One "else" for each "if")
 *  There can be and else if statement
 *      Ex. if (x < 7 &&
 *      x%2 == 1) (If x is less than 7 and not even; You can also put them on the same line, however, you cannot put parenthesis around the second line)
 *      Short-circuit evaluation: If the statement fails, then the whole statement fails
 * For loop: for (initialization; test (Is this true?); increment/decrement) (This is the old version)
 * While loop: while ( predicate )
 *  Ex.
 *      int attempts = 0;
 *      bool success = false;
 *      while (attempts < 3 && !success) (While the attempts are less than 3...) {
 *          success = login (user, pass); (when the user enters their username and password, change "success" to "true")
 *          ++attempts; } (Increase the attempt by one each time)
 * Do while loop: do {
 *              } while ( predicate ); (While interate at least once, even if the statement is false)
 *  Ex.
 *      int attempts = 0;
 *      bool success = false;
 *      do {
 *          success = login (user, pass);
 *          ++attempts; }
 *          while (attempts < 3 && !success);
 * Switch case (Can ONLY be used with "int" or single "char" variables; Needs to have a default case):
 *                  switch ( <int or char> ) {
 *                  case <if the int or char is this>:
 *                      Code...
 *                      break;
 *                  default; (This doesn't have to be at the bottom)
 *                  }
 *  Ex.
 *  int dow;
 *  switch ( dow ) {
 *                  case 0: (Monday)
 *                      lunch = "Caesar Salad";
 *                      break;
 *                  case 1:
 *                      lunch = "Mixed  Greens Salad"
 *                      break;
 *                  case 2:
 *                  case 3:
 *                      lunch = "Cobb Salad"
 *                      break;
 *                  case 4:
 *                      lunch = "Veggie Salad"
 *                      break;
 *                  default:
 *                      break;
 *                  } (The cases don't need to be in number or alphabetical order)
 *  If you forget the break statement, then the case will fall to the next one, and execute that one. Usually a hard bug to track down. */

//Statements and Expressions
/* Statements: Telling the program something
 *  Compound statements (Blocks of code enclosed in curly brackets ({})
 *  "If" Statements
 *  Iteration statement
 *      While statement
 *      Do While statement
 *      For statement
 *  Declaration statements (Showing the program a new identifier or variable)
 * Expressions: A sequence of operatings used to specify a computation
 * L-values and R-values
 *  Ex.
 *      std::string band_leader = "Fozy Bear";
 *             (left hand side)   (right hand side)
 * Comments
 *  Single line (//)
 *  Multi-line (/*)
 *
 *  Do's and Don't's of comments
 *      DO
 *      Give a "Why"
 *      Give an explanation of the code
 *      Keep them up-to-date
 *      If the code needs to be explained, then it could be simpler
 *      Come up with a commenting format
 *      DON'T
 *      State "What" you're doing
 *      State "How" you're doing it
 *      Make unnecessary comments
 *      Put too many comments on crazy amounts of code
 *      Put comments in comments or multiple types in one comment */

//Include files with multiple files
/* Declare and include guards: Wrap the contents of an include file in a header in a name and test, and won't include it if it's defined
 *  Ex.
 *      #ifndef GEOMETRY_H_ (if this is not defined)
 *      #define GEOMETRY_H_ (define it)
 *
 *      double calc_circle_area(double radius);
 *
 *      #endif
 * Defining (Creating a ".cpp" file)
 *      #include <cmath>
 *      #include <geometry.h>
 *
 *      double calc_circle_area(double radius) {
 *          return 3.145159 * std::pow(radius, 2); }
 * Sometimes, you may need to include something from the system include path, which will vary from PC to PC
 * System include path:
 *  <path> (Be careful with this one, as the angle brackets tell the compiler to search from the beginning
 * User include path:
 *  "path" (You can also use relative path by adding ".." at the beginning, however, relative paths are an assumption) */