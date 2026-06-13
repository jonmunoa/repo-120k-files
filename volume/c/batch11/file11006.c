// fichero 11006 -- macros y constantes
#define LIMITE_11006 11106
#define FACTOR_11006 2

int aplicar_limite11006(int valor) {
    if (valor > LIMITE_11006) return LIMITE_11006;
    return valor * FACTOR_11006;
}
