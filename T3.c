
#include <stdio.h>
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
    int arr[100];
    int i=0;
    int sum =0;
    while(fread(&byte, sizeof(byte), 1, fptr)) {
    if(i==7){
    i=0;
    sum =0;

    }
    if (byte=='1'){
        sum+=2^i;
        i++;
        } else {i++;}

}
        printf("%d", sum);
        //fputc(var,hexfptr);


     // Closing the file
     fclose(fptr);
     printf("Data successfully read from file\n");
     //printf("Count of words: %d\n",wordC);
     //printf("Count of characters: %d\n", charC);
     //printf("Count of lines: %d\n",lineC);



return 0;

}
