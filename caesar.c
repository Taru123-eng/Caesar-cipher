#include <string.h>
#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

string plaintext;
int index;
string random;
bool checker(string a);



int main(int argc, string argv[]){
    if (argc==2){
        if (checker(argv[1])==false){
        plaintext = get_string("plaintext: ");
        random=argv[1];
        for(int i=0;i<strlen(plaintext);i++){
            if (isupper(plaintext[i])){
            index = plaintext[i]-'A';
            plaintext[i]=(char) (((index+atoi(argv[1]))%26)+'A');}
            else if (islower(plaintext[i])){
                index = plaintext[i]-'a';
            plaintext[i]=(char) (((index+atoi(argv[1]))%26)+'a');}}}
        else{
            printf("Usage: ./caesar key\n");
            return 1;
        }



        }
        else if(argc!=2){
            printf("Usage: ./caesar key\n");
            return 1;
        }




    printf("ciphertext: %s\n",plaintext);

    }
bool checker(string a){
    for(int j=0;j<strlen(a);j++){
            if (isalpha(a[j])){

                return true;
            }

        }
        return false;


}
