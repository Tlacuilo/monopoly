#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>


int main()
{
    int i, deux = 0 ;
    int lanceDe1, lanceDe2 ;

        lanceDe1 = ( rand() %6 ) + 1 ;
        lanceDe2 = ( rand() %6 ) + 1 ;
        if (lanceDe1 == lanceDe2)
        {
            deux = deux + 1 ;
            if (deux == 3)
            {
                //VA EN PRISON//
            }
        }

        printf("Vous avez obtenu %d et %d \n", lanceDe1, lanceDe2 );

}