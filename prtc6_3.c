# include<stdio.h>
int average (int *a , int *b);

int average (int *a , int *b){
    int c ;
    c = *a + *b ;
    printf( " sum value will be %d\n", c);
    int average = c/2 ; 
    printf( " average = %d\n" , average);
return 0 ;
}
int main(){
 int a; 
 int b ; 
printf("enter number 1\n " );
scanf("%d", &a );
printf("enter number 2\n " );
scanf("%d", &b );  
average ( &a , &b );
return 0 ;
}