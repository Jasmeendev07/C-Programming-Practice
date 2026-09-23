#include <stdio.h>
void square(int n) {
   printf("triple = %d",n*3);
}
int main() {
   int num;
   printf("Enter a number:");
   scanf("%d",&num);
   square(num);
   return 0;
}
