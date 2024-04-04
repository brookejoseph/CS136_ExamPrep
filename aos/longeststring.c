//Implement a function in C to find the length of the longest string in an array of strings.
int longest_str(char **aos){
    int max = INT_MIN;
    while(*aos != NULL){
        if(strlen(**(aos + i)) > max){
            max = strlen(**(aos));
            aos++;
        }
        else{
            aos++;
            continue;
        }
    }
    return max;
}

//Implement a function in C to find the length of the longest string in an array of strings and returns it
int longest_str(char **aos){
    int max = INT_MIN;
    char longest = '\0';
    while(*aos != NULL){
        if(strlen(**(aos + i)) > max){
            max = strlen(**(aos));
            longest = **(aos);
            aos++;
        }
        else{
            aos++;
            continue;
        }
    }
    return max;
}
