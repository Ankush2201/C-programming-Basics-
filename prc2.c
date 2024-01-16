#include <stdio.h>

void calculatewaitingtime(int waitingT[], int burstT[], int process[], int n);

void calculatewaitingtime(int waitingT[], int burstT[], int process[], int n) {
    waitingT[0] = 0;

    // Calculate waiting time
    for (int i = 1; i < n; i++) {
        waitingT[i] = waitingT[i - 1] + burstT[i - 1];
    }
}

int main() {
    int n;

    printf("Enter the number of processes: ");
    scanf("%d", &n);

    int waitingT[n];
    int burstT[n];
    int process[n];

    printf("Enter process ids and burst times:\n");
    for (int i = 0; i < n; i++) {
        printf("Process %d: ", i + 1);
        scanf("%d", &process[i]);
        printf("Burst time: ");
        scanf("%d", &burstT[i]);
    }

    calculatewaitingtime(waitingT, burstT, process, n);

    printf("Waiting Times:\n");
    for (int i = 0; i < n; i++) {
        printf("Process %d: %d\n", process[i], waitingT[i]);
    }

    return 0;
}
