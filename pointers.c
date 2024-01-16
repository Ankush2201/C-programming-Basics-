# include<stdio.h>

int main(){
 int a ;
 a = 2404 ;
 int *j= &a ;
 char b = 'a' ;
 char *k= &b ;
 printf(" the value of i is %d\n" ,a );
 printf(" the value of i is %c\n" ,b );
 printf(" the value of i is %d\n" ,*j );
 printf(" the value of i is %u\n" , &a );
 printf(" the value of i is %u\n" , j );
 printf(" the value of i is %u\n" , k );
 printf(" the value of i is %u\n" , &b );








return 0 ;
}