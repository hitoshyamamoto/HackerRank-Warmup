#include <bits/stdc++.h>
using namespace std;

int main(){
    int alice[3]={};
    int bob[3]={};
    int pontuacao[2]={};
    for(int i=0;i<3;i++) scanf("%d",&alice[i]);
    for(int i=0;i<3;i++) scanf("%d",&bob[i]);
    for(int i=0;i<3;i++){
        if(alice[i]>bob[i]) pontuacao[0]++;
        else if(alice[i]<bob[i]) pontuacao[1]++;
    }
    printf("%d %d\n",pontuacao[0],pontuacao[1]);
}