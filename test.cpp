// // #include <bits/stdc++.h>
// // 
// // const int TABLE_SIZE = 11;
// // 
// // int main() {
// //     int stepSize;
// //     std::cout << "Enter step size: \n";
// //     std::cin >> stepSize;
// // 
// //     int table[TABLE_SIZE];
// //     // initialize table with all empties (-1)
// //     for(int i = 0; i < TABLE_SIZE; i++) {
// //         table[i] = -1;
// //     }
// // 
// //     int n;
// //     std::cout << "Enter number of elements: \n";
// //     std::cin >> n;
// //     int key;
// //   
// // 
// //     for(int i = 0; i < n; i++) {
// //         std::cout << "Enter element " << i + 1 << ": \n" ;
// //         std::cin >> key;
// // 
// //         int index = key % TABLE_SIZE;
// //         std::cout << index << std::endl;
// //         for(int j = 0; j < TABLE_SIZE; j++) {
// //             int probeIndex = (index + j*stepSize) % TABLE_SIZE;
// //             std::cout << probeIndex << std::endl;
// //             std::cout << table[probeIndex] << std::endl'
// //             if(table[probeIndex] == -1) {
// //                 table[probeIndex] = key;
// //                 std::cout << "Inserted " << key << " at index " << probeIndex << std::endl;
// //                 break;
// //             }
// //             
// //         }
// //     }
// // 
// //     std::cout << "Hash Table:" << std::endl;
// //     for(int i = 0; i < TABLE_SIZE; i++) {
// //         std::cout << "Element at index " << i << ": " << table[i] << std::endl;
// //     }
// // 
// //     
// //     return 0;
// // }
// // 
// // 
// 
// 
// 
// 
// 
// 
// 
// 
// #include <bits/stdc++.h>
// using namespace std;
// 
// const int TABLE_SIZE = 11;
// const int MAX_LOOP = 20;
// 
// class CuckooHashing {
//     private:
//         vector<int> table1, table2;
// 
//         int hash1(int key) {
//             return key % TABLE_SIZE;
//         }
// 
//         int hash2(int key) {
//             return (key / TABLE_SIZE) % TABLE_SIZE;
//         }
// 
//     public:
//         CuckooHashing() {
//             table1.assign(TABLE_SIZE, INT_MIN);
//             table2.assign(TABLE_SIZE, INT_MIN);
//         }
// 
//         bool insert(int key) {
//             int loop_control = 0;
//             while(loop_control < MAX_LOOP) {
//                 int pos1 = hash1(key);
//                 if (table1[pos1] == INT_MIN) {
//                     table1[pos1] = key;
//                     return true;
//                 }
// 
//                 swap(table1[pos1], key);
//                 int pos2 = hash2(key);
//                 
//                 if (table2[pos2] == INT_MIN) {
//                     table2[pos2] = key;
//                     return true;
//                 }
// 
//                 swap(table2[pos2], key);
//                 loop_control++;
//             }
//             cout<<"FULL\n";
//             return false;
//         }
// 
//         void display() {
//             cout << "TABLE 1\n";
//             for(int i = 0; i < TABLE_SIZE; i++) {
//                 cout<<"ELEMENT AT INDEX " << i << ": " << table1[i] << endl;
//             }
//             
//             cout << "TABLE 2\n";
//             for(int i = 0; i < TABLE_SIZE; i++) {
//                 cout<<"ELEMENT AT INDEX " << i << ": " << table2[i] << endl;
//             }
//         }
// };
// 
// int main() {
//     int n, key;
//     cout<<"ENTER NO OF ELEMENTS: ";
//     cin>>n;
//     CuckooHashing ht;
// 
//     for(int i = 0; i < n; i++) {
//         cout<<"ENTER ELEMENT: ";
//         cin>>key;
//         ht.insert(key);
//     }
// 
//     ht.display();
// 
// }
// 


#include <bits/stdc++.h>
using namespace std;

const int TABLE_SIZE = 11;
const int MAX_LOOP = 20;

class CuckooHashing {
    private:
        vector<int> table1, table2;

        int hash1(int key) {
            return key % TABLE_SIZE;
        }

        int hash2(int key) {
            return (key / TABLE_SIZE) % TABLE_SIZE;
        }

    public:
        CuckooHashing() {
            table1.assign(TABLE_SIZE, INT_MIN);
            table2.assign(TABLE_SIZE, INT_MIN);
        }

        void insert(int key) {
            int loop_control = 0;
            int cur = key;
            while(loop_control < MAX_LOOP) {
                int pos1 = hash1(cur);
                if (table1[pos1] == INT_MIN) {
                    table1[pos1] = cur;
                    return;
                }
                swap(table1[pos1], cur);
                int pos2 = hash2(cur);
                if (table2[pos2] == INT_MIN) {
                    table2[pos2] = cur;
                    return;
                }
                swap(table2[pos2], cur);
                loop_control++;
            }
            cout << "FULL\n";
            return;
        }

        void display() {
            cout << "TABLE 1\n";
            for(int i = 0; i < TABLE_SIZE; i++) {
                cout << "ELEMENT AT INDEX " << i << ": " << table1[i] << endl;
            }
            cout << "TABLE 2\n";
            for(int i = 0; i < TABLE_SIZE; i++) {
                cout << "ELEMENT AT INDEX " << i << ": " << table2[i] << endl;
            }
        }
};

class LinearProbing {
    private:
        int table[TABLE_SIZE];
        int stepSize;
    public:
        LinearProbing(int step) {
            for(int i = 0; i < TABLE_SIZE; i++) table[i] = -1;
            stepSize = step;
        }
        void insert(int key) {
            int index = key % TABLE_SIZE;
            for(int j = 0; j < TABLE_SIZE; j++) {
                int probeIndex = (index + j*stepSize) % TABLE_SIZE;
                if(table[probeIndex] == -1) {
                    table[probeIndex] = key;
                    cout << "Inserted " << key << " at index " << probeIndex << endl;
                    return;
                }
            }
            cout << "Table is full, couldn't insert " << key << endl;
        }
        void display() {
            cout << "Hash Table:" << endl;
            for(int i = 0; i < TABLE_SIZE; i++) {
                cout << "Element at index " << i << ": " << table[i] << endl;
            }
        }
};

int main() {
    int choice;
    int stepSize;
    int n;
    cout << "Enter step size for Linear Probing: ";
    cin >> stepSize;
    LinearProbing linear(stepSize);
    CuckooHashing cuckoo;
    while (true) {
        cout << "\n=== Hashing Menu ===" << endl;
        cout << "1. Insert (Linear Probing)" << endl;
        cout << "2. Display (Linear Probing)" << endl;
        cout << "3. Insert (Cuckoo Hashing)" << endl;
        cout << "4. Display (Cuckoo Hashing)" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        int key;
        switch (choice) {
            case 1:
                cout<<"Enter no of keys: \n";
                cin>>n;
                for(int i = 0; i < n; i++) {
                    cout << "Enter key to insert (Linear Probing): \n";
                    cin >> key;
                    linear.insert(key);
                }
                break;
            case 2:
                linear.display();
                break;
            case 3:
                cout<<"Enter no of keys: \n";
                cin>>n;
                for(int i = 0; i < n; i++) {
                    cout << "Enter key to insert (Cuckoo Hashing): \n";
                    cin >> key;
                    cuckoo.insert(key);
                }
                break;
            case 4:
                cuckoo.display();
                break;
            case 0:
                cout << "Exiting..." << endl;
                return 0;
            default:
                cout << "Invalid choice!" << endl;
        }
    }
    return 0;
}
