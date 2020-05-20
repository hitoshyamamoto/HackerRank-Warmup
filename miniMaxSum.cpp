#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

int main(){
    ull aux;
    ull total=0;
    ull menor=10000000000;
    ull maior=0;
    for(int i=0; i<5; i++){
        scanf("%lld",&aux);
        total+=aux;
        if(aux>maior) maior=aux;
        if(aux<menor) menor=aux;
    }
    printf("%lld", total-maior);
    printf(" %lld\n",total-menor);
    return 0;
}