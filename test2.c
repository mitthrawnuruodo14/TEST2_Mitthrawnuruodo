#include <stdio.h>



int main(int argc, char* argv[]){
    if(argc > 2){
        printf("Es wurden zuviele argumente übergeben\n");
        return -1;
    }
    char* binary_number = argv[1];
    printf("zeile 11\n");
    int i = 0;
    for(int i = 0; binary_number[i] != '0' || binary_number[i] != '1' || binary_number[i] == '\0'; i++){
        printf("erflogreich");
        
    }

    printf("%s\n",argv[1]);

    return 0;
}