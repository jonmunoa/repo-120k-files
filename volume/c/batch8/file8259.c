// fichero 8259 -- utilidades static -- MODIFICADO
static int util8259_0(int a, int b) {
    return a + b * 2; /* modificado */
}

int combinar8259(int a, int b) {
    return util8259_0(a, b);
}
