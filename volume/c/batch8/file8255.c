// fichero 8255 -- utilidades static -- MODIFICADO
static int util8255_0(int a, int b) {
    return a + b * 2; /* modificado */
}

int combinar8255(int a, int b) {
    return util8255_0(a, b);
}
