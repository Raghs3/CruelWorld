// #include <iostream>
#include <bits/stdc++.h>  // includes all the libraries in c++ but takes a bit more time (negligible)
using namespace std;

// int main() {
//     cout << "Hey Raghs3!" << endl;  // "\n"; is faster than endl
//     cout << "Hey Raghs3!";
//     return 0;
// }

// int main() {
//     int x, y;
//     cin >> x >> y;
//     cout << "Value of x: " << x << " and y: " << y;
//     return 0;
// }

// int main() {
//     // int is datatype // 4 bytes
//     // int x = 10;
//     // // long
//     // long x = 15;
//     // cin >> x;
//     // // long long
//     // long long x = 1500000000;
// 
//     // float - 4 byte, double - 8 byte
//     float x = 5.6;
//     double y = 6;
//     cout << "Value of y: " << y;
// 
//     return 0;
// }

// int main() {
// //     string and getline
// //     string s1;
// //     string s2;  // After space, new string
// // 
// //     cin >> s1 >> s2;  //  ONLY Hey comes
// //     cout << s1 << " " << s2;
// 
//     // string str;
//     // getline(cin, str);  // now takes entire line but doesn't get next line (after pressing enter)
//     // cout << str;
// 
//     // char can store all characters (256)
//     char ch = 'g';  // string in double quotes and takes more space
//     // cin >> ch;
//     cout << ch;
// 
//     return 0;
// }


// write a program that takes an input of age
// and prints if you are adult or not
// >= 18, yes
// < 18, no
// int main() {
//     int age;
//     cin >> age;
//     if(age >= 18) {
//         cout << "You are an adult!";
//     }
//     else if(age < 10) {
//         cout << "You are not an adult!";
//     }
//     // else {  // not mandatory
//     //     cout << "You are not an adult!";
//     // }
//     return 0;
// }

/*
A school has following rules for grading system:
a. Below 25 - F
b. 25 to 44 - E
c. 45 to 99 - D
d. 50 to 59 - C
e. 60 to 79 - B
f. 80 to 100 = A
Ask user to enter marks and print the corresponding grade.
*/
// int main() {
//     int marks;
//     cin >> marks;
//     if(marks < 25) {
//         cout << "F";
//     }
//     else if(marks <= 44) {  // no need to check if greater than 25 coz already know it is not less than 25
//         cout << "E";
//     }
//     else if(marks <= 49) {
//         cout << "D";
//     }
//     else if(marks <= 59) {
//         cout << "C";
//     }
//     else if(marks <= 79) {
//         cout << "B";
//     }
//     else if(marks <= 100) {
//         cout << "A";
//     }
//     return 0;
// }

/*
Take the age from the user and then decide accordingly
1. If age < 18,
    print -> not eligible for job
2. If age >= 18,
    print -> "eligible for job"
3. If age >= 55 and age <= 57,
    print -> "eligible for job, but retirement soon."
4. If age > 57
    print -> "retirement time"
*/
int main() {
    int age;
    cin >> age;
    if(age < 18) {
        cout << "not eligible for job";
    }
    // >= 18
    else if(age <= 57) {
        cout << "eligible for job";
        if(age > 55) {
            cout << ", but retirement soon";
        }
    }
    // else if(age <= 57) {
    //     cout << "eligible for job, but retirement soon";
    // }
    else {
        cout << "retirement time";
    }
    return 0;
}