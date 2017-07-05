#include <iostream>

using namespace std;

int main() {
    cout << "Hello, World!" << endl;
    return 0;
}

//Notes

//Function Primer
/*Function overloading: Creating multiple functions with different argument numbers/types.
 * Ex.
 *      string format(string fmt_string,
 *                    string message);
 *
 *      string format(string fmt_string,
 *                    string level,
 *                    string message);
 *
 *  Done by the C++ compiler by "name mangling", where it creates a function name that's turned into an address for the linker to link to by combining the function name and it's arguments
 * Wrapper function
 *  Ex 1:
 *      void LOG_DEBUG(string msg) {
 *          string fmt_string = get_format();
 *          string message = format(fmt_string,
 *                                  msg);
 *          log(message);
 *      }
 *  Ex 2:
 *      void LOG_DEBUG(string msg) {
 *          log(format(get_format(), msg));
 *      }
 * Auto Return type:
 *      auto area_of_circle(double radius);
 *
 *      Using "decltype" return type:
 *          decltype(3.14159 * pow(radius, 2)) {
 *              return 3.14159 * pow(radius, 2);
 *          }
 *
 *      "decltype" takes an argument or an expression, then deduces the return type for the function (when passed an expression) */

//Function Scopes
/* Symbol name lookup:
 *  Check the most inner scope
 *  Continue outward until the symbol is found
 *  If not found, give a "No symbol found" error
 * Sometimes, certain strings and other variables are only available while a function is being executed. */

//Best Practices
/* Name your functions something that tells others what it does
 *  DO: void celsius_to_fahrenheit();
 *  DON'T: void c2f();
 * One definition rule: Have your functions do one thing, and one thing only
 *  DO: Have a "total tax" function take the subtotal, discount, and tax by separate functions.
 *  DON'T: Have a "total tax" function take the subtotal, discount, and tax all in one go.
 * Unit Test your functions: Make sure your functions do what you intent for them to do.
 * Lowly coupled, Highly cohesive:
 *  Your functions should have a limited number of parameters, so it doesn't have to be changed drastically.
 *      DO: Use an array to show multiple values
 *      DON'T: Have multiple integers to represent multiple things.
 *  Your functions should have closely related code
 * Consistent level of abstraction: Don't have vastly different code jobs. (Ties the rest of the above together)
 *  DO: Have multiple functions with a function.
 *  DON'T: Have a function, then a huge computation. */