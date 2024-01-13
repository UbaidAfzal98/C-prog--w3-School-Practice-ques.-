// #include <stdio.h>

// int main() {
//     int rows = 10; // You can change this value to adjust the number of rows

//     for (int i = 1; i <= rows; i++) {
//         for (int j = 1; j <= i; j++) {
//             printf("%d", j);
//         }
//         printf("\n");
//     }

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     char aestric[] = "Ubaid"; 

//     for (int i = 1; i <= 5; i++) {
//         for (int j = 1; j <= i; j++) {
//             printf("%s ", aestric);
//         }
//         printf("\n");
//     }

//     return 0;
// }


/* Write a C program that reads the side (side sizes between 1 and 10 ) of a square and prints square using hash (#) character.
Sample Input: 10
Sample Output:

Input the size of the square: 
 # # # # # # # # # #
 # # # # # # # # # #
 # # # # # # # # # #
 # # # # # # # # # #
 # # # # # # # # # #
 # # # # # # # # # #
 # # # # # # # # # #
 # # # # # # # # # #
 # # # # # # # # # #
 # # # # # # # # # #*/

// #include <stdio.h>

// int main() {
//     char hash = '#'; 

//     for (int i = 1; i <= 10; i++) {
//         for (int j = 1; j <= 10; j++) {
//             printf("%c ", hash);
//         }
//         printf("\n");
//     }

//     return 0;
// }


/* Write a C program that reads the side (side sizes between 1 and 10 ) of a square and prints a hollow square using the hash (#) character.
Sample Input: 10
Sample Output:

Input the size of the square: 
##########
#        #
#        #
#        #
#        #
#        #
#        #
#        #
#        #
##########*/
#include <stdio.h>

int main() {
    char hash = '#'; 

    printf("#########\n");

    for (int i = 1; i <= 8; i++) {
        for (int j = 1; j <= 2; j++) {
            printf("%c\t", hash);
        }
        printf("\n");
    }
    printf("#########\n");

    return 0;
}
