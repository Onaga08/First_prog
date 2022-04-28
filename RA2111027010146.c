#include <stdio.h>

int main()
{
    int a;
    printf("Enter Pradyumn's Marks Out of 5");
    scanf ("%d", &a);
    if (a == 5) {
        printf ("I Aced it!");
    }
    else if (a != 5 && a<6) {
        printf ("Little More Marks Sir, Please!");
    }
    else {
        printf ("Invalid Input");
    }
    return 0;
}