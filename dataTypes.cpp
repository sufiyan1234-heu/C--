// C++ offers a variety of data types to represent different kinds of data. Here are some of the fundamental data types in C++:

// 1. **Integer Types:**
//    - `int`: A standard integer type, typically 4 bytes on most platforms.
//    - `short`: Short integer, typically 2 bytes.
//    - `long`: Long integer, typically 4 bytes.
//    - `long long`: Extended integer, typically 8 bytes.
//    - `signed` and `unsigned` variants for the above types.

// 2. **Floating-Point Types:**
//    - `float`: Single-precision floating-point number.
//    - `double`: Double-precision floating-point number.
//    - `long double`: Extended precision floating-point number.

// 3. **Character Types:**
//    - `char`: A single character.
//    - `wchar_t`: A wide character.
//    - `char16_t` and `char32_t`: Unicode characters.

// 4. **Boolean Type:**
//    - `bool`: Represents boolean values `true` or `false`.

// 5. **Enumeration Types:**
//    - `enum`: User-defined data type consisting of named integral constants.

// 6. **Pointer Types:**
//    - `T*`: Pointer to an object of type `T`.

// 7. **Array Types:**
//    - `T[]` or `T[N]`: Arrays of objects of type `T`.

// 8. **Structure and Union Types:**
//    - `struct`: A composite data type that groups variables of different types.
//    - `union`: Similar to a struct but all members share the same memory location.

// 9. **Class Types:**
//    - `class`: User-defined data type that combines data and functions into a single unit.

// 10. **Void Type:**
//     - `void`: Represents the absence of a type. Typically used for functions that do not return a value.

// 11. **Reference Types:**
//     - `T&`: Reference to an object of type `T`.

// 12. **User-Defined Types:**
//     - C++ allows you to define your own data types using `typedef` and `using` aliases.

// 13. **Smart Pointer Types:**
//     - C++11 introduced smart pointer types like `std::shared_ptr`, `std::unique_ptr`, and `std::weak_ptr` for better memory management.

// 14. **User-Defined Data Types:**
//     - You can create your own data types using `class`, `struct`, and `enum` to suit your application's needs.

// 15. **Standard Library Types:**
//     - The C++ Standard Library provides additional data types and containers such as `std::string`, `std::vector`, `std::map`, etc.

// These are some of the fundamental data types in C++. The choice of data type depends on the nature of the data you want to store and manipulate in your program. C++ also allows you to define custom data types using classes and structures, which makes it a powerful and flexible programming language.
#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Integer Types
    int integer = 42;
    short shortInt = 10;
    long longInt = 1000;
    long long longLongInt = 100000;
    unsigned int unsignedInt = 50;
    signed int signedInt = -20;

    // Floating-Point Types
    float floatingPoint = 3.14f;
    double doublePrecision = 3.14159265359;
    long double extendedPrecision = 3.14159265358979323846;

    // Character Types
    char character = 'A';

    // Boolean Type
    bool boolean = true;

    // Standard Library Types
    string text = "C++ is versatile.";

    // Output
    cout << "Integer: " << integer << std::endl;
    cout << "Float: " << floatingPoint << std::endl;
    cout << "Character: " << character << std::endl;
    cout << "Boolean: " << boolean << std::endl;
    cout << "Standard Library String: " << text << std::endl;

    return 0;
}
