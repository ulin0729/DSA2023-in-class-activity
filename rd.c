/* include all the headers you need */

/* Please try to figure out how to design the parameter interface of your functions by observing the given bozo sort function */
/* Otherwise, you might suffer from rewriting your code to meet the final requirements */

int isSorted(int *idx, int *value, int len) {
    while (--len >= 1 ) {
        if (value[idx[len]] < value[idx[len-1]]) return 0;
    }
    return 1;
}

void bozo_sort(int *idx, int *value, int len) {
    while(!isSorted(idx, value, len)) {
        int l = rand() % len;
        int r = rand() % len;
        int t = idx[l];
        idx[l] = idx[r];
        idx[r] = t;
    }
}

void bubble_sort(){}

void quick_sort(){}

void bucket_sort(){}