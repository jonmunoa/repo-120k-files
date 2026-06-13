// fichero 2246 -- macros y constantes
#define LIMITE_2246 2346
#define FACTOR_2246 2

int aplicar_limite2246(int valor) {
    if (valor > LIMITE_2246) return LIMITE_2246;
    return valor * FACTOR_2246;
}
