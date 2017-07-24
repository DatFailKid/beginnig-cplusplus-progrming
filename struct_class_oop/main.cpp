#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}

//Notes


//Structs and Classes
/*Structs:
 * Ex.
 *  struct site {
 *      long id;
 *      string name;
 *      string street;
 *      string city;
 *      string state;
 *      string zip;
 *  };
 *
 *Classes:
 *
 *
 * Ex.
 *  class site {
 *  public:
 *      long id;
 *      string name;
 *      string street;
 *      string city;
 *      string state;
 *      string zip;
 *  };
 *
 *  Access Specifiers
 *      Scope of visibility for clients and subtypes in class hierarchies when using inheritance.
 *      Can be used to isolate code
 *      Types:
 *          Public
 *              Default in structs (If you want it as this, you don't need to type it)
 *              Visible to anyone
 *              "public:" keyword needed in classes
 *          Protected
 *              Not visible outside the class or struct
 *              Visible to derived subtypes
 *              "protected:" keyword needed
 *          Private
 *              Default in classes
 *              Visible only in the class or struct
 *              "private:" keyword needed in structs
 *      Order is not important
 *      Multiple sections are allowed, but you must be cautious with them
 *      Ex.
 *
 *  Member Functions
 *      Functions scoped to a struct or class, and further restricted in scope to public, protected or private
 *      Same rules still applies
 *      Should operate on the data in the class it's in
 *      Ex. (Full inclusion using .hpp)
 *          class site {
 *          public:
 *              bool is_valid() { (Function)
 *                  [code]
 *              }
 *          private:
 *              [code]
 *          }; */