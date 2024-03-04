# Projet C chiffrement et déchiffrement de message

C'est une application codé en langage C. Son but est de chiffrer et déchiffrer des messages, grâce au chiffrement de César et de Vigenere. Ainsi l'utilisateur peut choisir celui qu'il souhaite utiliser. A noter l'application ne prend pas en compte les caractere avec des accents


*Equipe:*

- MAS-BOUVRY Diego     
- PACURARU David-Mihai    
- MOUNKALA Florian   
- MADI Amina   


Comme dit précedement nous utilisons le chiffrement César et Vigenère. Cela inclut donc de crypter et de décrypter un message peu importe le chiffrement.

*Les fonctions utilisées:*

La fonction cesarEnc serre à encodé(chiffrer) le message.
Il prend en paramètre d'entré un char qui va contenir le **message**, un short qui contiendra la **key**, et une variable char qui sera modifier dans le programme **ciphertext**.

En sortie on aura le message crypté qui sera contenu dans le **cipheertext**. :bookmark_tabs:   :closed_lock_with_key:

La fonction cesarDec va décoder le message et nous retourner le vrai message.
Il prend en paramètre un char **ciphertext** qui au paravant conteait le message crypté, un short qui contient la **key** et un char **plaintext** qui contiendra le message déchiffrer.

En sortie on enleve la clé (key) ainsi et retourne le vrai message. :bookmark_tabs:

La fonction vegenereEnc prent en entrée le un char dit **msg** contenant toujours le message, un char dit **key** contenant la clé et un char pour nommé **ciphertext** qui coontiendra la valeur modifier.

En sortie on aura le message chiffrer contenu dans le **ciphertext** :bookmark_tabs:   :closed_lock_with_key:

La fonction vigenereDec a en entrée un char nommé **ciphertext**, un char pour la clé (key) et un char dit **msg** qui contiendra le message taper au début.

En sortie le ciphertext mais sans la clé(key). :bookmark_tabs:

La foncton VerifCaracSpec prend en entrée un tableau de char de taille de 100
et en sortie un un booléen de variable isCorret, elle renvoie si un caractere est alpha-numérique ou non grace a la foncion isalnum.


*Source*
Nous nous sommes beaucoup informé grâce au site de *KooR* qui constitue une ressource pédagogique pour programmeur.  
[Lien vers le site KooR](https://koor.fr/C/cctype/isalnum.wp)

**Une vidéo youtube pour comprendre l'algorithme de César**  
[Algorithme de César](https://www.youtube.com/watch?v=76kpetEW1C8)

**Une  autre vidéo pour comprendre celui de Vigenère**  
[Algorithme de Vigenère](https://www.youtube.com/watch?v=zYwZr-g069A)

![C'est une image illustrative](https://st4.depositphotos.com/1051996/29887/v/600/depositphotos_298873010-stock-illustration-secure-email-line-icon-ssl.jpg):old_key:



![Logo de l'iut](https://cdn.discordapp.com/attachments/959786569408069722/967077493305651210/Logo_IUT_Toulouse_A.jpg)

"# Chiffrement-et-dechiffrement-de-messages" 
"# Chiffrement-et-dechiffrement-de-messages" 
