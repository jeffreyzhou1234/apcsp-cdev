#include <stdio.h>

// student structure
//struct Student...
struct Student {
    char firstname[50];
    char lastname[50];
    int  age;
    int  studentid;
};

void printStudent(struct Student* student)
{
  printf("----- student -----\n");
  printf("Student: %s %s\n", student->firstname, student->lastname);
  printf("Age: %d\n", student->age);
  printf("ID: %d\n", student->studentid);
}


void printAllStudents(struct Student students[], int num)
{
  // call printStudent for each student in students
  for(int i;i<num;i++){
    printStudent(i);
  }
}


int main()
{

  // an array of students
  //xxx students;

  int numStudents = 0;
  char input[256];
  while (1)
  {
    char c;
    printf("\nEnter a to add, p to print, q to quit:");
    fgets(input, 256, stdin);
    if (sscanf(input, "%c", &c) != 1) continue;
    if (c == 'q') 
    {
      break;
    }
    else if (c == 'p')
    {
      // print all students
      printAllStudents(Student, numStudents);
      continue;
    }
    else if (c == 'a')
    {
      // enter a new student
      struct Student numStudents;
      printf("First name: ");
      scanf("%s", numStudents.firstname);
      printf("Last name: ");
      scanf("%s", numStudents.lastname);
      printf("Enter age: ");
      scanf("%d", numStudents.age);
      printf("Enter id: ");
      scanf("%d", numStudents.studentid);
      numStudents = numStudents + 1;
    }
  }
  
  printf("\nGoodbye!\n");
}
