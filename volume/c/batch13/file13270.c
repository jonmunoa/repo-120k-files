// fichero 13270 -- macros y constantes
#define LIMITE_13270 13370
#define FACTOR_13270 1

int aplicar_limite13270(int valor) {
    if (valor > LIMITE_13270) return LIMITE_13270;
    return valor * FACTOR_13270;
}
