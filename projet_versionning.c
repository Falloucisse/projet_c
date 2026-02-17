#include<stdio.h>
int main(){
    int x,n,somme=0,cpt=0,nb_pair=0,nb_impairs=0;
    float moy;
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
      if(x%2==0){
            somme==somme%x;
            cpt++;
        }
        moy= somme/cpt;
        printf("la moyenne est %d\n",moy);
        if(nb_pair!=0){
             moy=somme/nb_pair;
            printf("moyenne des nombres paires=%.2f\n",moy);
        }
        if(nb_impairs != 0) {
            moy= somme / nb_impairs;
            printf("Moyenne des nombres impairs = %.2f\n", moy);
        }
return 0;
}
