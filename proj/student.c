//
// student.c
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "student.h"
#include "encrypt.h"


const char* STUFILE = "studentdata.txt";

// keeps track of the number of students in the students array
int numStudents = 0;

// holds the student pointer array
Student* students[100] = {0};


void createStudent(char* fname, char* lname, int age, int id)
{
  // createStudent dynamically creates a Student on the heap and adds that
  // student to the student array
  //  - the firstName and lastName strings should be dynamically created
  //    based on the size of the fname and lname args
  Student* st = (Student*)malloc(sizeof(Student));
  st->fname = (char*)malloc((strlen(fname)+1))*sizeof(char));
  st->lname = (char*)malloc((strlen(lname)+1))*sizeof(char));
  strcpy(st->firstname, fname);
  strcpy(st->lastname, lname);
  st->age = age;
  st->id = id;
  students[numStudents] = st;
  numStudents ++;
}


void deleteStudent(Student* student)
{
  // free the memory associated with a student including the strings
  free(st->fname);
  free(st->lname);
  free(st);
}


void deleteStudents()
{
  // iterate over the students array deleting every student and setting te pointer
  // values to 0 and adjusting the numStudents to 0
  for(int i = 0;i < numStudents;i++){
    deleteStudent(student[i]);
    student[i]=0;
  }
  numStudents = 0;
}


void saveStudents(int key)
{
  // save all students in the student array to a file 'studentdata.txt' overwriting
  // any existing file
  //   - the format of the file is one line per student as follows fname lname age id:
  //       tom thumb 15 1234 
  //       james dean 21 2345 
  //       katy jones 18 4532
  // the best way to do this is to convert the student data to a string using sprintf and then
  // (optionally) encrypt the whole string before writing it to disk (see cdemo/fileio3.c)
  FILE* fp;
  fp = fopen("studentdata.txt", "w");
  char buff[256];
  if(fp){
    for(int i = 0; i < numStudents;i++){
      Student* st = students[i];
      sprintf(buff, "%s %s %d %ld", st->fname, st->lname, st->age, st->id);
      if(key != 0){
        caesarEncrypt(buff, key);
      }
      fprintf(fp, "%s", buff);
    }
    fclose(fp);
}


void loadStudents(int key)
{
  // load the students from the data file overwriting all exisiting students in memory
  //  - make sure you first deleteStudents before loading new ones
  //  - when loading it is best to load data into four strings and then (optionally) decrypt the
  //    strings
  //  - call createStudent to correctly create the students
  char b1[256];
  char b2[256];
  char b3[256];
  char b4[256];
  if(numStudents>0){
    deleteStudents();
  }
  FILE* fp;
  fp = fopen("studentdata.txt", "r");
  if(fp){
    int match = fscanf(fp, "%s %s %s %s", b1, b2, b3, b4);
  }
  if(match == 4){
    if(key != 0){
      caesarDecrypt(b1, key);
      caesarDecrypt(b2, key);
      caesarDecrypt(b3, key);
      caesarDecrypt(b4, key);
    }
    int age;
    long id;
    sscanf(b3, "%d", age);
    sscanf(b4, "%ld", id);
    createStudent(b1, b2, age, id);
  }
}


void printStudent(Student* student)
{
  printf("  Student: %s %s\n", student->firstName, student->lastName);
  printf("    age: %d\n", student->age);
  printf("    id: %ld\n", student->id); 
}


void printStudents()
{
  for (int i = 0; i < numStudents; i++) {
    printf("\n----- student %d ------\n", i);
    printStudent(students[i]);
  }
}




