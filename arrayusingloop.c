# include<stdio.h>

int main(){
 int marks[6]; 
  for ( int i = 0 ;i<5 ; i++ ){
    printf( " enter value of marks of student %d\n" , i+1);
    scanf("%d", &marks[i]);
  }
  for ( int i = 1 ;i<5 ; i++ ){
    printf( " enter value of marks of student %d is %d\n" , i+1,  marks[i]);
  }

return 0 ;
}