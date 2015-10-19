#include <stdio.h>
#include "sieb.h"

void main(){
	init_prim_arr();
	calc_prim_arr();
	print_prim_arr();

	
	printf("Anzahl: %i \n",calc_sum_prim(0,100));
}
//dies ist die main