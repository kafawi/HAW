#include <math.h>
#include <stdio.h>
#include "sieb.h"

// ---------------------------------------------------------------- ALGORITHM -

// -------------------------------------------------- INITIALISATION ----------
char prim_arr[ANZ]; 

void init_prim_arr(){
	//  --  DEKLARATION --
	// indizes
	int i;	
	
	char prim_arr[ANZ]; 
	
	// -- DEFINITION --
	prim_arr[0]=0;
	prim_arr[1]=0;
	for (i=2;i<ANZ;i++){
		prim_arr[i]=1;	
	}
	return;
}
// ------------------------------------------------------ CALCULATION ---------
void calc_prim_arr(){
	//  --  DEKLARATION --
	// indizes
	int i, endi, j;
	char prim_arr[ANZ];
	
	// -- DEFINITION --
	endi=(int)sqrt((double)ANZ);
	
	// -- CALCULATION --
	for (i=0;i<endi;i++){
	//	printf("%i ",i);
		if (prim_arr[i]==1) {
			for (j=i+i;j<ANZ;j=j+i) {
				prim_arr[j]=0;
			}
		}
	}
	return;
}

// ----------------------------------------------------- SUMMARYSE ------------

int calc_sum_prim(int start, int ende){
	
	int i;
	int anz_prim;
	char prim_arr[ANZ]; 
	
	
	if (ende > ANZ) {
		ende = ANZ;
	}
	anz_prim=0;
	for (i=start;i<ende;i++){
		if(prim_arr[i]==1){
			anz_prim++;		
		}
	}
	return anz_prim;
}

//-------------------------------------------------------- DEBUG Print -------

void print_prim_arr(){
	//  --  DEKLARATION --
	// indizes
	int i,j,jend;	 
	char prim_arr[ANZ]; 
	
	jend=10;
	// -- DEFINITION --
	printf("\t :-1-:-2-:-3-:-4-:-5-:-6-:-7-:-8-:-9-:10\n");
	printf("\t ---------------------------------------\n");
	for (i=0;i<ANZ;i=i+10){
		printf("%u\t",i);
		for(j=0;j<jend;j++){
			printf(" : %i",prim_arr[i+j]);
		}
		printf("\n");
	}
	return;
}
// ---------------------------------------------------------------------- EOF -
