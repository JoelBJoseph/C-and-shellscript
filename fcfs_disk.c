#include<stdio.h>
#include<stdlib.h>

int main() {
    int RQ[100],i,n,totalHeadMovement=0,initial;

    printf("Reading Number of Requests : ");
    scanf("%d",&n);

    printf("Enter the Request Sequence\n");
    for(i=0;i<n;i++)
     scanf("%d",&RQ[i]);

    printf("Reading Initial Head Position : ");
    scanf("%d",&initial);
    
    for(i=0;i<n;i++) {
        totalHeadMovement=totalHeadMovement+abs(RQ[i]-initial);
        initial=RQ[i];
    }
    
    printf("\nTotal Head Movements = %d\n",totalHeadMovement);
    return 0;
}
