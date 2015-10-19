#include <stdio.h>
#include "sieb.h"

int prim_anz;
int start;
int ende;


void main(){
	start = 0;
	ende  = 100;
	
	init_prim_arr();
	calc_prim_arr();
	//print_prim_arr();

	
	prim_anz = calc_sum_prim(start,ende);
	print_ergebnis_TFT();
}
