#include <stdio.h>
#include <math.h>

float pi=M_PI;

// for testing only - do not change
void getTestInput(int argc, char* argv[], float* a, int* b)
{
  if (argc == 3) {
    sscanf(argv[1], "%f", a);
    sscanf(argv[2], "%d", b);
  }
}


// add your areaOfCircle function here - it must NOT printf, instead it must
// return the result to be printed in main
int areaOfCircle(float radius){
  float area;
  area = radius*radius*pi;
  return area;
}


int main(int argc, char* argv[]) {
  char input[256];
  float start, upper;
  int reps;

  printf("Input lower:");
  while(1){
    fgets(input, 256, stdin);
    if (sscanf(input, "%f", &start) == 1 && (start > 0)) break;
    printf("Not a valid number\n");
  }
  printf("Input upper:");
  while(1){
    fgets(input, 256, stdin);
    if (sscanf(input, "%f", &upper) == 1 && (upper > start)) break;
    printf("Not a valid number\n");
  }

  reps = upper - start + 1;
 // the two variables which control the number of times areaOfCircle is called
  // in this case 5.2, 6.2, 7.2
//  float start = 5.2;
//  int reps = 3;
  
  // for testing only - do not change
  getTestInput(argc, argv, &start, &reps);

//  printf("calculating area of circle starting at %f, and ending at %f\n", start, start+reps-1);
  
  // add your code below to call areaOfCircle function with values between
  // start and end
  for (int i = reps;i > 0;i--){
    float a = areaOfCircle(start);
    printf("The area of circle is %f\n", a);
    start = start + 1;
}

  
}
