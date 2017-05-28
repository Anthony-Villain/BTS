/*  programme cryptographie(tp1)
*   but: crypter et décrypter un message
*   date: 25/09/2016
*/

#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;


int main(int argc, char *argv[]){

    // d�clarations
    string message, resultat, key = "kljglfgkj�lkpoejkglknmhkj�mkqrzporghkhlkkjhgcryptographiecryptographiecryptographiecrypt";
    int k, middle;
    char decalage = '-';

    // saisie message et cryptage
    cout << "Saisir un message=  ";
    cin >> message;
    middle = message.length()/2;
    message = message.substr(middle,message.length()- middle) + message.substr(0,middle);
    for(k=0;k< message.length();k++){
          resultat += (message[k]^key[k % key.length()]) + decalage;
    }
    cout << "Message crypt\x82= " << resultat << std::endl;

    //d�cryptage du message
    message ="";
    for(k=0;k<resultat.length();k++){
        message += ((resultat[k]-decalage)^key[k% key.length()]);
    }

    // d�calage du milieu si le message est impair
    if(message.length() %2 != 0){
        middle++;
    }
    message = message.substr(middle, message.length()-middle) + message.substr(0, middle);
    cout << "Message d'origine= " << message << std::endl;

    return 0;
}
