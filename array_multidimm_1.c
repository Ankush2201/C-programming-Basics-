# include<stdio.h>

int main(){
 int array[2][2];
  for ( int i = 0; i<2 ; i++ ){
    for ( int j =0 ; j < 2 ;j++){
        printf("enter the marks of student %d at class%d : \n", i+1 ,j+1 ) ;
        scanf("%d" , &array[i][j]);
    }
  }
  for ( int i = 0; i<2 ; i++ ){
    for ( int j =0 ; j < 2 ;j++){
        printf(" the marks of student %d at class%d : %d\n", i+1 ,j+1 , array[1][j] ) ;
    }
  }
return 0 ;
}