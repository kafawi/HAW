#include "sieb.h"
#include <stdio.h>
#include <string.h>
#include "tft.h"

static bool oefters_ausgefuehrt = false;
int start;
int ende;
int anz_prim;

void print_ergebnis_TFT(){
	char ausgabe[80];
	
	if (!oefters_ausgefuehrt){
		Init_TI_Board();
		TFT_cls();
		oefters_ausgefuehrt = true;	
	}
	
	sprintf(ausgabe, "Primzahlenanzahl zwischen %i und %i: %i \n", start, ende, anz_prim );
	TFT_puts(ausgabe);
	
	return;
}
