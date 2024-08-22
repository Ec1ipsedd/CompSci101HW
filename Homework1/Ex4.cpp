#include <iostream>
using namespace std;

int main() {
   // Really easy one
    
   // \t just adds a tab, and creates very simple grouping.
   cout << "number\tsquare\tcube\n";
    
   // This is a for loop, it goes through a certain section of code *for* a specific number of iterations. In this case, 11 iterations. It starts from 0 (i=0) and goes to 10 (<11). i++ just adds 1 to i every iteration.
   for (int i=0;i<11;i++) {
        cout << i << '\t' << i * i << '\t' << i * i * i << "\n";
   }

   return 0;
}