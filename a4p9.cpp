#include <stdio.h>
union student {
  char name[50];
  float gpa;
};

int main() {
  union student s;
  printf("Enter the student's name: ");
  fgets(s.name, sizeof(s.name), stdin);
  printf("Enter the student's GPA: ");
  scanf("%f", &s.gpa);

  // Print the student's name and GPA
  printf("Student Name: %s\n", s.name);
  printf("GPA: %.2f\n", s.gpa);

  return 0;
}

