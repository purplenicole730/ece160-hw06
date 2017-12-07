#include <stdio.h>
#include "Student.h"

Student::Student(std::string fn, std::string ln, int y, Major m)
  : _first_name(fn), _last_name(ln), _grad_year(y), _major(m) {}

Student::~Student() {}

float Student::getGpa() {
  float gpa = 0;
  for(int i = 0; i < _grades.size(); i++){
	  gpa = gpa + _grades[i];
  }
  if (gpa != 0) {
	  gpa = gpa/_grades.size();
  }
  return gpa;
}

void Student::addGrade(float grade) {
  _grades.push_back(grade);
}

const std::string& Student::getLastName() {
  return _last_name;
}

void Student::printInfo() {
  std::string major;
  switch(_major) {
	  case Major::EE:
          major = "EE";
          break;
      case Major::ME:
          major = "ME";
          break;
      case Major::CE:
          major = "CE";
          break;
      case Major::CHE:
          major = "CHE";
          break;
      case Major::BSE:
          major = "BSE";
          break;
      case Major::ART:
          major = "ART";
          break;
      case Major::ARCH:
          major = "ARCH";
          break;
  }
  printf("%s, %s\n", _last_name.c_str(), _first_name.c_str());
  printf("%s %d\n", major.c_str(), _grad_year);
  printf("GPA: %.2f\n", getGpa());
}
