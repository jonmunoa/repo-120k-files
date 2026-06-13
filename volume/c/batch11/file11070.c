// fichero 11070 -- macros y constantes
#define LIMITE_11070 11170
#define FACTOR_11070 1

int aplicar_limite11070(int valor) {
    if (valor > LIMITE_11070) return LIMITE_11070;
    return valor * FACTOR_11070;
}
