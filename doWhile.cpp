#include<iostream>
using namespace std;

int main(){
// int i = 0;
// do {
//   cout << i << "\n";
//   i++;
// }
// while (i < 5);
// for (int i = 0; i < 5; i++) {
//   cout << i << "\n";
// }

// int i = 0;
// while (i < 5) {
//   cout << i << "\n";
//   i++;

for (int i = 1; i <= 2; ++i) {
  cout << "Outer: " << i << "\n"; // Executes 2 times

  // Inner loop
  for (int j = 1; j <= 3; ++j) {
    cout << " Inner: " << j << "\n"; // Executes 6 times (2 * 3)
  }
}





 
    return 0;
}
