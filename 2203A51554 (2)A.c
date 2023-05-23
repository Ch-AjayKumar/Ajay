#include <stdio.h>

struct Address {
    char street[50];
    char city[50];
    int pin;
};

struct Person {
    char name[50];
    struct Address address;
};

int main() {
    struct Person person;

    // Initialize the members of Person
    strcpy(person.name, "Sumanth");
    strcpy(person.address.street, "Aarav enclave");
    strcpy(person.address.city, "Bheemaram");
    person.address.pin = 506015;

    // Print the person's name and address details
    printf("Person Details:\n");
    printf("Name: %s\n", person.name);
    printf("Address: %s, %s, %d\n", person.address.street, person.address.city, person.address.pin);

    return 0;
}
