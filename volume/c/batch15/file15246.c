// fichero 15246 -- macros y constantes
#define LIMITE_15246 15346
#define FACTOR_15246 2

int aplicar_limite15246(int valor) {
    if (valor > LIMITE_15246) return LIMITE_15246;
    return valor * FACTOR_15246;
}
