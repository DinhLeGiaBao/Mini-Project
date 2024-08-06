#include <iostream> 
int main ()
{
	int n;
do {
	printf("Define n \n");
	scanf("%d , &n");
} while ( n < 0 || n% 2 != 0);
  printf("n= %d", n);
return 0;
}