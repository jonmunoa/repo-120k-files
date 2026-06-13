// fichero 53246 -- macros y constantes
#define LIMITE_53246 53346
#define FACTOR_53246 2

int aplicar_limite53246(int valor) {
    if (valor > LIMITE_53246) return LIMITE_53246;
    return valor * FACTOR_53246;
}
