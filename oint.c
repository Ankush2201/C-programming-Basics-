# include<stdio.h>

int main(){
 int i ;
 int *j = &i;
 int **k = &j;
 printf( "%d\n", i);
 printf( "%d\n", j);
 printf( "%d\n", &i);
 printf( "%d\n", j);
 printf( "%d\n", *j);

return 0 ;
}