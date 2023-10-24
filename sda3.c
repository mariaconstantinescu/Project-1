#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
typedef struct tnod
{ long cvag;
    long cmarfa;
    int exp;
    int dest;
    struct tnod *next;
} TNOD;

int pcit_int(char text[ ], int *x)
{
    char t[255];
    for( ; ; )
    {
        printf(text);
        if(fgets(t, 255, stdin) == NULL)
        return 0;
        if(sscanf(t,"%d",x) == 1)
            return 1;
    }
}

int pcit_int_lim(char text[ ], int inf, int sup, int *pint)
{
    for( ; ; )
    {
        if(pcit_int(text, pint) == 0)
            return 0;
        if(*pint >= inf && *pint <= sup)
            return 1;
        printf("\nThe integer typed does not belong to the range: ");
        printf("[%d,%d]\n", inf, sup);
        printf("Restart introducing\n");
    }
}
int incnod(TNOD *p)

{
    char t[255];
    char er[ ] = "EOF was typed in bad position\n";
    long cod;
    int icod;

    for( ; ; )
    {
        printf("\nCode of the wagon: ");
        if(fgets(t, 255, stdin) == 0)
            int incnod(TNOD *p)

            {
                char t[255];
                char er[ ] = "EOF was typed in bad position\n";
                long cod;
                int icod;

                for( ; ; )
                {
                    printf("\nCode of the wagon: ");
                    if(fgets(t, 255, stdin) == 0)
                    {
                        printf(er);
                        return 0;
                    }
                    if(sscanf(t, "%ld", &cod) == 1 && cod >= 0&& cod <= 999999999)
                        break;
                    printf("Error for code of the goods\n");
                }
                p -> cmarfa = cod;

                if(pcit_int_lim("Sender code: ", 0, 9999, &icod)== 0)
                {
                    printf(er);
                    return 0;
                }
                p -> exp = icod;

                if(pcit_int_lim("Recipient code: ", 0, 9999,&icod) == 0)
                        {
                            printf(er);
                            return 0;
                        }
                    p -> dest = icod;
                    return 1;
                }
        TNOD *inifirst() //push fct
        {
            extern TNOD *first, *last;
            TNOD *p;
            int n;

            n = sizeof(TNOD);
            if(((p = (TNOD *)malloc(n)) != 0) &&
               (incnod(p) == 1))
            {
                if(first == 0)
                {
                    first = last = p;
                    p -> next = 0;
                }
                else
                {
                    p -> next = first;
                    first = p;
                }
                return p;
            }
            if(p == 0)
            {
                printf("insufficient memory\n");
                exit(1);
            }
            elibnod(p);
            return 0;
        }

        void elibnod(TNOD *p)
        {
            free(p);
        }
        void erase_first_node() //popfct
        {
            extern TNOD *first, *last;
            TNOD *p;

            if(first == 0)
                return;
            p = first;
            first = first -> next;
            elibnod(p);
            if(first == 0)
                last = 0; }