#include <iostream>
using namespace std;

class student{
private:
  string name;
  int age;

public:
  void set_name(string n = "Yme") { name = n; }
  void set_age(int a) { age = a; }
  int get_age() { return age; }
  void print_name() { cout << name; }
  void display() {
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
  }
};
