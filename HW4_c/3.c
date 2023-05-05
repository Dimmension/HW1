#include <stdio.h>
#include <string.h>
#include <ctype.h>
// проверка кода аски
bool checkACII(char password[]){
    for (int i = 0; i < strlen(password); i++)
        if(int(password[i]) > 126 || int(password[i]) < 33)
            return false;
    return true;
}
// првоерка длины
bool checkLength(char password[]){
    int size = strlen(password);
    if (size > 14 || size < 8)
        return false;
    return true;
}
// проверка наличия классов
bool checkClasses(char password[]){
    bool bigSymb = false;
    bool smallSymb = false;
    bool digits = false;
    bool specSymb = false;
    int count = 0;
    for (int i = 0; i < strlen(password); i++){
        if(int(password[i]) > 64 && int(password[i]) < 91)
            bigSymb = true;
        if(int(password[i]) > 96 && int(password[i]) < 123)
            smallSymb = true;
        if(int(password[i]) > 47 && int(password[i]) < 58)
            digits = true;
        if(int(password[i]) > 32 && int(password[i]) < 48 && int(password[i]) > 57 && int(password[i]) < 65 && int(password[i]) > 90 && int(password[i]) < 97 && int(password[i]) > 122 && int(password[i]) < 127)
            specSymb = true;
    }
    if(bigSymb) ++count;
    if(smallSymb) ++count;
    if(digits) ++count;
    if(specSymb) ++count;

    if(count >= 3) return true;
    return false;
}
int main(){
    char password[100];
    scanf("%s", password);
    if(checkACII(password) && checkLength(password) && checkLength(password)) printf("YES");
    else printf("NO");
}