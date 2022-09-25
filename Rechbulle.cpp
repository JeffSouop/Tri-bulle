#include<stdio.h>
#define n 4
int main(){
	int tab[n];
	int i,j,tmp;
	for(i=0; i<=n; i++){
		printf("saisir la valeur %d\t",i+1);
		scanf("%d",&tab[i]);
	}
	for(i=0; i<=n-2; i++){
		for(j=i+1; j<=n; j++){
			if(tab[i]>tab[j]){
				tmp=tab[i];
				tab[i]=tab[j];
				tab[j]=tmp;
			}
		}
	}
	printf("tableau trie dans l'ordre croissant\n");
	for(i=0; i<=n; i++){
		printf("%d\t",tab[i]);
	}
}