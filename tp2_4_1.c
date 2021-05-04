#include <stdio.h>
#include <stdlib.h>
#include <time.h>
typedef struct PC
{
	int GHz, 
	añoFabricacion, 
	cantNucleos;
	char *tipo_cpu;
}PC;


char tipos[6][10]={"Intel","AMD","Celeron","Athlon","Core","Pentium"};


void cargarDatos(PC *datos, int cant);
void mostrarDatos(PC *datos);

PC cagarDatos2(PC dat);
void mostrarDatos2 (PC dat);

void veloz(PC * datos, int cant);
void antiguo(PC * datos, int cant);

int main (){
	srand(time(NULL));
	int cant;
	printf("Ingrese la cantidad de computadoras que quieres registrar: ");
	fflush(stdin);
	scanf("%d",&cant);
	//puntero estructura
	PC *compu1,datos;
	//memoria dinamica a)g)
	compu1=(PC*)malloc(sizeof(PC)*cant);
	//Funciones
	//a)g)
	cargarDatos(compu1,cant);
	//h)
	datos=cagarDatos2(datos);
	//mostrar
	//a)g)
	mostrarDatos(compu1);
	//h)
	mostrarDatos2(datos);

	printf("\n");
	veloz(compu1, &cant);
	printf("\n");
	antiguo(compu1, &cant);
	printf("\n");
	listarDatos(compu1, &cant);
	free(compu1);
	return 0;
}

//cargar y retornar datos de la estructura a) g)
void cargarDatos(PC *datos, int cant){
	int i;
	for (i = 0; i < cant; i++)
	{
		datos->GHz=rand()%(3 - 1 + 1)+1;
		datos->cantNucleos=rand()%(4 - 1 + 1) + 1;
		datos->añoFabricacion=rand()%(2017 - 2000 + 1) + 2000;
		int indice= rand()%(5-0+1)+0;
		datos->tipo_cpu=(char*)malloc(sizeof(char)*10);
		strcpy(datos->tipo_cpu,tipos[indice]);
		datos++;
	}
}

void mostrarDatos(PC *datos){
	printf("\n");
	printf("GH<: %d\n", datos->GHz);
	printf("Nucleos: %d\n", datos->cantNucleos);
	printf("Anio: %d\n", datos->añoFabricacion);
	printf("tipo: %s\n", datos->tipo_cpu);
}

//punto h)
PC cagarDatos2(PC dat){
	dat.GHz=rand()%(3 - 1 + 1)+1;
	dat.cantNucleos=rand()%(4 - 1 + 1) + 1;
	dat.añoFabricacion=rand()%(2017 - 2000 + 1) + 2000;
	//numeros alatoreos para el indice entre 1 y 5
	int indice= rand()%(5-0+1)+0;
	dat.tipo_cpu=(char*)malloc(sizeof(char)*10);
	strcpy(dat.tipo_cpu,tipos[indice]);

	return dat;
}

void mostrarDatos2 (PC dat){
	printf("\n");
	printf("GH<: %d\n", dat.GHz);
	printf("Nucleos: %d\n", dat.cantNucleos);
	printf("Anio: %d\n", dat.añoFabricacion);
	printf("tipo: %s\n", dat.tipo_cpu);
}

void listarDatos(PC * datos, int * cant){
	int i;
	for ( i = 0; i < cant; i++)
	{
		/* code */
		printf("\n");
		printf("GH<: %d\n", datos->GHz);
		printf("Nucleos: %d\n", datos->cantNucleos);
		printf("Anio: %d\n", datos->añoFabricacion);
		printf("tipo: %s\n", datos->tipo_cpu);
		datos++;
	}
}

void veloz(PC * datos, int cant){
	int max=datos->GHz;
	for(int i; i < cant; i++){
		if (datos->GHz >= max)
		{
			max=datos->GHz;
		}
		datos++;
	}
	printf("\nPC mas veloz: \n");
	mostrarDatos(datos);
}

void antiguo(PC * datos, int cant){
	int min=datos->añoFabricacion;
	for(int i; i < cant; i++){
		if (datos->GHz <= min)
		{
			min=datos->GHz;
		}
		datos++;
	}
	printf("\nPC mas vieja: \n");
	mostrarDatos(datos);
}