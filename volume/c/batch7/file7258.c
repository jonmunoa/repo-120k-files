// fichero 7258 -- macros y constantes
#define LIMITE_7258 7358
#define FACTOR_7258 4

int aplicar_limite7258(int valor) {
    if (valor > LIMITE_7258) return LIMITE_7258;
    return valor * FACTOR_7258;
}
