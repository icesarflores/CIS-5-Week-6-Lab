#include <iostream>
using namespace std;

// Lab 6 — Your Name
// CIS 5 Week 06 · Even and odd

// for loop variables
int i = 2;
int even = i;
int sum;

// while loop variables
int min_num = 1,
    max_num = 99,
    num;

int main() {
  cout << "===For Loop===\n";
  for (i; i <= 100; i += 2){
    cout << i << endl;
  }

  cout << "===While Loop===\n";

  cout << "Enter the number 1: ";
  cin >> num;

  while (num <= max_num){
    
    cout << num << '\n';
    num += 2;

  
  }

   


return 0;
}
