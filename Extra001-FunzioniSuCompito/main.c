#include <stdio.h>
#include <stdlib.h>

#define N 5

void inputAnni(int anni[],int n){
    int i;
    
    for(i=0;i<n;i++){
        printf("Inserire l'eta' della %da persona: ",i+1);
        scanf("%d",&anni[i]);
    }
}

int controlloMaggiorenni(int anni[],int n){
    int i, maggiorenni=0;
    for(i=0;i<n;i++)
        if(anni[i]>17)
            maggiorenni++;
    return maggiorenni;
}

int main(int argc, char** argv) {
    
    int vettoreAnni[N];
    int maggiorenni = 0;
    
    printf("Inserisci l'eta' di %d persone\n\n", N);
    inputAnni(vettoreAnni, N);
    maggiorenni = controlloMaggiorenni(vettoreAnni, N);
    printf("I maggiorenni sono: %d", maggiorenni);
    
    return (EXIT_SUCCESS);
}

