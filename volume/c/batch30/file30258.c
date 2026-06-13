// fichero 30258 -- macros y constantes
#define LIMITE_30258 30358
#define FACTOR_30258 4

int aplicar_limite30258(int valor) {
    if (valor > LIMITE_30258) return LIMITE_30258;
    return valor * FACTOR_30258;
}
