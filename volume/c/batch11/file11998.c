// fichero 11998 -- macros y constantes
#define LIMITE_11998 12098
#define FACTOR_11998 4

int aplicar_limite11998(int valor) {
    if (valor > LIMITE_11998) return LIMITE_11998;
    return valor * FACTOR_11998;
}
