// fichero 246 -- macros y constantes
#define LIMITE_246 346
#define FACTOR_246 2

int aplicar_limite246(int valor) {
    if (valor > LIMITE_246) return LIMITE_246;
    return valor * FACTOR_246;
}
