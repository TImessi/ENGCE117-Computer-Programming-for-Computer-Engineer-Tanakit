#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#pragma GCC diagnostic ignored "-Wwrite-strings"

struct studentNode {
    char name[20];
    int age;
    float gpa;
    struct studentNode *next;
};

void saveNode(struct studentNode *child, char n[], int a, float g);
void GoNext(struct studentNode **now);

int main() {
    struct studentNode *start, *now;
    start = (struct studentNode *)malloc(sizeof(struct studentNode));
    saveNode(start, "Alice", 20, 3.5);

    start->next = (struct studentNode *)malloc(sizeof(struct studentNode));
    saveNode(start->next, "Bob", 22, 3.8);

    start->next->next = (struct studentNode *)malloc(sizeof(struct studentNode));
    saveNode(start->next->next, "Charlie", 21, 3.7);

    now = start;

    GoNext(&now);  // Move to next node and print
    GoNext(&now);  // Move to next node and print
    GoNext(&now);  

    return 0;
}

void saveNode(struct studentNode *child, char n[], int a, float g) {
    strcpy(child->name, n);
    child->age = a;
    child->gpa = g;
    child->next = NULL;
}

void GoNext(struct studentNode **now) {
    if (*now == NULL) {
        printf("End of List\n");
    } else {
        printf("%s\n", (*now)->name);
        *now = (*now)->next;
        if (*now == NULL) {
            printf("End of List\n");
        }
    }
}