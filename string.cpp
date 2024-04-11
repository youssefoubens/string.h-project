#include "string.h"

char *StringOperations::strcat(char *dest, const char *src)
{
    char *d = dest;
    while (*d)
        d++;
    while ((*d++ = *src++))
        ;
    return dest;
}

char *StringOperations::strchr(const char *str, int c)
{
    char uc = (char)c;
    while (*str)
    {
        if (*str == uc)
            return (char *)str;
        str++;
    }
    if (uc == '\0')
        return (char *)str;
    return nullptr;
}

int StringOperations::strcmp(const char *str1, const char *str2)
{
    while (*str1 && *str2 && (*str1 == *str2))
    {
        str1++;
        str2++;
    }
    return (*str1 - *str2);
}

char *StringOperations::strcpy(char *dest, const char *src)
{
    char *d = dest;
    while ((*d++ = *src++))
        ;
    return dest;
}

int StringOperations::strcspn(const char *str1, const char *str2)
{
    int len = 0;
    while (*str1)
    {
        const char *s = str2;
        while (*s)
        {
            if (*str1 == *s)
                return len;
            s++;
        }
        str1++;
        len++;
    }
    return len;
}

char *StringOperations::strdup(const char *str)
{
    int len = strlen(str) + 1;
    char *newstr = new char[len];
    if (newstr)
    {
        strcpy(newstr, str);
    }
    return newstr;
}

int StringOperations::strlen(const char *str)
{
    int len = 0;
    while (*str++)
        len++;
    return len;
}

char *StringOperations::strncat(char *dest, const char *src, int n)
{
    char *d = dest;
    while (*d)
        d++;
    while (n-- && (*d++ = *src++))
        ;
    *d = '\0';
    return dest;
}

int StringOperations::strncmp(const char *str1, const char *str2, int n)
{
    while (n-- && *str1 && *str2 && (*str1 == *str2))
    {
        str1++;
        str2++;
    }
    if (n == 0)
        return 0;
    return (*str1 - *str2);
}

char *StringOperations::strncpy(char *dest, const char *src, int n)
{
    char *d = dest;
    while (n-- && (*d++ = *src++))
        ;
    if (n == (int)-1)
        *d = '\0';
    return dest;
}

char *StringOperations::strndup(const char *str, int n)
{
    int len = strlen(str);
    if (n < len)
        len = n;
    char *newstr = new char[len + 1];
    if (newstr)
    {
        strncpy(newstr, str, len);
        newstr[len] = '\0';
    }
    return newstr;
}

char *StringOperations::strpbrk(const char *str1, const char *str2)
{
    while (*str1)
    {
        const char *s = str2;
        while (*s)
        {
            if (*str1 == *s)
                return (char *)str1;
            s++;
        }
        str1++;
    }
    return nullptr;
}

char *StringOperations::strrchr(const char *str, int c)
{
    char *last = nullptr;
    char uc = (char)c;
    while (*str)
    {
        if (*str == uc)
            last = (char *)str;
        str++;
    }
    if (uc == '\0')
        return (char *)str;
    return last;
}

int StringOperations::strspn(const char *str1, const char *str2)
{
    int len = 0;
    while (*str1)
    {
        const char *s = str2;
        while (*s)
        {
            if (*str1 == *s)
                break;
            s++;
        }
        if (!*s)
            return len;
        str1++;
        len++;
    }
    return len;
}

char *StringOperations::strstr(const char *haystack, const char *needle)
{
    while (*haystack)
    {
        const char *h = haystack;
        const char *n = needle;
        while (*h && *n && (*h == *n))
        {
            h++;
            n++;
        }
        if (!*n)
            return (char *)haystack;
        haystack++;
    }
    return nullptr;
}

char *StringOperations::strtok(char *str, const char *delim)
{
    static char *next_token = nullptr;

    if (str == nullptr && next_token == nullptr)
        return nullptr;

    char *token_start = nullptr;

    if (str != nullptr)
        token_start = str;
    else
        token_start = next_token;

    char *token_end = token_start + strcspn(token_start, delim);

    if (*token_end == '\0')
    {
        next_token = nullptr;
        return token_start == next_token ? nullptr : token_start;
    }

    *token_end = '\0';
    next_token = token_end + 1;
    return token_start;
}

