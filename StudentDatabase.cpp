#include "StudentDatabase.h"

// Insert a student into _students map
void StudentDatabase::addStudent(Student *s) {
  // TODO Implement this
  Student *s = new Student();
  _students[s -> getLasName()] = s;
}

// Find the student with the matching last_name
// and call printInfo on that student, or
// print "<last_name> not found" if the student is not found.
void StudentDatabase::printStudent(std::string last_name) {
  auto student search = _students.find(last_name.c_str());
  if (student search != _students.end()) {
	  printf("%s not found", last_name.c_str());
  }
  else{
	  search.printInfo();
  }
}
