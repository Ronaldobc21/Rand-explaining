#include <cs50.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>



int main(void){



    string array[5];

    srand(time(NULL));// Aqui obtiene la hora exacta de  la pc en este caso ya sea online por  la libreria  time.h
    int numero = rand()%6 ; // Dependiendo  de la cantidad de elementos  se pone  en el modulo



    for (int  i = 0; i < 5; i++)
    {

     //printf("Dame un Pokemon:");
     //scanf("%s",array[i] ) ;

      array[i] = get_string("Dame un Pokemon: \t");

    }



    printf(" %s, ¡ Yo te elijo ! ", array[numero]);


    return 0;







}