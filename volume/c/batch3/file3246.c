// fichero 3246 -- macros y constantes
#define LIMITE_3246 3346
#define FACTOR_3246 2

int aplicar_limite3246(int valor) {
    if (valor > LIMITE_3246) return LIMITE_3246;
    return valor * FACTOR_3246;
}
