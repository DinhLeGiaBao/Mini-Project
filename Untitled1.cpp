#include<iostream>
int main() {
	int n, count;
	printf("Define value for n"); scanf("%d,&n");
	if(n < 2 ) printf("not PN");
    else
	{ unsigned int i ;count = 0;
	  for ( i < n ; i + 2 ; i ++)
	      if(n% i==0) cnt++;
	}
	if (" count ==2 " ) printf("PN");
	else printf ("not PN");
	return 0;
}
