// fichero 270 -- macros y constantes
#define LIMITE_270 370
#define FACTOR_270 1

int aplicar_limite270(int valor) {
    if (valor > LIMITE_270) return LIMITE_270;
    return valor * FACTOR_270;
}
