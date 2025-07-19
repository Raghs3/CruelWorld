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
// int main() {
//     int age;
//     cin >> age;
//     if(age < 18) {
//         cout << "not eligible for job";
//     }
//     // >= 18
//     else if(age <= 57) {
//         cout << "eligible for job";
//         if(age > 55) {
//             cout << ", but retirement soon";
//         }
//     }
//     // else if(age <= 57) {
//     //     cout << "eligible for job, but retirement soon";
//     // }
//     else {
//         cout << "retirement time";
//     }
//     return 0;
// }

/*
Take the day no and print the corresponding day
for 1 print Monday,
for 2 print Tuesday and so on for 7 print Sunday.
*/
// int main() {
//     int day;
//     cin >> day;
//     
//     switch(day) {
//         case 1:
//             cout << "Monday";
//             break;
//         case 2:
//             cout << "Tuesday";
//             break;  // if don't use break, executes all the other cases afterwards too
//         case 3:
//             cout << "Wednesday";
//             break;
//         case 4:
//             cout << "Thursday";
//             break;
//         case 5:
//             cout << "Friday";
//             break;
//         case 6:
//             cout << "Saturday";
//             break;
//         case 7:
//             cout << "Sunday";
//             break;  // takes you out of conditional braces
//         default:
//         cout << "Invalid";  // last so don't need break
//     }
//     cout << "Check";
//     return 0;
// }

// int main() {
//     // int a, b, c, d;
//     // cin >> a >> b >> c >> d;  // not feasible for multiple values
//     int arr[5];  // can modify and perform ops
//     cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];
//     // arr is container
//     // arr[3] += 10;
//     arr[3] = 16;
//     cout << arr[3];
//     return 0;
// }

// int main() {
//     // 2D array
//     int arr[3][5];
// 
//     arr[1][3] = 78;
//     cout << arr[1][2];  // gives garbage value if not specified
//     return 0;
// }

// int main() {
//     string s = "Raghs3";
//     int len = s.size();
//     s[len - 1] = 'K';  // can't do "" as it is character 
//     cout << s[len - 1];
//     return 0;
// }

// int main() {
// 
//     // int i;
//     // for(i = 1; i <= 25; i = i + 5) {  // scope of i is in for loop, unless declared outside
//     //     cout << "Raghs3 " << i << endl;
//     // }
//     // cout << i << endl;
// 
// 
//     int i = 2;
//     // while(i <= 1) {
//     //     cout << "Raghs3 " << i << endl;
//     //     i = i + 1;
//     // }
// 
//     do {
//         cout << "Raghs3 " << i << endl;
//         i = i + 1;
//     } while(i <= 1);
//     cout << i << endl;
// 
// 
//     return 0;
// }


// Functions are set of code which performs something for you
// Functions are used to modularise code
// Functions are used to increase readability
// FUnctions are used to use same code multiple times
// void -> doesn't return anything
// return -> 
// parameterised
// non parameterised

// void printName(string name) {
//     cout << name << endl;
// }
// int main () {
//     string name;
//     cin >> name;
//     printName(name);
// 
//     string name2;
//     cin >> name2;
//     printName(name2);
//     return 0;
// }

// Take two numbers and print its sum
// int sum(int num1, int num2) {
//     int num3 = num1 + num2;
//     return num3;
// }
// 
// int main() {
//     int num1, num2;
//     cin >> num1 >> num2;
//     // int num3 = num1 + num2;
//     // cout << num3;
//     int res = sum(num1, num2);
//     cout << res;
//     return 0;
// }

// int maxx(int num1, int num2) {
//     if(num1 >= num2) return num1;
//     else return num2;  // must put return otherwise error
// }
// 
// 
// int main() {
//     int num1, num2;
//     cin >> num1 >> num2;
//     int minimum = maxx(num1, num2);  // max already exists inbuilt so cant use max for our fn hence used maxx
//     cout << minimum;
//     return  0;
// }


// pass by value
// void doSomething(string s) {  // (int num) {
//     // cout << num << endl;
//     // num += 5;
//     // cout << num << endl;
//     // num += 5;
//     // cout << num << endl;
//     s[0] = 't';
//     cout << s << endl;
// }


// pass by reference
// void doSomething(int &num) {  // (string &s) {  // ampersand makes fn take address, original value
//     // s[0] = 't';
//     // cout << s << endl;
//     cout << num << endl;
//     num += 5;
//     cout << num << endl;
//     num += 5;
//     cout << num << endl;
// }

// int main() {
// 
//     // int num = 10;
//     // doSomething(num);  // a copy goes, original no doesn't go
//     // cout << num << endl;
// 
//     // string s = "raj";
//     // doSomething(s);
//     // cout << s << endl;
// 
//     int num = 10;
//     doSomething(num);
//     cout << num << endl;
//     return 0;
// }


// int main() {
//     int arr[5];
//     for(int i = 0; i <= 4; i = i + 1) {
//         cout << i << endl;
//         cin >> arr[i];
//     }
//     // cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];
// 
//     // cout << arr[0] << endl << arr[1] << endl << arr[2];
// 
//     for(int i = 0; i <= 4; i = i + 1) {
//         cout << arr[i] << " ";
//     }
// 
//     return 0;
// }

void doSomething(int arr[], int n) {
    arr[0] += 100;
    cout << "Value inside function: " << arr[0] << endl;
}


int main() {
    int n = 5;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    doSomething(arr, n);  // arr by default goes by reference always

    cout << "Value inside int main: " << arr[0] << endl;

    return 0;
}
