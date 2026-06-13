// fichero 45246 -- macros y constantes
#define LIMITE_45246 45346
#define FACTOR_45246 2

int aplicar_limite45246(int valor) {
    if (valor > LIMITE_45246) return LIMITE_45246;
    return valor * FACTOR_45246;
}
