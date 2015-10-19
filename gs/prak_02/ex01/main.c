#include <stdio.h>
#include "sieb.h"

void main(){
	int start = 0;
	int ende  = 100;
	int prim_anz;
	
	init_prim_arr();
	calc_prim_arr();
	//print_prim_arr();

	
	prim_anz = calc_sum_prim(start,ende);
	print_ergebnis_TFT();
}
