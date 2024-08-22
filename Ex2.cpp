#include <iostream>
using namespace std;

int main() {
    // Float is similar to int, but it allows for decimals. You want to use int when possible instead because it takes up significantly less memory.
    // Initializing both variables that you'll use for this program, setting pi as a constant because we won't be needing to change it. You can initialize with a value as you see here with pi.
    const float pi = 3.14159;
    float rad;
  
    cout << "Enter a radius for your circle: ";
    cin >> rad;
    
    cout << "\nYour circle's diameter: " << rad*2;
    // Code reads with PEMDAS rules, feel free to use parentheses when needed.
    cout << "\nYour circle's circumference: " << (rad*2)*pi;
    // Exponents technically exist in C++, but we would have to include a different library, so in cases like these just multiply it by itself.
    cout << "\nYour circle's area: " << rad*rad*pi;
    
   return 0;
}