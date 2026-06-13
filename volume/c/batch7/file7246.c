// fichero 7246 -- macros y constantes
#define LIMITE_7246 7346
#define FACTOR_7246 2

int aplicar_limite7246(int valor) {
    if (valor > LIMITE_7246) return LIMITE_7246;
    return valor * FACTOR_7246;
}
