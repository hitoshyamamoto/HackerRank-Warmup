#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

int main(){
    int entrada;
    scanf("%d",&entrada);

    ull aux;
    ull soma=0;
    for(int i=0; i<entrada; i++){
        scanf("%lld",&aux);
        soma+=aux;
    }
    printf("%lld\n",soma);
}