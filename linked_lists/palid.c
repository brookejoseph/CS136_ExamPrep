bool palid(struct llist *val, int len) {
    struct llnode *current = val->front;
    int arr_first[len / 2]; // Removed unnecessary initialization
    int arr_second[len / 2]; // Removed unnecessary initialization
    bool even = len % 2 == 0; // Simplified even check
    int acc = 0; // Initialize accumulator to 0

    if (even) {
        int new_len = len / 2;
        for (int i = 0; i < new_len; i++) {
            arr_first[i] = current->data;
            current = current->next;
        }
        for (int i = 0; i < new_len; i++) { // Corrected loop range
            arr_second[i] = current->data;
            current = current->next;
        }
        for (int i = 0; i < new_len; i++) {
            if (arr_first[i] == arr_second[new_len - i - 1]) { // Fixed comparison logic
                acc++;
            }
        }
        return acc == new_len; // Return true if all elements match
    } else {
        int new_len = len / 2;
        for (int i = 0; i < new_len; i++) {
            arr_first[i] = current->data;
            current = current->next;
        }
        current = current->next; // Skip the middle element in odd-length list
        for (int i = 0; i < new_len; i++) { // Corrected loop range
            arr_second[i] = current->data;
            current = current->next;
        }
        for (int i = 0; i < new_len; i++) {
            if (arr_first[i] == arr_second[new_len - i - 1]) { // Fixed comparison logic
                acc++;
            }
        }
        return acc == new_len; // Return true if all elements match
    }
}
