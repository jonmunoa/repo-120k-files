// fichero 5246 -- macros y constantes
#define LIMITE_5246 5346
#define FACTOR_5246 2

int aplicar_limite5246(int valor) {
    if (valor > LIMITE_5246) return LIMITE_5246;
    return valor * FACTOR_5246;
}
