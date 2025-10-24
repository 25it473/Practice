//Define a structure called cricket to store the following information of a cricket player: name, team name and batting average.
#include <stdio.h>
struct cricket
{
    char name[50];
    char team_name[50];
    float batting_average;
};

int main()
{
    struct cricket player;

    // Input player details
    printf("Enter player's name: ");
    fgets(player.name, sizeof(player.name), stdin);

    printf("Enter team name: ");
    fgets(player.team_name, sizeof(player.team_name), stdin);

    printf("Enter batting average: ");
    scanf("%f", &player.batting_average);

    // Display player details
    printf("\nPlayer Details:\n");
    printf("Name: %s", player.name);
    printf("Team Name: %s", player.team_name);
    printf("Batting Average: %.2f\n", player.batting_average);

    return 0;
}
