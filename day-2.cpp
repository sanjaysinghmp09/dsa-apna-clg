
#include <iostream>
using namespace std ;

// int main () {
//     int n  ;
//     cout << "Enter Number : " ;
//     cin >> n ;
//     int sum = 0 ;

//     for (int i = 0; i < n ; i++)
//     {
//         sum += i ;

//         // if (i == 5) {
//         //     break;
//         // }
//     }
    
//     cout << "Sum = " << sum << endl ;
//     return 0 ;

// }

/*** 

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter Number: ";
    cin >> n;

    int sum = 0;
    int i = 0; // Initialize the counter for the while loop

    // While loop to replace the for loop
    while (i < n) {
        sum += i;
        i++; // Increment the counter
    }

    cout << "Sum = " << sum << endl;
    return 0;
}
***/

#include <iostream>
using namespace std;

int main() {
    int n = 50;  // Limit
    int sum = 0; // Variable to store the sum of odd numbers

    // Loop to find and sum odd numbers
    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) {  // Check if the number is odd
            sum += i;      // Add odd number to sum
        }
    }

    // Output the sum
    cout << "Sum of all odd numbers up to " << n << " = " << sum << endl;

    return 0;
}
