//Program to enter n number of hotel's name,address,grade,average room charge and room umber and display it in ascending order of grades.Also display hotel that are available below the charges entered by user.
#include <stdio.h>
#include <string.h>
#define MAX 100
struct hotel {
    char name[50];
    char address[100];
    char grade;
    float avg_room_charge;
    int room_number;
};
void input_hotel_data(struct hotel hotels[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Enter details for hotel %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", hotels[i].name);
        printf("Address: ");
        scanf(" %[^\n]", hotels[i].address);
        printf("Grade (A/B/C): ");
        scanf(" %c", &hotels[i].grade);
        printf("Average Room Charge: ");
        scanf("%f", &hotels[i].avg_room_charge);
        printf("Number of Rooms: ");
        scanf("%d", &hotels[i].room_number);
    }
}
void display_hotel_data(struct hotel hotels[], int n) {
    printf("\nHotel Details:\n");
    for (int i = 0; i < n; i++) {
        printf("Hotel %d:\n", i + 1);
        printf("Name: %s\n", hotels[i].name);
        printf("Address: %s\n", hotels[i].address);
        printf("Grade: %c\n", hotels[i].grade);
        printf("Average Room Charge: %.2f\n", hotels[i].avg_room_charge);
        printf("Number of Rooms: %d\n", hotels[i].room_number);
        printf("\n");
    }
}
void sort_hotels_by_grade(struct hotel hotels[], int n) {
    struct hotel temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (hotels[i].grade > hotels[j].grade) {
                temp = hotels[i];
                hotels[i] = hotels[j];
                hotels[j] = temp;
            }
        }
    }
}
void display_hotels_below_charge(struct hotel hotels[], int n, float charge) {
    printf("\nHotels with average room charge below %.2f:\n", charge);
    for (int i = 0; i < n; i++) {
        if (hotels[i].avg_room_charge < charge) {
            printf("Name: %s, Address: %s, Grade: %c, Average Room Charge: %.2f, Number of Rooms: %d\n",
                   hotels[i].name, hotels[i].address, hotels[i].grade,
                   hotels[i].avg_room_charge, hotels[i].room_number);
        }
    }
}
int main() {
    int n;
    struct hotel hotels[MAX];
    printf("Enter the number of hotels: ");
    scanf("%d", &n);
    input_hotel_data(hotels, n);
    sort_hotels_by_grade(hotels, n);
    display_hotel_data(hotels, n);
    float charge;
    printf("Enter a charge to filter hotels: ");
    scanf("%f", &charge);
    display_hotels_below_charge(hotels, n, charge);
    return 0;
}