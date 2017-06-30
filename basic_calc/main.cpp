#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;
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