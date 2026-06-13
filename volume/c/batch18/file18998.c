// fichero 18998 -- macros y constantes
#define LIMITE_18998 19098
#define FACTOR_18998 4

int aplicar_limite18998(int valor) {
    if (valor > LIMITE_18998) return LIMITE_18998;
    return valor * FACTOR_18998;
}
