#include <iostream>
#include "String.h" // Inclure le fichier d'en-tête contenant la définition de la classe StringOperations

int main()
{
    // Exemples d'utilisation des fonctions de la classe StringOperations

    // Exemple de strcat
    char dest[20] = "Hello ";
    const char src[] = "world!";
    StringOperations::strcat(dest, src);
    std::cout << "strcat: " << dest << std::endl;

    // Exemple de strchr
    const char str[] = "Hello world!";
    int c = 'w';
    char *result = StringOperations::strchr(str, c);
    if (result != nullptr)
        std::cout << "strchr: '" << c << "' found at position: " << (result - str) << std::endl;
    else
        std::cout << "strchr: '" << c << "' not found!" << std::endl;

    // Exemple de strcmp
    const char str1[] = "hello";
    const char str2[] = "world";
    int cmp = StringOperations::strcmp(str1, str2);
    std::cout << "strcmp: " << cmp << std::endl;

    // Exemple de strcpy
    char dest2[20];
    StringOperations::strcpy(dest2, str1);
    std::cout << "strcpy: " << dest2 << std::endl;

    // Exemple de strcspn
    const char str3[] = "abcdef";
    const char str4[] = "xyz";
    int len = StringOperations::strcspn(str3, str4);
    std::cout << "strcspn: " << len << std::endl;

    // Exemple de strdup
    const char str5[] = "Hello world!";
    char *dup = StringOperations::strdup(str5);
    if (dup != nullptr)
        std::cout << "strdup: " << dup << std::endl;
    else
        std::cout << "strdup: Memory allocation failed!" << std::endl;
    delete[] dup; // N'oubliez pas de libérer la mémoire allouée dynamiquement

    // Exemple de strlen
    const char str6[] = "Hello world!";
    int length = StringOperations::strlen(str6);
    std::cout << "strlen: " << length << std::endl;

    // Exemple de strncat
    char dest3[20] = "Hello ";
    const char src2[] = "world!";
    StringOperations::strncat(dest3, src2, 3);
    std::cout << "strncat: " << dest3 << std::endl;

    // Exemple de strncmp
    const char str7[] = "hello";
    const char str8[] = "world";
    int cmp2 = StringOperations::strncmp(str7, str8, 3);
    std::cout << "strncmp: " << cmp2 << std::endl;

    // Exemple de strncpy
    char dest4[20];
    StringOperations::strncpy(dest4, str7, 3);
    std::cout << "strncpy: " << dest4 << std::endl;

    // Exemple de strndup
    const char str9[] = "Hello world!";
    char *dup2 = StringOperations::strndup(str9, 5);
    if (dup2 != nullptr)
        std::cout << "strndup: " << dup2 << std::endl;
    else
        std::cout << "strndup: Memory allocation failed!" << std::endl;
    delete[] dup2; // N'oubliez pas de libérer la mémoire allouée dynamiquement

    // Exemple de strpbrk
    const char str10[] = "Hello world!";
    const char str11[] = "xyz";
    char *result2 = StringOperations::strpbrk(str10, str11);
    if (result2 != nullptr)
        std::cout << "strpbrk: '" << *result2 << "' found!" << std::endl;
    else
        std::cout << "strpbrk: No common characters found!" << std::endl;

    // Exemple de strrchr
    const char str12[] = "Hello world!";
    int c2 = 'o';
    char *result3 = StringOperations::strrchr(str12, c2);
    if (result3 != nullptr)
        std::cout << "strrchr: '" << c2 << "' found at position: " << (result3 - str12) << std::endl;
    else
        std::cout << "strrchr: '" << c2 << "' not found!" << std::endl;

    // Exemple de strspn
    const char str13[] = "abcdef";
    const char str14[] = "abc";
    int len2 = StringOperations::strspn(str13, str14);
    std::cout << "strspn: " << len2 << std::endl;

    // Exemple de strstr
    const char haystack[] = "Hello world!";
    const char needle[] = "world";
    char *result4 = StringOperations::strstr(haystack, needle);
    if (result4 != nullptr)
        std::cout << "strstr: '" << needle << "' found at position: " << (result4 - haystack) << std::endl;
    else
        std::cout << "strstr: '" << needle << "' not found!" << std::endl;

    // Exemple de strtok
    char str15[] = "Hello,world!";
    const char delim[] = ",";
    char *token = StringOperations::strtok(str15, delim);
    while (token != nullptr)
    {
        std::cout << "strtok: " << token << std::endl;
        token = StringOperations::strtok(nullptr, delim);
    }

    // Exemple de strxfrm
    char dest5[20];
    const char src3[] = "Hello world!";
    int len3 = StringOperations::strxfrm(dest5, src3, 10);
    std::cout << "strxfrm: " << dest5 << ", Length: " << len3 << std::endl;

    return 0;
}
