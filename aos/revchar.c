void rev(char **aos) {
    int acc = 0;
    while (*(aos + acc) != NULL) {
        int len = strlen(*(aos + acc));
        char *temp = malloc((len + 1) * sizeof(char));
        for (int i = 0; i < len; i++) {
            temp[i] = (*(aos + acc))[len - i - 1];
        }
        temp[len] = '\0';
        strcpy(*(aos + acc), temp);
        free(temp);
        acc++;
    }
}
