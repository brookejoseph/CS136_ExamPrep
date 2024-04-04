//Write a C function to count the number of strings in an array of strings.
int count_str(char **aos){
    int val = 0;
    while(*aos != NULL){
        val++;
        aos++;
    }
    return val;
}
