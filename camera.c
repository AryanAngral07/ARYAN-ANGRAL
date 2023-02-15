// #include <stdio.h>
//  #include <stdlib.h>
//  #define SIZE 76800 // number of pixels (320x240 for my webcam)
//  int main() {
//     FILE *camera, *grab;
//     camera=fopen("/dev/video0", "rb");
//     grab=fopen("grab.jpeg", "wb");
//     float data[SIZE];
//     fread(data, sizeof(data[0]), SIZE, camera);
//     fwrite(data, sizeof(data[0]), SIZE, grab);
//     fclose(camera);
//     fclose(grab); 
//     return 0;
//  }
// how to use file in c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    FILE *fptr;
    char filename[15];
    char ch;
    printf("Enter the filename to be opened \n");
    scanf("%s", filename);
    fptr = fopen(filename, "r");
    if (fptr == NULL)
    {
        printf("Cannot open file \n");
        exit(0);
    }
    ch = fgetc(fptr);
    while (ch != EOF)
    {
        printf ("%c", ch);
        ch = fgetc(fptr);
    }
    fclose(fptr);
    return 0;
}

