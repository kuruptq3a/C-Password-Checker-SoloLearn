/******************************************************************************

Password Checker

*******************************************************************************/

#include <stdio.h>
#include <string.h>

int checkNumbers(char pw[]){
    int numbericCount = 0;
    char numericCharacters[10] = {'0','1','2','3','4','5','6','7','8','9'};
    for(int i = 0; i < strlen(pw); i++){
        for(int ch = 0; ch < strlen(pw); ch++){
            if(pw[i] == numericCharacters[ch]){
                numbericCount++;
            }
        }

    }
    return numbericCount;
}


int getSpecialCharacterCount(char spec[]){
    int specialCharacterCount = 0;
    char specialCharacters[7] = {'!', '@', '#', '$', '%', '&', '*'};
    for(int i = 0; i < strlen(spec); i++){
        for(int ch = 0; ch < strlen(specialCharacters); ch++){
            if(spec[i] == specialCharacters[ch]){
                specialCharacterCount++;
            }
        }

    }
    return specialCharacterCount;
}

int getPasswordLength(char passwordSize[]){
    return strlen(passwordSize);
}

int main()
{
    //char password[14] = "Neonghts22$*$";                                //Test password
    char password[14];
    scanf("%s",password);

    printf("%d\n", checkNumbers(password));
    printf("%d\n",getSpecialCharacterCount(password));
    printf("%d\n", getPasswordLength(password));
    if(getPasswordLength(password) >= 7 && getPasswordLength(password) <=14 && checkNumbers(password) >=2 && getSpecialCharacterCount(password) >= 2){
        printf("String");
    }else{
        printf("Weak");
    }
}
