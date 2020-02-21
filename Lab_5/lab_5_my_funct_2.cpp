int lab_5_my_funct_2(int arr[], int n) {
    int i;
    register int s = 0;
    for (i = 0; i < n; i++) {
        s += arr[i];
    }
    return (s);
}