int StringOperations::strxfrm(char *dest, const char *src, int n)
{
    int len = strlen(src);
    if (n <= len)
        return len;
    strcpy(dest, src);
    return len;
}
// Concatène la chaîne src à la fin de la chaîne dest et renvoie un pointeur vers dest.
char *StringOperations::strcat(char *dest, const char *src)
{
    char *d = dest;
    // Trouve la fin de dest
    while (*d)
        d++;
    // Copie les caractères de src à la fin de dest
    while ((*d++ = *src++))
        ;
    return dest;
}

// Recherche le premier caractère c dans la chaîne str et renvoie un pointeur vers ce caractère.
char *StringOperations::strchr(const char *str, int c)
{
    char uc = (char)c;
    // Parcourt la chaîne jusqu'à ce que le caractère c soit trouvé
    while (*str)
    {
        if (*str == uc)
            return (char *)str;
        str++;
    }
    // Renvoie un pointeur vers la fin de la chaîne si c est '\0'
    if (uc == '\0')
        return (char *)str;
    return nullptr;
}

// Compare les chaînes str1 et str2. Renvoie un entier négatif si str1 est inférieure à str2,
// un entier positif si str1 est supérieure à str2, et 0 si les deux chaînes sont égales.
int StringOperations::strcmp(const char *str1, const char *str2)
{
    // Parcourt les deux chaînes caractère par caractère
    while (*str1 && *str2 && (*str1 == *str2))
    {
        str1++;
        str2++;
    }
    // Renvoie la différence entre les caractères en cours de comparaison
    return (*str1 - *str2);
}

// Copie la chaîne src dans la chaîne dest et renvoie un pointeur vers dest.
char *StringOperations::strcpy(char *dest, const char *src)
{
    char *d = dest;
    // Copie les caractères de src dans dest
    while ((*d++ = *src++))
        ;
    return dest;
}

// Calcule la longueur du segment initial de str1 qui ne contient aucun des caractères de str2.
int StringOperations::strcspn(const char *str1, const char *str2)
{
    int len = 0;
    // Parcourt str1 et cherche les caractères communs avec str2
    while (*str1)
    {
        const char *s = str2;
        while (*s)
        {
            if (*str1 == *s)
                return len;
            s++;
        }
        str1++;
        len++;
    }
    return len;
}

// Duplique la chaîne str dans une nouvelle zone de mémoire allouée dynamiquement et renvoie un pointeur vers cette nouvelle chaîne.
char *StringOperations::strdup(const char *str)
{
    int len = strlen(str) + 1;
    char *newstr = new char[len];
    if (newstr)
    {
        // Copie la chaîne dans la nouvelle mémoire
        strcpy(newstr, str);
    }
    return newstr;
}

// Calcule la longueur de la chaîne str, excluant le caractère nul final.
int StringOperations::strlen(const char *str)
{
    int len = 0;
    // Compte les caractères dans la chaîne jusqu'au caractère nul final
    while (*str++)
        len++;
    return len;
}

// Concatène au plus n caractères de la chaîne src à la fin de la chaîne dest et renvoie un pointeur vers dest.
char *StringOperations::strncat(char *dest, const char *src, int n)
{
    char *d = dest;
    // Trouve la fin de dest
    while (*d)
        d++;
    // Copie les caractères de src à la fin de dest jusqu'à ce que n soit atteint ou que src soit épuisé
    while (n-- && (*d++ = *src++))
        ;
    // Ajoute un caractère nul à la fin
    *d = '\0';
    return dest;
}

// Compare au plus n caractères des chaînes str1 et str2.
// Renvoie un entier négatif si str1 est inférieure à str2,
// un entier positif si str1 est supérieure à str2, et 0 si les deux chaînes sont égales.
int StringOperations::strncmp(const char *str1, const char *str2, int n)
{
    // Parcourt les deux chaînes caractère par caractère jusqu'à ce que n soit atteint ou que l'une des chaînes soit épuisée
    while (n-- && *str1 && *str2 && (*str1 == *str2))
    {
        str1++;
        str2++;
    }
    // Si n est atteint, les chaînes sont considérées comme égales
    if (n == 0)
        return 0;
    // Sinon, renvoie la différence entre les caractères en cours de comparaison
    return (*str1 - *str2);
}

