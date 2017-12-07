#include "MastersStudent.h"

// Constructor Implementations
MastersStudent::MastersStudent(Student ug, int msy):
    Student(ug), _ms_grad_year(msy) {}
  
MastersStudent::MastersStudent(std::string fn, std::string ln,
    int ugy, int msy, Major m):
    Student(fn, ln, ugy, m), _ms_grad_year(msy) {}

// New methods specific to MastersStudent
float MastersStudent::getMsGpa() {
  float msgpa = 0;
  for(int i = 0; i < _ms_grades.size(); i++){
	  msgpa = msgpa + _ms_grades[i];
  }
  if (msgpa != 0) {
	  msgpa = msgpa/_ms_grades.size();
  }
  return msgpa;
}

void MastersStudent::addMsGrade(float grade) {
  _ms_grades.push_back(grade);
}

// Override Student's printInfo to include new fields
void MastersStudent::printInfo() {
  Student::printInfo();
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
  printf("MS %s: %d\n", major.c_str(), _ms_grad_year);
  printf("MS GPA: %.2f\n", getMsGpa());
}
