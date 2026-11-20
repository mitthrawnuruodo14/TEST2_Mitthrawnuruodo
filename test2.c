#include <stdio.h>



int main(int argc, char* argv[]){
    if(argc > 2){
        printf("Es wurden zuviele argumente übergeben\n");
        return -1;
    }
    char* binary_number = argv[2];
    printf("zeile 11\n");
    int i = 0;
    for(; i<10 ; i++){
        printf("zeile 13");
        printf("%c", binary_number[i]);
    }

    printf("%s\n",argv[1]);

    return 0;
}