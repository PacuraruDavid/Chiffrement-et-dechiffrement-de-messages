/******************************************************************************
*  ASR => 4R2.04                                                              *
*******************************************************************************
*                                                                             *
*  N° de Sujet :   Sujet 3                                                    *
*                                                                             *
*******************************************************************************
*                                                                             *
*  Intitulé :   Chiffrement de message                                        *
*                                                                             *
*******************************************************************************
*                                                                             *
*  Nom-prénom1 :     MAS-BOUVRY Diego                                         *
*                                                                             *
*  Nom-prénom2 :     PACURARU David-Mihai                                     *
*                                                                             *
*  Nom-prénom3 :     MOUNKALA Florian                                         *
*                                                                             *
*  Nom-prénom4 :     MADI Amina                                               *
*                                                                             *
*******************************************************************************
*                                                                             *
*  Nom du fichier :  projet.h					              *
*                    projet.c                                                 *
*                    main.c                                                   *
*                    makefile                                                 *
*                                                                             *
******************************************************************************/


#include "projet.h"
#include "projet.c"
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define TAILLE_TABLEAU 100


void main(){
	
	char message[TAILLE_TABLEAU];		 //Message de début (variable)
	char ct[TAILLE_TABLEAU];			 //Message crypté (variable)
	char plaintext[TAILLE_TABLEAU];      //Message décrypté (variable)
	
	//Input du message
	printf("Cette application permet de chiffrer et déchiffrer un message. Tester en saisissant un mesaage\n");
	printf("Saisissez votre message : ");
	scanf("%s", message);
	
	//Verification alphanumérique
	if(VerifCaracSpec(message) == false){
		printf("%c\n message non valide, vous ne devez pas utiliser des caractères spéciaux !\n");
	}
	
	else{
		//Choix de l'algorithme	
		printf("Saisissez le choix de votre algorithme (1:Caesar; 2:Vigenere): ");
		int choix;
		scanf("%d", &choix);
		
		//L'algorithme Caesar
		if (choix == 1) {
			caesarEnc(message, 3 , ct);
			caesarDec(ct, 3 , plaintext);
			
			printf("message:                        %s \n", message);
			printf("message crypté avec Caesar:	%s \n", ct);
			printf("message décrypté avec Caesar:	%s \n", plaintext);
		
		}
		//L'algorithme Vigenere
		else if (choix == 2) {		
			vigenereEnc(message, "crypto", ct);
			vigenereDec(ct, "crypto", plaintext);
	
			printf("message:                          %s \n", message);
			printf("message crypté avec Vigenere:	  %s \n", ct);
			printf("message décrypté avec Vigenere:	  %s \n", plaintext);
		}
	
	}

	
}
