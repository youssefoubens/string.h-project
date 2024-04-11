

// For int

class StringOperations
{
public:
    // Concatène la chaîne src à la fin de la chaîne dest et renvoie un pointeur vers dest.
    static char *strcat(char *dest, const char *src);

    // Recherche le premier caractère c dans la chaîne str et renvoie un pointeur vers ce caractère.
    static char *strchr(const char *str, int c);

    // Compare les chaînes str1 et str2. Renvoie un entier négatif si str1 est inférieure à str2,
    // un entier positif si str1 est supérieure à str2, et 0 si les deux chaînes sont égales.
    static int strcmp(const char *str1, const char *str2);

    // Copie la chaîne src dans la chaîne dest et renvoie un pointeur vers dest.
    static char *strcpy(char *dest, const char *src);

    // Calcule la longueur du segment initial de str1 qui ne contient aucun des caractères de str2.
    static int strcspn(const char *str1, const char *str2);

    // Duplique la chaîne str dans une nouvelle zone de mémoire allouée dynamiquement et renvoie un pointeur vers cette nouvelle chaîne.
    static char *strdup(const char *str);

    // Calcule la longueur de la chaîne str, excluant le caractère nul final.
    static int strlen(const char *str);

    // Concatène au plus n caractères de la chaîne src à la fin de la chaîne dest et renvoie un pointeur vers dest.
    static char *strncat(char *dest, const char *src, int n);

    // Compare au plus n caractères des chaînes str1 et str2.
    // Renvoie un entier négatif si str1 est inférieure à str2,
    // un entier positif si str1 est supérieure à str2, et 0 si les deux chaînes sont égales.
    static int strncmp(const char *str1, const char *str2, int n);

    // Copie au plus n caractères de la chaîne src dans la chaîne dest et renvoie un pointeur vers dest.
    static char *strncpy(char *dest, const char *src, int n);

    // Duplique au plus n caractères de la chaîne str dans une nouvelle zone de mémoire allouée dynamiquement et renvoie un pointeur vers cette nouvelle chaîne.
    static char *strndup(const char *str, int n);

    // Recherche le premier caractère de la chaîne str1 qui se trouve également dans la chaîne str2 et renvoie un pointeur vers ce caractère.
    static char *strpbrk(const char *str1, const char *str2);

    // Recherche la dernière occurrence du caractère c dans la chaîne str et renvoie un pointeur vers ce caractère.
    static char *strrchr(const char *str, int c);

    // Calcule la longueur du segment initial de str1 contenant uniquement des caractères de str2.
    static int strspn(const char *str1, const char *str2);

    // Recherche la première occurrence de la chaîne needle dans la chaîne haystack et renvoie un pointeur vers cette occurrence.
    static char *strstr(const char *haystack, const char *needle);

    // Divise la chaîne str en tokens en utilisant les caractères de delim comme délimiteurs et renvoie un pointeur vers le premier token trouvé.
    static char *strtok(char *str, const char *delim);

    // Transforme la chaîne src en une chaîne pouvant être comparée à l'aide de strcmp, jusqu'à n caractères, et la stocke dans dest.
    static int strxfrm(char *dest, const char *src, int n);
};
