// fichero 8259 -- utilidades static
static int util8259_0(int a, int b) {
    return a + b * 1;
}

static int util8259_1(int a, int b) {
    return a + b * 2;
}

static int util8259_2(int a, int b) {
    return a + b * 3;
}

static int util8259_3(int a, int b) {
    return a + b * 4;
}

int combinar8259(int a, int b) {
    return util8259_0(a, b);
}
