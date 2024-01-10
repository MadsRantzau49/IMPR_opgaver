#include <stdio.h>
#include <string.h>

// Define a macro for printing car information
#define PRINTCAR(x) printf("%s, %d, %d\n", x.name, x.hp, x.rating);

// Enum to represent the coolness rating of a car
enum coolness { crap, fine, okay, nice, wow };

// Structure to represent car information
typedef struct bilkort
{
    char name[50];
    int hp;
    enum coolness rating;
} bilkort;

// Function prototype to create a car
bilkort make_car();

// Function prototype to change car information
void change_car(bilkort *car);

// Main function
int main()
{
    // Initialize car1 with default values
    bilkort car1 = {"Suzuki Splash", 46, wow};

    // Print car1 information
    PRINTCAR(car1);

    // Change car1 information
    change_car(&car1);

    // Print updated car1 information
    PRINTCAR(car1);

    // Create a new car (car2) using user input
    bilkort car2 = make_car();

    // Print car2 information
    PRINTCAR(car2);

    return 0;
}

// Function to change car information
void change_car(bilkort *car)
{
    // Update car information
    // Set the name to "Mercedes"
    strcpy(car->name, "Mercedes");

    // Set the horsepower to 200
    car->hp = 200;

    // Set the rating to "crap"
    car->rating = crap;
}

// Function to create a car using user input
bilkort make_car()
{
    // Declare a car variable
    bilkort car;

    // The string end when a comma(,) occur. 
    // Get user input for car information
    // Format: name,hp,rating
    // Example input: "Toyota Camry,150,3"
    scanf(" %49[^,],%d,%d", car.name, &car.hp, (int *)&car.rating);

    // Return the created car
    return car;
}
