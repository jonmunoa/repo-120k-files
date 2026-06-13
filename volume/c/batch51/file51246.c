// fichero 51246 -- macros y constantes
#define LIMITE_51246 51346
#define FACTOR_51246 2

int aplicar_limite51246(int valor) {
    if (valor > LIMITE_51246) return LIMITE_51246;
    return valor * FACTOR_51246;
}
