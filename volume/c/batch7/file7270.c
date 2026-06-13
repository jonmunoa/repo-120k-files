// fichero 7270 -- macros y constantes
#define LIMITE_7270 7370
#define FACTOR_7270 1

int aplicar_limite7270(int valor) {
    if (valor > LIMITE_7270) return LIMITE_7270;
    return valor * FACTOR_7270;
}
