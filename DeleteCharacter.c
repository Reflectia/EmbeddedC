#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char charToDelete;
    
    // Введення рядка користувачем
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    // Введення символу, який потрібно видалити
    printf("Enter the character to be deleted: ");
    scanf(" %c", &charToDelete);
    
    // Видалення символу з рядка
    int j = 0;
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] != charToDelete) {
            str[j] = str[i];
            j++;
        }
    }
    str[j] = '\0'; // Встановлюємо нуль-термінатор, щоб позначити кінець рядка
    
    // Виведення результату
    printf("Результат: %s\n", str);
    
    return 0;
}
