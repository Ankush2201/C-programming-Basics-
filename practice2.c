#include<stdio.h>
void calculatewaitingtime( int waitingT[], int burstT[], int process [] ,int n);
void calculatewaitingtime( int waitingT[], int burstT[], int process [] ,int n){
    waitingT[0]= 0;

    // for waiting time 
for (int i=1; i<n ; i++){
 waitingT[i]= waitingT[i-1]+ burstT[i-1] ;
 }

}

int main(){
    int n ;
    printf( "Enter the number of process\n");
    scanf("%d", &n);


    int waitingT[n] ;
    int burstT[n] ; 
    int process [n] ;


    printf( "Enter process ids and Burts time\n");
    for (int i=0 ;i<n;i++ ){
         printf( "Process no " );
         scanf("%d", &process[i]);
         printf("burst time : \n");
         scanf("%d", &burstT[i]);

    }

    calculatewaitingtime( waitingT , burstT , process , n );

    printf(" waiting Times:\n");
    for (int i=0 ; i<n ;  i++){
    printf( " process %d : %d\n" , process[i], waitingT[i]);
    }

    return 0 ;

}