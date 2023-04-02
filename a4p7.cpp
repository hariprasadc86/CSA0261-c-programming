#include <stdio.h>
#include <string.h>

struct student {
   int roll_no;
   char stud_name[50];
   int mark1;
   int mark2;
   int mark3;
   int total_marks;
   float avg_marks;
};

void descending_order(struct student stud[], int n);

int main() {
   int i, n;
   struct student stud[50];

   printf("Enter number of students: ");
   scanf("%d", &n);

   for(i=0; i<n; i++) {
      printf("\nEnter details of student %d:\n", i+1);
      printf("Roll number: ");
      scanf("%d", &stud[i].roll_no);
      printf("Name: ");
      scanf("%s", stud[i].stud_name);
      printf("Mark 1: ");
      scanf("%d", &stud[i].mark1);
      printf("Mark 2: ");
      scanf("%d", &stud[i].mark2);
      printf("Mark 3: ");
      scanf("%d", &stud[i].mark3);

      stud[i].total_marks = stud[i].mark1 + stud[i].mark2 + stud[i].mark3;
      stud[i].avg_marks = stud[i].total_marks / 3.0;
   }

   descending_order(stud, n);

   printf("\n\n********** Student Details **********\n\n");
   printf("Roll No\tName\t\tMark 1\tMark 2\tMark 3\tTotal Marks\tAverage Marks\n");
   printf("-------------------------------------------------------------------------------------\n");
   for(i=0; i<n; i++) {
      printf("%d\t%s\t\t%d\t%d\t%d\t%d\t\t%.2f\n", stud[i].roll_no, stud[i].stud_name, stud[i].mark1, stud[i].mark2, stud[i].mark3, stud[i].total_marks, stud[i].avg_marks);
   }

   return 0;
}

void descending_order(struct student stud[], int n) {
   int i, j;
   struct student temp;

   for(i=0; i<n; i++) {
      for(j=i+1; j<n; j++) {
         if(stud[i].total_marks < stud[j].total_marks) {
            temp = stud[i];
            stud[i] = stud[j];
            stud[j] = temp;
         }
      }
   }
}

