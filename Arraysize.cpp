#include<iostream>
using namespace std;

int main(){
    
//     int myNumbers[5] = {10, 20, 30, 40, 50};//To Find the Size of Array
// cout << sizeof(myNumbers) / sizeof(int);

//     int myNumbers[5] = {10, 20, 30, 40, 50};
// for (int i = 0; i < sizeof(myNumbers) / sizeof(int); i++) {
//   cout << myNumbers[i] << "\n";
// }

int myNumbers[5] = {10, 20, 30, 40, 50};//Using Foreach Loop
for (int i : myNumbers) {
  cout << i << "\n";
}



    return 0;
}
