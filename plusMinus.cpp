#include <bits/stdc++.h>

int main(){
    int entrada;
    scanf("%d",&entrada);

    int aux;
    double contagem[3]={};
    for(int i=0; i<entrada; i++){
        scanf("%d",&aux);
        if(aux<0) contagem[0]++;
        else if(aux==0) contagem[1]++;
        else if(aux>0) contagem[2]++;
    }
    printf("%.6lf\n%.6lf\n%.6lf\n",contagem[2]/entrada,contagem[0]/entrada,contagem[1]/entrada);
    return 0;
}