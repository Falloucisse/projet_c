#include<stdio.h>
int main(){
    int x,n,somme=0,cpt=0,moy,nbr=0;
    do{
    printf("Saisir n entiers :");
    scanf("%d",&n);
    }while(n<0);
    for(int i=0;i<n;i++){
            do{
        puts("Saisir un entier negatif:");
        scanf("%d",&x);
        }while(x>0);
        if(x%2==0){
            somme=somme+x;
            cpt++;
        }
    }
    moy=somme/cpt;
    printf("La moyenne des nombres pairs est %d",moy);
    nbr=nbr+x;
    printf("La moyenne des nombres impairs est %d",nbr);
return 0;
}
