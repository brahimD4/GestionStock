#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void RetirerP(int (*T)[5]){
	int code,quantite;
int i,j,k;
printf("retirer un produit :\n");
printf("code prd = ");
scanf("%d",&code);
printf("quantite = ");
scanf("%d",&quantite);
for(j=0;j<5;j++){

	if(T[0][j]==code){
	if(quantite <= T[1][j]){
		*((int*)T+1*j+5)-=quantite;
	}else{
		printf("la quantite est superieur");
	}
	}else
	printf("Ce produit n existe pas");
	return;
}

}

void Affiche(int (*T)[5] ){
	int i=0,j,k,l;
	printf("code pro:\t ");
	for(j=0;j<5;j++){
		
		printf("%d\t ",*((int*)T+i*5+j))	;
	}
	printf("\n");
	printf("\n");
l=1;
	printf("quantite:\t ");
	for(k=0;k<5;k++){
		printf("%d\t ",*((int*)T+l*5+k));
	}
	
}
void AjouteP( int (*produit)[5],int *p){
int code,quantite;
printf("entrez un produit :\n");
printf("code produit = ");
scanf("%d",&code);
printf("quantite     = ");
scanf("%d",&quantite);
	 int k, j;
	 if(*p>5){
	 	printf("stock plan");
	 	return;
	 }
	for(j=0;j<5;j++){	
	if(produit[0][j]==code){
	produit[1][j]+=quantite;
	printf(" ce produit est deja existe \n");
	return;
	}else{
		for(k=*p;k<5;k++){	
	if(produit[0][k]!=code){	
		produit[0][*p]=code;
		produit[1][*p]=quantite;
	   (*p)++;
		return;
		}	
		}
	}
	}
	
}	

int main(){
int	produit[2][5]={};
int n=0;
int*p=&n;
int choix;

printf("\n");
printf("\n");
do{
printf("*********Menu********\n");
printf("choisir votre operation:\n ");
printf("1 : Afficher les produits:\n ");
printf("2 : Ajouter un produit :\n ");
printf("3 : Retirer un produit :\n ");
printf("4 : quitte  :\n");	
scanf("%d",&choix);
switch(choix){
	case 1:
		Affiche(produit);
		break;
	case 2:
		AjouteP(produit,&n);
		printf("\n");
		Affiche(produit);
		
		break;
	case 3:
	    RetirerP(produit);
	    printf("\n");
	    Affiche(produit);
	    break;
	case 4:
		printf("quitte le programe");
		break;
	default:
		printf("entrez un nombre entre 1 _ 4");
}
	printf("\n");
	printf("\n");
}while(choix!=4);

return 0;
}


