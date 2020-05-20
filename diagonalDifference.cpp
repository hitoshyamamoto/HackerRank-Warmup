#include <bits/stdc++.h>

using namespace std;

int main(){
    int tamanho=0;
    scanf("%d",&tamanho);

    int diagonal1=0;
    int diagonal2=0;
    int aux;

    for(int i=0;i<tamanho;i++){
        for(int j=0; j<tamanho;j++){
            scanf("%d",&aux);
            if(i==j) diagonal1+=aux;
            if((i+j)==tamanho-1) diagonal2+=aux;
        }
    }
    printf("%d\n",abs(diagonal1-diagonal2));
}