# include<stdio.h>
int valuIOx (int *a);
int valuIOx (int *a){
    int c ;
    c = *a * 10 ;
    printf( " 10x value will be %d", c);
return 0 ;
}

int main(){
 int a; 
 printf("enter number " );
 scanf("%d", &a );
valuIOx ( &a);
return 0 ;
}