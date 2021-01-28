
#include <stdio.h>

int main ()
{
    int dis;

    printf ("Enter the distance: ");
    scanf("%f" , &dis);

    printf("In meter: %d\n", dis*1000);
    printf("Feet: %d\n", (float)dis*3280.84);
    printf("Inch: %d\n", (float)dis*39370.1);
    printf("Centemeter: %d\n", dis*100000);


    return 0;
}
