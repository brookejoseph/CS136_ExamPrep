void uppercase(char **aos, int len) {
    for (int i = 0; i < len; i++) {
        char *temp = aos[i];
        int j = 0;
        while (*temp != '\0') {
            if (*temp >= 'a' && *temp <= 'z') {
                *temp = *temp - 'a' + 'A';
            }
            temp++;
            j++;
        }
    }
}
