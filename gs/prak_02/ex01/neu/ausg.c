#include "main.h"
#include <stdio.h>
#include <string.h>
//#include "TI_Lib.h"
#include "tft.h"

//int anz_prim;

void print_ergebnis_TFT(){
	char ausgabe[80];

	
//	if (!oefters_ausgefuehrt){

//		oefters_ausgefuehrt = true;	
//	}
	
	sprintf(ausgabe, "Primzahlenanzahl zwischen %d und %d: %d \n", start, ende, prim_anz );
	TFT_puts(ausgabe);
	
	return;
}
