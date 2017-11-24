/*
/*PROYECTO FINAL UNIDAD 7
/*Programa: Ejercicio Unico.
/*Autor(es): Juan José Mendoza Trejo.
/*Problema: La linea de autobuses "Golden Bus, S.A. de C.V." tiene su base de operaciones en Huichapan, Hgo., y requiere un programa para llevar el control de la venta de los boletos y de las corridas diarias.
/*Fecha: 
*/
#include<stdio.h>
#include<windows.h>
void CambiarColorTextoFondo(int texto, int fondo)
{
	WORD wColor = ((fondo & 0x0F) << 4) + (texto & 0x0F);
	SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE), wColor);
}
int dia;
int mes;
int anio;
void CapturaDeCorridas(){
	char opcion2;
	do{
		system("cls");
		CambiarColorTextoFondo(14,0);
		printf("\n\t\t\t\t\tGOLDEN BUS, S.A. DE C.V.");
		printf("\n\t\t\t  Av. Javier Rojo Gomez #230 Col. Abundio Martinez");
		printf("\n\t\t\t\t       C.P 42400, Huichapan, Hgo.");
		printf("\n\n\tFecha: %d/%d/%d",dia,mes,anio);
		printf("\n\n\n\t\tCaptura De Origenes/Destinos");
		printf("\n\n\t\t\tMENU");
		printf("\n\n\t\tA.- Mostrar Corridas Y Tarifas Existentes");
		printf("\n\t\tB.- Capturar Nueva Corrida");
		printf("\n\t\tC.- Modificar Precios O Corridas");
		printf("\n\t\tD.- Eliminar Corrida");
		printf("\n\t\tE.- Regresar Al Menu Principal");
		printf("\n\n\tOPCION: ");
		fflush(stdin);
		scanf("%c",&opcion2);
		if(opcion2>=65&&opcion2<=90){
			opcion2=opcion2+32;
		}
		system("cls");
		switch (opcion2){
			case 'a':
				
			break;
			case 'b':
				
			break;
			case 'c':
				
			break;
			case 'd':
				
			break;
			case 'e':
				printf("\n\n\n\t\t\t\t");
			break;
			default:
				CambiarColorTextoFondo(12,0);
				Beep(1000,300);
				Beep(1000,500);
				printf("\n\t\t\tOpcion Invalida\n\n\t\t\t");
				CambiarColorTextoFondo(14,0);
			break;
		}
		system("pause");
	}while(opcion2!='e');
}
void VentaDeBoletos(){
	char opcion3;
	do{
		system("cls");
		CambiarColorTextoFondo(14,0);
		printf("\n\t\t\t\t\tGOLDEN BUS, S.A. DE C.V.");
		printf("\n\t\t\t  Av. Javier Rojo Gomez #230 Col. Abundio Martinez");
		printf("\n\t\t\t\t       C.P 42400, Huichapan, Hgo.");
		printf("\n\n\tFecha: %d/%d/%d",dia,mes,anio);
		printf("\n\n\n\t\tVenta De Boletos");
		printf("\n\n\t\t\tMENU");
		printf("\n\n\t\tA.- Nueva Venta");
		printf("\n\t\tB.- Regresar Al Menu Principal");
		printf("\n\n\tOPCION: ");
		fflush(stdin);
		scanf("%c",&opcion3);
		if(opcion3>=65&&opcion3<=90){
			opcion3=opcion3+32;
		}
		system("cls");
		switch (opcion3){
			case 'a':
				
			break;
			case 'b':
				printf("\n\n\n\t\t\t\t");
			break;
			default:
				CambiarColorTextoFondo(12,0);
				Beep(1000,300);
				Beep(1000,500);
				printf("\n\t\t\tOpcion Invalida\n\n\t\t\t");
				CambiarColorTextoFondo(14,0);
			break;
		}
		system("pause");
	}while(opcion3!='b');
}
void GeneraReportesDeGerencia(){
	char opcion4;
	do{
		system("cls");
		CambiarColorTextoFondo(14,0);
		printf("\n\t\t\t\t\tGOLDEN BUS, S.A. DE C.V.");
		printf("\n\t\t\t  Av. Javier Rojo Gomez #230 Col. Abundio Martinez");
		printf("\n\t\t\t\t       C.P 42400, Huichapan, Hgo.");
		printf("\n\n\tFecha: %d/%d/%d",dia,mes,anio);
		printf("\n\n\n\t\tGenera Reportes De Gerencia");
		printf("\n\n\t\t\tMENU");
		printf("\n\n\t\tA.- Generar Reporte Del Dia");
		printf("\n\t\tB.- Regresar Al Menu Principal");
		printf("\n\n\tOPCION: ");
		fflush(stdin);
		scanf("%c",&opcion4);
		if(opcion4>=65&&opcion4<=90){
			opcion4=opcion4+32;
		}
		system("cls");
		switch (opcion4){
			case 'a':
				
			break;
			case 'b':
				printf("\n\n\n\t\t\t\t");
			break;
			default:
				CambiarColorTextoFondo(12,0);
				Beep(1000,300);
				Beep(1000,500);
				printf("\n\t\t\tOpcion Invalida\n\n\t\t\t");
				CambiarColorTextoFondo(14,0);
			break;
		}
		system("pause");
	}while(opcion4!='b');
}
void main(int argc, char**argv){
	int opcion;
	if(argc<4){
		CambiarColorTextoFondo(12,0);
		Beep(1000,300);
		Beep(1000,500);
		printf("\n\n\n\n\n\t\t\t\t\tPARAMETROS INSUFICIENTES!!!\n\n\t\t\t\t\t");
		system("pause");
		CambiarColorTextoFondo(15,0);
		system("cls");
		return;
	}
	CambiarColorTextoFondo(14,0);
	dia=atoi(argv[1]);
	mes=atoi(argv[2]);
	anio=atoi(argv[3]);
	system("cls");
	printf("\n\n\n\n\t\t\t\t\t\tGOLDEN BUS, S.A. DE C.V.");
	Beep(0,100);
	printf("\n\n\t\t\t\t\tPrograma De Registro Y Control De Viajes");
	Beep(0,300);
	printf("\n\n\n\n\t\t\t\t\t\t\tBIENVENIDO");
	Beep(0,300);
	Beep(1000,50);
	Beep(3000,50);
	Beep(2000,50);
	Beep(100,1000);
	Beep(3000,50);
	Beep(0,50);
	Beep(3000,50);
	do{
		opcion=-1;
		system("cls");
		CambiarColorTextoFondo(14,0);
		printf("\n\t\t\t\t\tGOLDEN BUS, S.A. DE C.V.");
		printf("\n\t\t\t  Av. Javier Rojo Gomez #230 Col. Abundio Martinez");
		printf("\n\t\t\t\t       C.P 42400, Huichapan, Hgo.");
		printf("\n\n\tFecha: %d/%d/%d",dia,mes,anio);
		printf("\n\n\n\t\t\tMENU PRINCIPAL");
		printf("\n\n\t\t1.- Captura De Origenes/Destinos");
		printf("\n\t\t2.- Venta De Boletos");
		printf("\n\t\t3.- Genera Reportes De Gerencia");
		printf("\n\t\t4.- Salir");
		printf("\n\n\tOPCION: ");
		scanf("%d",&opcion);
		system("cls");
		switch (opcion){
			case 1:
				CapturaDeCorridas();
			break;
			case 2:
				VentaDeBoletos();
			break;
			case 3:
				GeneraReportesDeGerencia();
			break;
			case 4:
				printf("\n\t\t\tGracias Por Utilizar El Programa\n\n\t\t\t");
			break;
			default:
				CambiarColorTextoFondo(12,0);
				Beep(1000,300);
				Beep(1000,500);
				printf("\n\t\t\tOpcion Invalida\n\n\t\t\t");
				fflush(stdin);
				system("pause");
				CambiarColorTextoFondo(14,0);
			break;
		}
	}while(opcion!=4);
	system("pause");
	CambiarColorTextoFondo(15,0);
	system("cls");
}