#include<stdio.h>
int main(){
    int x,n;
    do{
    printf("Saisir n entiers :");
    scanf("%d",&n);
    }while(n<0);
    for(int i=0;i<n;i++){
            do{
        puts("Saisir un entier negatif:");
        scanf("%d",&x);
        }while(x>0);
        printf("Le nombre que tu as saisi est %d",x);
    }
return 0;
}
