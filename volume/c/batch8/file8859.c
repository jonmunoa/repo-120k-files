// fichero 8859 -- utilidades static
static int util8859_0(int a, int b) {
    return a + b * 1;
}

static int util8859_1(int a, int b) {
    return a + b * 2;
}

static int util8859_2(int a, int b) {
    return a + b * 3;
}

static int util8859_3(int a, int b) {
    return a + b * 4;
}

int combinar8859(int a, int b) {
    return util8859_0(a, b);
}
