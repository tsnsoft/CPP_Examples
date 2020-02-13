int funsum(int n, int x) {
    int i, s; // локальные переменные
    s = 0;
    for (i = 0; i <= n; i++)
        s += (i + x);
    return (s);
}
