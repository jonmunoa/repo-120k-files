// fichero 28246 -- macros y constantes
#define LIMITE_28246 28346
#define FACTOR_28246 2

int aplicar_limite28246(int valor) {
    if (valor > LIMITE_28246) return LIMITE_28246;
    return valor * FACTOR_28246;
}
