#include<stdio.h>
int main(){
    int decimal, rem, i = 0, o;
    char hex[20];
    printf("Enter the decimal number : ");
    scanf("%d", &decimal);
    o = decimal;
    while(decimal > 0){
        rem = decimal % 16;
        if(rem < 10)
            hex[i] = rem + '0';   
        else
            hex[i] = rem - 10 + 'A'; 
        i++;
        decimal = decimal / 16;
    }
    printf("Hexadecimal value of %d is ", o);
    for(i = i - 1; i >= 0; i--){
        printf("%c", hex[i]);
    }
    return 0;
}
