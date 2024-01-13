/* Write a C program to create an extended ASCII table. Print the ASCII values 32 through 255.*/
#include<stdio.h>

int main()
{
    unsigned char chr1,chr2,chr3,chr4,chr5,chr6,chr7,chr8;
    printf("|--------------------------------------------------------------------------------------------------------|\n");
    printf("|                                         EXTENDED ASCII TABLE                                           |\n");
    printf("|ch  dec  hexa |ch  dec  hexa |ch  dec  hexa |ch  dec  hexa |ch  dec  hexa |ch  dec  hexa |ch  dec  hexa |\n");
    printf("|--------------|--------------|--------------|--------------|--------------|--------------|--------------|\n");

    for(int i = 0; i < 32; i++)
    {
        chr1 = i;
        chr2 = i + 32;
        chr3 = i + 64;
        chr4 = i + 96;
        chr5 = i + 128;
        chr6 = i + 160;
        chr7 = i + 192;
        chr8 = i + 224;

        printf( "| %c  %3d  %#x ",chr2,chr2,chr2);
        printf( "| %c  %3d  %#x ",chr3,chr3,chr3);

        if(chr4 == 127)
        {
            printf("|%s%3d  %#x  |","DELL",chr4,chr4);
        }
        else
        {
            printf( "| %c  %3d  %#x  |",chr4,chr4,chr4);
        }

        printf("%c  %3d  %#x | %c  %3d  %#x | %c  %3d  %#x | %c  %3d  %#x |\n",chr5,chr5,chr5,chr6,chr6,chr6,chr7,chr7,chr7,chr8,chr8,chr8);

    }
    printf("|--------------------------------------------------------------------------------------------------------|\n");
    return 0;
}