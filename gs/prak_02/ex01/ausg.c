#include "sieb.h"
#include <stdio.h>
#include <string.h>
#include "tft.h"

static bool oefters_ausgefuehrt;

void print_ergebnis_TFT(){
	bool oefters_ausgefuehrt;
	char ausgabe[80];
	
	if (!oefters_ausgefuehrt){
		Init_TI_Board();
		TFT_cls();
	}
	
	sprintf(ausgabe, "Primzahlenanzahl zwischen %i und %i: %i \n", START, ENDE, anz_prim );
	TFT_puts(ausgabe);
	
	
	return;
}
