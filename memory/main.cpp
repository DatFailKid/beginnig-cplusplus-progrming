#include <iostream>
#include <memory>

using namespace std;

int main() {
    cout << "Hello, World!" << endl;
    return 0;
}


//Notes


//Pointers
/*How to point them out:
 *  [variable type]* [name] = &[another variable name];
 *  The astrix doesn't have to be right next to the variable type, it can be behind the name, or even in between the variable type and name
 *  Ex.
 *      int a=5;    (HOLDS: 5)
 *      int* i=&a;  (HOLDS: Some memory address)
 *How to print it out:
 *  cout << (void*)i << endl;
 *
 *  void* : Generic pointer type.
 *
 *Dereferencing:
 *  cout << a << endl;
 *  cout << *i << endl; (Prints out the value in the memory address)
 *
 *  5
 *  5
 *
 *  * = dereferencing operator.
 *Dereference to change value:
 *  *i = 10;
 *
 *  You'll then get:
 *
 *  10
 *  10
 *
 *If you did this:
 *
 *  int a=5;
 *  int b=a;
 *  int* i = &a;
 *
 *  *i = 10;
 *
 *  cout << a << endl;
 *  cout << b << endl;
 *  cout << *i << endl;
 *
 *  Then you'll get:
 *
 *  10
 *  5
 *  10
 *
 *  That's because b has a value of what "a" ORIGINALLY WAS. Since "a" was changed in the middle of the program, then b doesn't change because it still remembers what "a" originally was.
 *
 *If you were to dereference a "char" variable:
 *
 * char greeting[] = "Hello"
 *
 * cout << *i << endl;
 * cout << *greeting << endl;
 *
 * Then you would get:
 *
 * 10
 * H
 *
 * This is because the first letter of a character array is the variable's address */

//Allocation
/*Every allocation must be accompanied by a deallocation at some point.
 *No deallocatioon = memory leak
 * Ex.
 *      void my_func() {
 *
 *      int* i = new int(5);
 *
 *      cout << (void*)i << endl;
 *      cout << *i << endl;
 *      *i = 10;
 *      cout << *i << endl;
 *
 *      delete i; (Deallocation, or freeing memory)
 *      }
 *
 *Array Allocation and Deallocation:
 *
 *      int* items=new int[3];
 *
 *      items[0] = 23;
 *      items[1] = 14;
 *      items[2] = 12;
 *
 *      delete [] i;
 *
 *Pointer to Pointers
 *
 * int** items = new int[3];
 *
 * items[0] = new int(23);
 * items[1] = new int(14);
 * items[2] = new int(12);
 *
 * Deallocation
 *
 * If you do this:
 *      delete [] items;
 *
 * You may have a leak of up to 192 bytes (64 bits per integer).
 *
 *      delete items[2];
 *      delete items[1]; (Reverse order is not necessary)
 *      delete items[0];
 *      delete [] items;
 *
 * Ownership of pointers: Who has the responsibility to delete a pointer?
 *  Ex: If a pointer is inside function "Erase All", then you have to deallocate the pointer within the function "Erase All" */

//Pointers,References, value types
/*Calling conventions
 *  Pass by value: Pass a copy of the variable to a function
 *      string reverse(string in);
 *  Pass by pointer: Pass the address of a variable to a function
 *      string reverse(string* in);
 *    Least preferred because it may point to the address of in memory data because it's uninitialized.
 *  Pass by Reference: Pass a pointer alias (or reference) of a variable to a function
 *      string reverse(string& in);
 *    Avoids copying data, Can't be "NULL", and it's efficient as a pointer. */

//Pointer enhancements in C++11
/*Null pointer
 * int* i; (Declared, not initialized)
 *
 * int* i = nullptr;
 * double* pd = nullptr;
 *
 * Comparisons are no longer allowed
 *
 *Checking for null:
 *
 * if (![variable name]) return [variable name];
 *
 *      "!" checks for a null pointer, if the variable is null, then it will be true and return the variable.
 *
 * if ([variable name] == nullptr) return [variable name];
 *
 *      The variable name doesn't have to be on the left hand side.
 *
 *std::unique_ptr:
 *
 * Written:
 *  std::unique_ptr<[variable type]>
 *
 * Strictly owns memory
 * Ownership can be transferred
 * Releases memory when out of scope
 * Copying not permitted
 * Needs "#include <memory>"
 *
 *std::shared_ptr:
 *
 *  Ownership is shared
 *  Last user (Last one to decrement the ref count to 0) must delete the memory
 *  Uses reference counting
 *  Decreases ref count when shared instance destroyed
 *  When shared count is 0, then it releases the memory (By deleting the pointer and setting it to "nullptr")
 *  Copying is permitted
 *  Needs "#include <memory" */