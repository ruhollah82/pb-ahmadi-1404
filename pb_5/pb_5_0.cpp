#include <iostream>
using namespace std;

struct Student {
  string name;
  string family;
  float av;
  unsigned long long int id;
  int age;
};

void getStudents(Student list[], int size) {
  for (int i = 0; i < size; i++) {
    cout << "Enter name : \n";
    cin >> list[i].name;
    cout << "Enter Family : \n";
    cin >> list[i].family;
  }
}

void printStudents(Student list[], int size) {
  for (int i = 0; i < size; i++) {
    cout << "Name : " << list[i].name << endl
         << "Family : " << list[i].family << endl;
  }
}

int main() {

  Student stuList[5];
  getStudents(stuList, 5);
  printStudents(stuList, 5);
}