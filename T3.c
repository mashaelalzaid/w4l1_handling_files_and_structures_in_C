include <stdio.h>
#include <string.h>



int main() {
    //initialize file
    FILE *fptr = fopen("cx-202-lab7/bitstream.bit", "rb");
    FILE *hexfptr = fopen("bitstream.hex", "w");
    if (fptr==NULL || hexfptr ==NULL){
        printf("file doesn't exist");
    return 1;
    }


    char byte;
    int num = 0;
    printf("result\n");
    while(fread(&byte, sizeof(byte), 1, fptr)) {
        printf("%02X, ", byte);
        fprintf(hexfptr, "%02X", byte);
    }

     fclose(fptr);
     printf("Data successfully read from file\n");

return 0;

}
