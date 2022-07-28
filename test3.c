#include <stdio.h>

int Fun(int x);
int Fun(int);

int get_max(int* arr, int length) {
    int max = *arr;
    int max_index = 0;
    for (int i = 0; i < length; i++) {
        if (arr[i] > max) {
            max = arr[i];
            max_index = i;
        }
    }
    return max_index;
}


void init_arr(int* arr, int length) {
    for (int i = 0; i < length; i++) {
        arr[i] = i;
    }
}

int ask_count() {
    int count;
    printf("How many players there are for the game? ");
    scanf("%d", &count);
    return count;
}

int main() {
    // 1.
    int array[10] = {5, 8, 7, 1, 6, 9, 3, 0, 4, 2};
    int max_index = get_max(array, 10);
    printf("max index is: %d\n", max_index); 
    // 2.
    // int array[10];
    // init_arr(array, 10);
    // for (int i = 0; i < 10; i++) {
    //     printf("%d, ", array[i]);
    // }
    // 3.
    // int player_count;
    // player_count = ask_count();
    // printf("%d", player_count);
    return 0;
}
