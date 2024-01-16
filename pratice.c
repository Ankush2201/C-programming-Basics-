# include<stdio.h>
void patterndisplay( int n) ;

void patterndiplay ( int n){
    
    for ( int a ; a > (2*n-1) ; a++ ){
        printf("*");
    }
    printf("\n");
}


int main(){
 int a ; 
 printf("enter the value of number of row you want\n");
 scanf("%d" , &a );
 for (int i = 1; i <= a; i++) {
        patterndiplay(i);
 }
return 0 ;
}