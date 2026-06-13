// fichero 8051 -- utilidades static
static int util8051_0(int a, int b) {
    return a + b * 1;
}

static int util8051_1(int a, int b) {
    return a + b * 2;
}

static int util8051_2(int a, int b) {
    return a + b * 3;
}

static int util8051_3(int a, int b) {
    return a + b * 4;
}

int combinar8051(int a, int b) {
    return util8051_0(a, b);
}
