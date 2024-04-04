//Implement a function in C to concatenate two arrays of strings into a single array.
char cat_2str(char **aos1, char **aos2){
    int size1 = 0;
    int size2 = 0; 
    while(*aos1 != NULL){
        size1++;
        aos1++;
    }
    while(*aos2 != NULL){
        size2++;
        aos2++;
    }
    char **combined = malloc(sizeof(char *) * (size1 + size2 + 1));
    for(int i = 0; i < size1; i++){
        combined[i] = strdup(aos1[i]);
    }
    for(int i = 0; i < size2; i++){
        combined[i + size1] = strdup(aos[i]);
    }
    combined[size1 + size2] = NULL;
}
