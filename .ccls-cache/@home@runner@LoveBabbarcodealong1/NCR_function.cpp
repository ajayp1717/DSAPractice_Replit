#include <iostream>
using namespace std;

int fact(int n) {
  int fact = 1;
  for (int i = 1; i <= n; i++) {
    fact = fact * i;
  }
  return fact;
}

int NCR(int n, int r) {

  int ans = fact(n) / (fact(r) * fact(n - r));
  return ans;
}

int main() {
  int n, r;
  cout << "Enter N and r: ";
  cin >> n >> r;

  cout << NCR(n, r);
}