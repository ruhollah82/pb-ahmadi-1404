#include <iostream>
#include <math.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  cout << pow(2, int(log2(n)) + 1);
}