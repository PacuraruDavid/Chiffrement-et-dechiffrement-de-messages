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
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define TAILLE_TABLEAU 100

//Chiffrement Caesar
void caesarEnc(const char * msg, short key, char * ciphertext){
    unsigned int i = 0;
    short rang;
    while( msg[i] != '\0'){
        if( ( msg[i] >= 'a') && (msg[i] <= 'z') ){
            rang = (msg[i] - 'a' + key) % 26;
            if( rang < 0) rang += 26;
            ciphertext[i] = 'a' + rang;
        }
        else if(( msg[i] >= 'A') && (msg[i] <= 'Z')){
            rang = (msg[i] - 'A' + key) % 26;
            if( rang < 0) rang += 26;
            ciphertext[i] = 'A' + rang;
        }
        else {
            ciphertext[i] = msg[i];
        }
        i++;
    }
    ciphertext[i] = '\0';
}

//Déchiffrement Caesar
void caesarDec(const char * ciphertext, short key, char * plaintext){
    caesarEnc(ciphertext, -key, plaintext);
}

//Chiffrement Vigenere
void vigenereEnc(const char * msg, const char * key, char * ciphertext){
    unsigned int i, size = strlen(key);

    for(i = 0; msg[i] != '\0'; i++){
        if( (msg[i] >= 'a') && (msg[i] <= 'z') ){
            int rang = (msg[i] + key[i % size] - 2 * 'a') % 26;
			
            ciphertext[i] = 'a' + rang;
        }
        else if( (msg[i] >= 'A') && (msg[i] <= 'Z') ){
            int rang = (msg[i] + key[i % size] - 'a' - 'A') % 26;
            ciphertext[i] = 'A' + rang;
        }
        else
            ciphertext[i] = msg[i];
    }
    ciphertext[i] = '\0';
}

//Déchiffrement Vigenere
void vigenereDec(const char * ciphertext, const char * key, char * msg){
    unsigned int i, size = strlen(key);
    char keytemp[size + 1];
    for(i = 0; key[i] != 0; i++){
        int rang =  (26 - (key[i] - 'a')) % 26;
        keytemp[i] = rang + 'a';
    }
    keytemp[i] = '\0';
    vigenereEnc(ciphertext, keytemp, msg);
}

//Verification alphanumérique
bool VerifCaracSpec(char message[TAILLE_TABLEAU]){

	bool isCorrect;
	for(int i = 0; i < strlen(message); i++){
		if(isalnum(message[i]) == false){
			isCorrect = false;
			i = strlen(message);
		}
		else{
			isCorrect = true;
		}
	}
	return isCorrect;
}
