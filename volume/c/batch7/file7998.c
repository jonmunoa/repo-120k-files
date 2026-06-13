// fichero 7998 -- macros y constantes
#define LIMITE_7998 8098
#define FACTOR_7998 4

int aplicar_limite7998(int valor) {
    if (valor > LIMITE_7998) return LIMITE_7998;
    return valor * FACTOR_7998;
}
