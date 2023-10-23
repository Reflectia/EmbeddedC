#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Структура для зберігання інформації про книгу
struct Book {
    char title[100];
    float price;
    int numPages;
    char language[20];
    float weight;
    int year;
};

// Структура для вузла зв'язаного списку
struct Node {
    struct Book book;
    struct Node* next;
};

// Функція для додавання нового вузла до зв'язаного списку
struct Node* addBook(struct Node* head, struct Book newBook) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->book = newBook;
    newNode->next = head;
    return newNode;
}

// Функція для виведення інформації про всі книги у зв'язаному списку
void displayBooks(struct Node* head) {
    struct Node* current = head;
    while (current != NULL) {
        printf("Name: %s\n", current->book.title);
        printf("Price: $%.2f\n", current->book.price);
        printf("Page number: %d\n", current->book.numPages);
        printf("Language: %s\n", current->book.language);
        printf("weight: %.2f kg\n", current->book.weight);
        printf("Publishing year: %d\n\n", current->book.year);
        current = current->next;
    }
}

int main() {
    struct Node* bookList = NULL;

    // Додавання книг до зв'язаного списку
    struct Book book1 = {"Harry Potter and the Philosopher's Stone", 10.23, 331, "English", 0.372, 1997};
    struct Book book2 = {"Harry Potter and the Chamber of Secrets", 10.34, 359, "English", 0.306, 1998};
    struct Book book3 = {"Harry Potter and the Prisoner of Azkaban", 11.12, 461, "English", 0.370, 1999};
    struct Book book4 = {"Harry Potter and the Goblet of Fire", 12.68, 616, "English", 0.490, 2000};
    struct Book book5 = {"Harry Potter and the Order of Phoenix", 14.90, 799, "English", 0.634, 2003};
    struct Book book6 = {"Harry Potter and the Half-Blood Prince", 12.37, 541, "English", 0.454, 2005};
    struct Book book7 = {"Harry Potter and the Deathly Hallows", 12.77, 619, "English", 0.5, 2007};

    bookList = addBook(bookList, book1);
    bookList = addBook(bookList, book2);
    bookList = addBook(bookList, book3);
    bookList = addBook(bookList, book4);
    bookList = addBook(bookList, book5);
    bookList = addBook(bookList, book6);
    bookList = addBook(bookList, book7);

    // Виведення інформації про книги
    displayBooks(bookList);

    return 0;
}