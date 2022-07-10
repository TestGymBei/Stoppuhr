
#include <stdio.h>
#include <time.h>

int main () {

	time_t startzeit, endzeit;
	double diffzeit;

	char e;
	char stopp;

	scanf("Stoppuhr starten? (y/n) %c\n", &e);

	if (e == y){

		time(&startzeit);
		scanf("Zeit gestartet. Zum Stoppen s druecken.\n", &stopp);

		do{
			sleep(1);
		}while(stopp != s);

		time(&endzeit);

		diffzeit = difftime(endzeit, startzeit);

		printf("Die gestoppte Zeit ist: %f\n", diffzeit);

	}

	else if (e == n){
		printf("dann eben nicht - auf Wiedersehen!");
	}

	else {
		printf("Undefinierte Eingabe.");
	}


	return 0;
}
