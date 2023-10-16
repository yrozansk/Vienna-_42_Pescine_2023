#include<stdio.h>

int	main(void){
	int zahl=7;
	int *zeiger = &zahl;

	printf("Adresse zahl: %p\n", &zahl);
	printf("Wert zahl: %d\n\n", zahl);
	printf("Adresse zeiger: %p\n", &zeiger);
	printf("Wert zeiger: %p\n", zeiger);
	printf("Wert von Adresse %p: %d\n", zeiger, *zeiger);
	return(0);
}

//-------------------------------------------------------------------
////Pointer beispiele zum Üben

// Pointer zu einem String
/*
int main(void)
{
	char *d = "hello";
	char **a = &d;

	printf("%s\n", *a);
	return 0;
}
*/

//Pointer zu Zahlen
/*
int main(void)
{
	int a = 12345;
	int *ap = &a;

	printf("%d\n", *ap);
	return (0);
}
*/

// Pointer zu einem Character
/*
int main(void)
{
	char a = 'H';
	char *ap = &a;

	printf("%c\n", *ap);
	return (0);
}
*/
//----------------------------------------------------------------------


/*
int main(void)
{
// Getraenke Automat Version 0.1

int einwurf;
printf("Getraenke Automat | Bitte werfen sie 1 Euro ein: ");
scanf("%d", &einwurf);

// überpruefe Geldstueck
if(einwurf == 1) {
	printf("\nVielen Dank, bitte entnehmen sie ihr Getraenk.\n");
}else {
	printf("\nSie haben kein 1 Euro Stueck eingeworfen.\n");
}
*/

/*
int main(void)
{
	float Zahl_1, Zahl_2;

	printf("Taschenrechner\n");
	printf("\nGeben Sie die 1. Zahl ein: ");
	scanf("%f", &Zahl_1);
	printf("\nGeben Sie die 2. Zahl ein: ");
	scanf("%f", &Zahl_2);
	printf("\nDie Summe ergibt %1.2f\n", Zahl_1+Zahl_2);
	return (0);
}
*/

/*
int main(void)
{
	int a, b=5, c, d;

	a = b / 2;
	c = b % 2;
	d = b << a;
	b = (1 -= (--b));

	d %= 3;

	// 10100

	printf("d: %d\n", d);
	return (0);
}*/