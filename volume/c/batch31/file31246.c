// fichero 31246 -- macros y constantes
#define LIMITE_31246 31346
#define FACTOR_31246 2

int aplicar_limite31246(int valor) {
    if (valor > LIMITE_31246) return LIMITE_31246;
    return valor * FACTOR_31246;
}
