/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "principal1.h"

void
principal1_1(char * host, int op) {
  CLIENT * clnt;
  char * * result_1;
  struct Datosentrada calculadora_horoscopo_1_arg;
  char * * result_2;
  int horoscopo_semana_1_arg;
  char * * result_3;
  struct Datosentrada compatibilidad_horoscopo_1_arg;
  char * * result_4;
  struct Datosentrada horoscopo_chino_1_arg;

  char resultado[9999];
 

  #ifndef DEBUG
  clnt = clnt_create(host, PRINCIPAL1, PRINCIPAL1_VER, "udp");
  if (clnt == NULL) {
    clnt_pcreateerror(host);
    exit(1);
  }
  #endif /* DEBUG */

  /*========================================================*/
  switch (op) {

  case 1:

    system("clear");

    printf("|===========================================|\n");
    printf("|=== Calculadora de de signo del zodiaco====|\n");
    printf("|===========================================|\n");
    printf("\n\n");
/****************validando entradas de fechas************************/
      do{
    printf("\n   Introduzca dia (1-31) : ");  
    scanf("%d",&calculadora_horoscopo_1_arg.d);
    }while(calculadora_horoscopo_1_arg.d < 1 || calculadora_horoscopo_1_arg.d > 31 );

     do{
    printf("\n   Introduzca mes (1-12):");
    scanf("%d",&calculadora_horoscopo_1_arg.m);
      }while(calculadora_horoscopo_1_arg.m < 1 || calculadora_horoscopo_1_arg.m > 12 );


     do{
    printf("\n   Introduzca anio (1930-2018):");
    scanf("%d",&calculadora_horoscopo_1_arg.a);
      }while(calculadora_horoscopo_1_arg.a < 1930 || calculadora_horoscopo_1_arg.a > 2018 );
  
    result_1 = calculadora_horoscopo_1( & calculadora_horoscopo_1_arg, clnt);
    if (result_1 == (char ** ) NULL) {
       clnt_perror(clnt, "call failed");
    }

    sprintf(resultado,"%s\n", (char *) *result_1);
    printf("%s", resultado);

    /**/

    /**/

    break;
    /****************************************************************************************/
  case 2:

    system("clear");
    printf("|===============================|\n");
    printf("|=== Horoscopo de la semana ====|\n");
    printf("|===============================|\n");
    printf("\n\n\n");


    printf("--Escoja su signo--\n");
    printf("1.- Piscis \n");
    printf("2.- Tauro\n");
    printf("3.- Geminis\n");
    printf("4.- Cancer \n");
    printf("5.- Leo\n");
    printf("6.- Virgo\n");
    printf("7.- Libra\n");
    printf("8.- Escorpion \n");
    printf("9.- Sagitario\n");
    printf("10.-Capricornio\n");
    printf("11.-Acuario\n");
    printf("12.-Aries\n");
  //  printf("0.- Salir\n");
    do{
      printf("ingrese la opcion del 1 al 12:\n");
    scanf("%i", &horoscopo_semana_1_arg);
    fflush(stdin);
 }while(horoscopo_semana_1_arg!=1 && horoscopo_semana_1_arg!=2 && horoscopo_semana_1_arg!=3 && horoscopo_semana_1_arg!=4 && horoscopo_semana_1_arg!=5 && horoscopo_semana_1_arg!=6 && horoscopo_semana_1_arg!=7 && horoscopo_semana_1_arg!=8 && horoscopo_semana_1_arg!=9 && horoscopo_semana_1_arg!=10 && horoscopo_semana_1_arg!=11 && horoscopo_semana_1_arg!=12);
     result_2 = horoscopo_semana_1( & horoscopo_semana_1_arg, clnt);
     if (result_2 == (char ** ) NULL) {
                clnt_perror(clnt, "call failed");
     }
     
    
    sprintf(resultado,"%s\n", (char *) *result_2);
    printf("%s", resultado);
    break;

    /****************************************************************************************/
  case 3:

    system("clear");
  printf("|====================================|\n");
  printf("|=== Compatibilidad entre Signos ====|\n");
  printf("|====================================|\n");
  printf("\n\n\n");
    printf("--Escoja su signo--\n");
    printf("1.- Aries\n");
    printf("2.- Tauro\n");
    printf("3.- Geminis\n");
    printf("4.- Cancer\n");
    printf("5.- Leo\n");
    printf("6.- Virgo\n");
    printf("7.- Librar\n");
    printf("8.- Escorpion\n");
    printf("9.- Sagitario\n");
    printf("10.- Capricornio\n");
    printf("11.- Acuario\n");
    printf("12.- Piscis\n");
    scanf("%d",&compatibilidad_horoscopo_1_arg.d);


                        system("clear");
                  printf("--Escoja signo a comparar--\n");
                  printf("1.- Aries\n");
                  printf("2.- Tauro\n");
                  printf("3.- Geminis\n");
                  printf("4.- Cancer\n");
                  printf("5.- Leo\n");
                  printf("6.- Virgo\n");
                  printf("7.- Libra\n");  
                  printf("8.- Escorpio\n");
                  printf("9.- Sagitario\n");
                  printf("10.- Capricornio\n");
                  printf("11.- Acuario\n");
                  printf("12.- Piscis\n");
                  printf("0.- Salir\n");
                  scanf("%d",&compatibilidad_horoscopo_1_arg.m);
  //  printf("0.- Salir\n");

    result_3 = compatibilidad_horoscopo_1( & compatibilidad_horoscopo_1_arg, clnt);
        if(result_3==(char ** ) NULL) {
                   clnt_perror(clnt, "call failed");
     }
     
    sprintf(resultado,"%s\n", (char *) *result_3);
    printf("%s", resultado);

    break;
    /********************************************************************************/
  case 4:

    system("clear");
  printf("|=============================|\n");
  printf("|==Conoce tu Horóscopo chino==|\n");
  printf("|=============================|\n");
  printf("\n\n\n");
    printf("horoscopo chino\n");
/****************validando entradas de fechas************************/



     do{
    printf("\n   Introduzca anio (1930-2018): ");
    scanf("%d",&horoscopo_chino_1_arg.a);
      }while(horoscopo_chino_1_arg.a < 1930 || horoscopo_chino_1_arg.a > 2018 );

    // do{
    //printf("\nIntroduzca: 1) si es hombre -- 2) si es mujer: \t");
    //scanf("%d",&horoscopo_chino_1_arg.genero);
    //}while(horoscopo_chino_1_arg.genero !=1 && horoscopo_chino_1_arg.genero !=2 );

    //horoscopo_chino(d, m, a, genero);
    result_4 = horoscopo_chino_1( & horoscopo_chino_1_arg, clnt);
       if(result_4 == (char ** ) NULL) {
         clnt_perror(clnt, "call failed");
       }


    sprintf(resultado,"%s\n", (char *) *result_4);
    printf("%s", resultado);
    break;
  }

  /*********************************************************/


  #ifndef DEBUG
  clnt_destroy(clnt);
  #endif /* DEBUG */

}

int
main(int argc, char * argv[]) {

  char * host;

  if (argc < 2) {
    printf("usage: %s server_host\n", argv[0]);
    exit(1);
  }
  /*====================================================*/

  /********************************************/
  int respt;

  printf("|=============================|\n");
  printf("|====Servicios de Horoscopo===|\n");
  printf("|=============================|\n");
  printf("\n\n\n");
  printf("1.- Calculadora de signo del zodiaco\n");
  printf("2.- Horóscopo de la semana\n");
  printf("3.- Compatibilidad entre Signos\n");
  printf("4.- Conoce tu Horóscopo chino\n");
  //printf("5.- Salir\n");
do{
  printf("Respuesta(solo numeros del 1 al 4):\n");
  scanf("%i", & respt);
  fflush(stdin);
 }while(respt!=1 && respt!=2 && respt!=3 && respt!=4);

  host = argv[1];
  principal1_1(host, respt);
  exit(0);
}