# include <stdio.h>
# include <string.h>

int main()
{
  char str1[26];
  char str2[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '\0'};
  for (int i = 0;i < 26; i++){
    char* pto1 = str1;
    *(pto1+i) = 'a'+i;
    *(pto1+26) = '\0';
  }
  printf("The first string is | %s |\n", str1);
  printf("The second string is  | %s |\n", str2);

  if (strcmp(str1, str2)==0){
    printf("The two strings are same");
  } else{
    printf("The two strings are different");
  }

  for( int j = 0; j < 26; j++){
    char* pto2 = str1;
    *(pto2+j) = 'A'+j;
  }
  if (strcmp(str1, str2) == 0){
    printf("The two strings are same");
  } else {
    printf("The two strings are different");
  }

  char str3[100];
  strcat(str3, str1);
  strcat(str3, str2);
  printf("The third string is | %s |\n", str3);
}
