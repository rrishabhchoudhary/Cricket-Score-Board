#include <stdio.h>
#include <string.h>
#include <conio.h>
struct cric
{
    char name[20];
    char team[20];
    int run;
    int wct;
} player[100];

int main()
{
    int i, n;
    char ch, t[20];

    printf("E N T E R   N U M B E R   O F   P L A Y E R S\n");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        getchar();
        printf("\nINPUT THE NAME OF PLAYER %d: ", i + 1);
        gets(player[i].name);

        printf("\nINPUT THE TEAM NAME OF PLAYER %d: ", i + 1);
        gets(player[i].team);

        printf("\nINPUT THE RUNS SCORED BY PLAYER %d: ", i + 1);
        scanf("%d", &player[i].run);

        printf("\nINPUT THE WICKETS TAKEN BY PLAYER %d: ", i + 1);
        scanf("%d", &player[i].wct);
    }
    printf("-----------------------------------------\n");
    printf("  PLAYER'S NAME		COUNTRY		RUNS		WICKETS\n");
    printf("-----------------------------------------\n");

    for (i = 0; i <= n; i++)
        printf("%s		%s		%d		%d\n", player[i].name, player[i].team, player[i].run, player[i].wct);

choice:
    getchar();
    printf("\n\nINPUT THE TEAM YOU WANT TO LIST: ");
    gets(t);

    printf("\n-----------------------------------------\n");
    printf("PLAYER'S NAME		RUNS		WICKETS\n");
    printf("-----------------------------------------\n");

    for (i = 0; i <= n; i++)
        if (strcmp(t, player[i].team) == 0)
            printf("%s		%d		%d\n", player[i].name, player[i].run, player[i].wct);

    printf("\nDO YOU WANT TO SEE LIST OF ANY OTHER TEAM? (Y/N): ");
    scanf("%c", &ch);

    if (ch == 'Y' || ch == 'y')
        goto choice;

    return 0;
}