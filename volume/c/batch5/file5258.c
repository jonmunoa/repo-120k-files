// fichero 5258 -- macros y constantes
#define LIMITE_5258 5358
#define FACTOR_5258 4

int aplicar_limite5258(int valor) {
    if (valor > LIMITE_5258) return LIMITE_5258;
    return valor * FACTOR_5258;
}
