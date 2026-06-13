// fichero 1998 -- macros y constantes
#define LIMITE_1998 2098
#define FACTOR_1998 4

int aplicar_limite1998(int valor) {
    if (valor > LIMITE_1998) return LIMITE_1998;
    return valor * FACTOR_1998;
}
