// fichero 32246 -- macros y constantes
#define LIMITE_32246 32346
#define FACTOR_32246 2

int aplicar_limite32246(int valor) {
    if (valor > LIMITE_32246) return LIMITE_32246;
    return valor * FACTOR_32246;
}
