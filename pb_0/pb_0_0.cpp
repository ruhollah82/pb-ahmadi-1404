#include <iostream>
using namespace std;

int main() {
  string x;
  string message = "Enter your name :";
  cout << message;
  cin >> x;
  cout << "Enter your average";
  float average;
  cin >> average;
  cout << "hello" << x << endl;
  cout << "your average is :" << average + 2;
}