#include <stdio.h>

int main(){
    int N,M,temp;
    scanf("%d",&N);
    int lista[N];
    for(int repeteco=0;repeteco<N;repeteco++){
        scanf("%d",&temp);
        lista[repeteco] = temp;
    }
    scanf("%d",&M);
    for(int primario=0;primario<M;primario++){
        scanf("%d",&temp);
        for (int verificar = 0;verificar<(N-primario);verificar++){
            if (lista[verificar]==temp){
                for(int movimento = verificar;movimento<(N-primario);movimento++){
                    lista[movimento]=lista[movimento+1];
                }
                verificar--;
            }
        }
    }
    printf("%d",lista[0]);
    for(int i = 1; i < N-M; i++) {
        printf(" %d",lista[i]);
    }
    return 0;
}
