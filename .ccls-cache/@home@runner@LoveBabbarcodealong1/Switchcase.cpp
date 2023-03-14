#include <iostream>
using namespace std;

int main() {

  char ch;
  cout << "enter choice: ";
  cin >> ch;

  switch (ch) {

  case 'a':
    cout << "Prnt a" << endl;
    break;
  case 'b':
    cout << "Prnt b" << endl;
    break;
  case 'c':
    cout << "Prnt c" << endl;
    break;
  case 'd':
    cout << "Prnt d" << endl;
    break;
  default:
    cout << "Default Case" << endl;
  }
}