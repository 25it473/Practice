//define structure that can describe hotel 
#include <stdio.h>
#include <string.h>

struct hotel
{
    char name[20];
    int rooms;
    float avg_rate;
    char grade;
    char address[300];
};

int main()
{
    //declare variable of type hotel
    struct hotel h1;

    //assign values to members of h1
    strcpy(h1.name, "Grand Plaza");
    h1.rooms = 150;
    h1.avg_rate = 120.50;
    h1.grade = 'A';
    strcpy(h1.address, "123 Main St, Cityville");

    //print hotel information
    printf("Hotel Name: %s\n", h1.name);
    printf("Number of Rooms: %d\n", h1.rooms);
    printf("Average Rate: $%.2f\n", h1.avg_rate);
    printf("Grade: %c\n", h1.grade);
    printf("Address: %s\n", h1.address);

    return 0;
}