// Copie au plus n caractères de la chaîne src dans la chaîne dest et renvoie un pointeur vers dest.
char *StringOperations::strncpy(char *dest, const char *src, int n)
{
    char *d = dest;
    // Copie les caractères de src dans dest jusqu'à ce que n soit atteint ou que src soit épuisé
    while (n-- && (*d++ = *src++))
        ;
    // Si n est épuisé, ajoute un caractère nul à la fin de dest
    if (n == (int)-1)
        *d = '\0';
    return dest;
}

// Duplique au plus n caractères de la chaîne str dans une nouvelle zone de mémoire allouée dynamiquement et renvoie un pointeur vers cette nouvelle chaîne.
char *StringOperations::strndup(const char *str, int n)
{
    int len = strlen(str);
    // Si n est plus petit que la longueur de str, utilise n comme longueur de la nouvelle chaîne
    if (n < len)
        len = n;
    char *newstr = new char[len + 1];
    if (newstr)
    {
        // Copie les caractères de str dans la nouvelle chaîne jusqu'à la longueur spécifiée
        strncpy(newstr, str, len);
        newstr[len] = '\0';
    }
    return newstr;
}

// Recherche le premier caractère de la chaîne str1 qui se trouve également dans la chaîne str2 et renvoie un pointeur vers ce caractère.
char *StringOperations::strpbrk(const char *str1, const char *str2)
{
    // Parcourt str1 jusqu'à ce qu'un caractère commun soit trouvé dans str2
    while (*str1)
    {
        const char *s = str2;
        while (*s)
        {
            if (*str1 == *s)
                return (char *)str1;
            s++;
        }
        str1++;
    }
    return nullptr;
}

// Recherche la dernière occurrence du caractère c dans la chaîne str et renvoie un pointeur vers ce caractère.
char *StringOperations::strrchr(const char *str, int c)
{
    char *last = nullptr;
    char uc = (char)c;
    // Parcourt str et met à jour last à chaque occurrence de c
    while (*str)
    {
        if (*str == uc)
            last = (char *)str;
        str++;
    }
    // Renvoie un pointeur vers la fin de la chaîne si c est '\0'
    if (uc == '\0')
        return (char *)str;
    return last;
}

// Calcule la longueur du segment initial de str contenant uniquement des caractères de str2.
int StringOperations::strspn(const char *str1, const char *str2)
{
    int len = 0;
    // Parcourt str1 et vérifie si chaque caractère est présent dans str2
    while (*str1)
    {
        const char *s = str2;
        while (*s)
        {
            if (*str1 == *s)
                break;
            s++;
        }
        // Si le caractère n'est pas trouvé dans str2, renvoie la longueur actuelle
        if (!*s)
            return len;
        str1++;
        len++;
    }
    return len;
}

// Recherche la première occurrence de la chaîne needle dans la chaîne haystack et renvoie un pointeur vers cette occurrence.
char *StringOperations::strstr(const char *haystack, const char *needle)
{
    // Parcourt haystack et vérifie si needle peut être trouvé à partir de chaque position
    while (*haystack)
    {
        const char *h = haystack;
        const char *n = needle;
        while (*h && *n && (*h == *n))
        {
            h++;
            n++;
        }
        // Si needle est trouvé, renvoie un pointeur vers sa première occurrence
        if (!*n)
            return (char *)haystack;
        haystack++;
    }
    return nullptr;
}

// Divise la chaîne str en tokens en utilisant les caractères de delim comme délimiteurs et renvoie un pointeur vers le premier token trouvé.
char *StringOperations::strtok(char *str, const char *delim)
{
    static char *next_token = nullptr;

    if (str == nullptr && next_token == nullptr)
        return nullptr;

    char *token_start = nullptr;

    if (str != nullptr)
        token_start = str;
    else
        token_start = next_token;

    char *token_end = token_start + strcspn(token_start, delim);

    // Si le token est vide, retourne nullptr
    if (*token_end == '\0')
    {
        next_token = nullptr;
        return token_start == next_token ? nullptr : token_start;
    }

    // Sépare le token du reste de la chaîne
    *token_end = '\0';
    next_token = token_end + 1;
    return token_start;
}

// Transforme la chaîne src en une chaîne pouvant être comparée à l'aide de strcmp, jusqu'à n caractères, et la stocke dans dest.
int StringOperations::strxfrm(char *dest, const char *src, int n)
{
    int len = strlen(src);
    // Si n est plus petit ou égal à la longueur de src, renvoie la longueur de src
    if (n <= len)
        return len;
    // Sinon, copie src dans dest et renvoie la longueur de src
    strcpy(dest, src);
    return len;
}
