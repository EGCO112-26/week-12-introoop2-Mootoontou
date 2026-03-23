#include <iostream>
#include <vector>
#include <cstdlib>
#include <climits>
using namespace std;

#include "student.h"

int main(int argc, char* argv[]) {
  int num_students = (argc - 1) / 2;
  vector<student> students;

  for(int i = 0; i < num_students; i++){
    students.push_back(student());
    students[i].set_name(argv[1 + 2*i]);
    students[i].set_age(atoi(argv[2 + 2*i]));
  }

  // Find the minimum age
  int min_age = INT_MAX;
  for(auto& s : students){
    if(s.get_age() < min_age) min_age = s.get_age();
  }

  // Print youngest students
  cout << "Youngest student" << endl;
  for(auto& s : students){
    if(s.get_age() == min_age){
      s.display();
    }
  }

  return 0;
}
  
  


