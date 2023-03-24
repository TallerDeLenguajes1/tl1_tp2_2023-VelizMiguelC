#include <stdlib.h>
#include <stdio.h>

#define N 20
/* int i; */

int main(){
    double vt[N];
    double *pvt;
    pvt=vt;
    for(int i = 0;i<N; i++)
    {
        vt[i]=1+rand()%100;
        printf("posicion %d: %2.f\n",i,*pvt);
        pvt++;
    }
    
}