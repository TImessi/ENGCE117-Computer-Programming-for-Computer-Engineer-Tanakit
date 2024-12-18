#include <stdio.h>
#include <string.h>
#include <stdlib.h>  // Include for malloc
#pragma GCC diagnostic ignored "-Wwrite-strings"
// Define the studentNode structure
struct studentNode {
    char name[20];  // Name is a fixed-size array of char
    int age;
    char sex;
    float gpa;
    struct studentNode *next;
};

// Function to save student details in a node
void saveNode(struct studentNode *child, const char n[], int a, char s, float g);

// Function to move to the next node
void GoNext1(struct studentNode **walk);

int main() {
    struct studentNode *start, *now1, **now2;

    // Use malloc for memory allocation (correcting from `new` in C++)
    start = (struct studentNode *)malloc(sizeof(struct studentNode));
    saveNode(start, "one", 6, 'M', 3.11);

    start->next = (struct studentNode *)malloc(sizeof(struct studentNode));
    saveNode(start->next, "two", 8, 'F', 3.22);

    start->next->next = (struct studentNode *)malloc(sizeof(struct studentNode));
    saveNode(start->next->next, "three", 10, 'M', 3.33);

    start->next->next->next = (struct studentNode *)malloc(sizeof(struct studentNode));
    saveNode(start->next->next->next, "four", 12, 'F', 3.44);

    start->next->next->next->next = NULL; // Ensure the list is terminated

    now1 = start;
    now2 = &start;

    GoNext1(&now1);  // Moves to the next node
    printf("%s %d %c %.2f\n", now1->name, now1->age, now1->sex, now1->gpa);  // Output details of the node

    return 0;
}

// Function to save the details of a student in a node
void saveNode(struct studentNode *child, const char n[], int a, char s, float g) {
    strcpy(child->name, n);
    child->age = a;
    child->sex = s;
    child->gpa = g;
}

// Function to move the pointer to the next node
void GoNext1(struct studentNode **walk) {
    *walk = (*walk)->next;
}
