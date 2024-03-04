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



#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define TAILLE_TABLEAU 100

//Entetes pour l'algorithme Caesar
void caesarEnc(const char * message, short key, char * ciphertext);
void caesarDec(const char * ciphertext, short key, char * plaintext);

//Entetes pour l'algorithme Vigenere
void vigenereEnc(const char * text, const char * key, char * ciphertext);
void vigenereDec(const char * ciphertext, const char * key, char * text);

//Entete pour la fonction de verification alphanumérique
bool VerifCaracSpec(char message[TAILLE_TABLEAU]);
