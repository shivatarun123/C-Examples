#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  char k[] = "tarun";
  char a[7] = {'t','a','r','u','n','\0'}; //terminate with null operator
  int len;
  //the above are two different ways of defining and initializing strings
  
  printf("%s \n",k);
  printf("%s \n",a);
  len =strlen("hello tarun !");
  printf("%d \n",len); //length of string
  return 0;
}
