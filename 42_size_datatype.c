/*Write a C program to display the sizes and ranges for each of C's data types.
Sample Output:
Size of C data types:

Type               Bytes

--------------------------------
char                 1
int8_t               1
unsigned char        1
uint8_t              1
short                2
int16_t              2
uint16t              2
int                  4
unsigned             4
long                 8
unsigned long        8
int32_t              4
uint32_t             4
long long            8
int64_t              8
unsigned long long   8
uint64_t             8
float                4
double               8
long double          16
_Bool                1*/

#include<stdio.h>
#include<stdint.h>
#include<inttypes.h>

int main()
{

    printf("Type\t\t\tBytes\n");
    printf("\n------------------------------------\n");

    printf("char\t\t\t: %lu\n",sizeof(char));

    printf("int8_t\t\t\t: %lu\n",sizeof(int8_t));

    printf("unsigned char\t\t: %lu\n",sizeof(unsigned char));

    printf("uint8_t \t\t: %lu\n",sizeof(uint8_t));

    printf("short \t\t\t: %lu\n",sizeof(short));

    printf("int16_t\t\t\t: %lu\n",sizeof(int16_t));

    printf("uint16t\t\t\t: %lu\n",sizeof(uint16_t));

    printf("int\t\t\t: %lu\n",sizeof(int));

    printf("unsigned\t\t: %lu\n",sizeof(unsigned));

    printf("long\t\t\t: %lu\n",sizeof(long));

    printf("unsigned long\t\t: %lu\n",sizeof(unsigned long));

    printf("int32_t\t\t\t: %lu\n",sizeof(int32_t));

    printf("long long\t\t: %lu\n",sizeof(long long));

    printf("int64_t\t\t\t: %lu\n",sizeof(int64_t));

    printf("unsigned long long\t: %lu\n",sizeof(unsigned long long));

    printf("uint64_t\t\t: %lu\n",sizeof(uint64_t));

    printf("float\t\t\t: %lu\n",sizeof(float));

    printf("double\t\t\t: %lu\n",sizeof(double));

    printf("long double\t\t: %lu\n",sizeof(long double));

    printf("_Bool\t\t\t: %lu\n",sizeof(_Bool));


    return 0;
}




/*Write a C program to display the minimum and maximum values for each of C's data types.
Sample Output:
Ranges for integer data types in C

------------------------------------------------------------
int8_t                    -128                   127
int16_t                 -32768                 32767
int32_t            -2147483648            2147483647
int64_t   -9223372036854775808   9223372036854775807
uint8_t                      0                   255
uint16_t                     0                 65535
uint32_t                     0            4294967295
uint64_t                     0  18446744073709551615

============================================================

Ranges for real number data types in C

------------------------------------------------------------
float          1.175494e-38    3.402823e+38
double        2.225074e-308   1.797693e+308
long double  3.362103e-4932  1.189731e+4932*/
#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <limits.h>
#include <float.h>
int main( void )
{
    // Print header for integer data types
    printf( "Ranges for integer data types in C\n\n" );
    
    // Print separator line
    printf( "------------------------------------------------------------\n");
    
    // Print range for int8_t
    printf( "int8_t    %20d  %20d\n"     , SCHAR_MIN , SCHAR_MAX  );
    
    // Print range for int16_t
    printf( "int16_t   %20d  %20d\n"     , SHRT_MIN  , SHRT_MAX   );
    
    // Print range for int32_t
    printf( "int32_t   %20d  %20d\n"     , INT_MIN   , INT_MAX    );
    
    // Print range for int64_t
    printf( "int64_t   %20lld  %20lld\n" , LLONG_MIN , LLONG_MAX  );
    
    // Print range for uint8_t
    printf( "uint8_t   %20d  %20d\n"     , 0         , UCHAR_MAX  );
    
    // Print range for uint16_t
    printf( "uint16_t  %20d  %20d\n"     , 0         , USHRT_MAX  );
    
    // Print range for uint32_t
    printf( "uint32_t  %20d  %20u\n"     , 0         , UINT_MAX   );
    
    // Print range for uint64_t
    printf( "uint64_t  %20d  %20llu\n"   , 0         , ULLONG_MAX );
    
    // Print separator line
    printf( "\n" );
    
    // Print separator line
    printf( "============================================================\n\n");
    
    // Print header for real number data types
    printf( "Ranges for real number data types in C\n\n" );
    
    // Print separator line
    printf( "------------------------------------------------------------\n");
    
    // Print range for float
    printf( "float        %14.7g  %14.7g\n"   , FLT_MIN  , FLT_MAX  );
    
    // Print range for double
    printf( "double       %14.7g  %14.7g\n"   , DBL_MIN  , DBL_MAX  );
    
    // Print range for long double
    printf( "long double  %14.7Lg  %14.7Lg\n" , LDBL_MIN , LDBL_MAX );
    
    // Print separator line
    printf( "\n" );

    return 0;
}
