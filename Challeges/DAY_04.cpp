#include <iostream>
 
using namespace std;
 
int main(){
	
    

   long long x;
   0<= x <= 1e18;
    cin >> x;
    cout << x;
    return 0;
}

// what is the wrong in the code?

// The 0<= x <= 1e18 is not valid syntax in C++
// you should use long long for the variable x
// so you can store the numbers to 1e18
// cause the int is limited to 2147483647
// while long long is limited to 9,223,372,036,854,775,807
