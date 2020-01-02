/*c5-1.c*/
#include <stdio.h>
int main( )
{ int i, j, k;
for ( i=1;i<=9; i++)
/************found************/
{ for ( j=1;j<=i; j++)
printf("%3d *%3d =%3d", i, j, i*j );
/************found************/
printf("\n");
}
return 0;
}
