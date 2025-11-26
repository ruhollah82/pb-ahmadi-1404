#include <iostream>
using namespace std;

int main() {
  int side1, side2, side3;
  cin >> side1;
  cin >> side2;
  cin >> side3;

  if ((side1 * side1 + side2 * side2 == side3 * side3) ||
      (side2 * side2 + side3 * side3 == side1 * side1) ||
      (side1 * side1 + side3 * side3 == side2 * side2)) {
    cout << "YES";
  } else {
    cout << "NO";
  }
  return 0;
}