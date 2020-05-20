#include <bits/stdc++.h>
using namespace std;

int main(){
    int entrada;
    scanf("%d",&entrada);

    bool flag=0;
    for(int i=0; i<entrada; i++){
        for(int j=0; j<entrada; j++){
            if(flag==0&&(i+j)==entrada-1){
                printf("#");
                flag=1;
            }
            if(flag==0&&(i+j)<entrada) printf(" ");
            if(flag==1&&(i+j)>=entrada) printf("#");
            if(j==(entrada-1)){
                printf("\n");
                flag=0;
            }
            if(i==j&&i==entrada-1) break;
        }
    }
    return 0;
}