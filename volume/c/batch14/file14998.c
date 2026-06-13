// fichero 14998 -- macros y constantes
#define LIMITE_14998 15098
#define FACTOR_14998 4

int aplicar_limite14998(int valor) {
    if (valor > LIMITE_14998) return LIMITE_14998;
    return valor * FACTOR_14998;
}
