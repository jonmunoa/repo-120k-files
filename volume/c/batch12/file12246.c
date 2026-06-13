// fichero 12246 -- macros y constantes
#define LIMITE_12246 12346
#define FACTOR_12246 2

int aplicar_limite12246(int valor) {
    if (valor > LIMITE_12246) return LIMITE_12246;
    return valor * FACTOR_12246;
}
