#include <iostream>
using namespace std;

// Lab 5 — Alan Lopez
// CIS 5 Week 05 · Eligibility check

int main() {
  int age = 0;
  double gpa = 0.0;

  // TODO: cout question, then cin, for age and for gpa
  cout << "Enter your age: ";
  cin >> age;
  cout << "Enter your GPA: ";
  cin >> gpa;

  // Adults elegibility starts at 18; honors requires a stronger 3.6 GPA.
  bool adult = age >= 18;
  bool honors = gpa >= 3.6;

  if (adult && honors) { 
    cout << "You meet both requirements." << "\n";
  } else if (adult || honors) {
    cout << "You meet one requirement." << "\n";
  } else {
    cout << "You do not meet either requirement yet." << "\n";
  }
  // Edge values to run: 17 / 18 with a 3.8, and 3.5 / 3.6 with age 20

  return 0;
}
