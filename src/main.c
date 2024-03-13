#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], result[200];
    int i, j, len;

    // Ввод строк
    printf("Введите первую строку: ");
    scanf("%s", str1);
    printf("Введите вторую строку: ");
    scanf("%s", str2);

    // Получение длины строк
    len = strlen(str1);

    // Формирование новой строки
    j = 0;
    for (i = 0; i < len; i++) {
        if (i % 2 == 0) {
            result[j] = str1[i];
        } else {
            result[j] = str2[i];
        }
        j++;
    }
    result[j] = '\0'; // Добавление завершающего нулевого символа для обозначения конца строки

    // Вывод результата
    printf("Результирующая строка: %s\n", result);

    return 0;
}
