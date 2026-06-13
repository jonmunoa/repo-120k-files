// fichero 13246 -- macros y constantes
#define LIMITE_13246 13346
#define FACTOR_13246 2

int aplicar_limite13246(int valor) {
    if (valor > LIMITE_13246) return LIMITE_13246;
    return valor * FACTOR_13246;
}
