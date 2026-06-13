// fichero 15270 -- macros y constantes
#define LIMITE_15270 15370
#define FACTOR_15270 1

int aplicar_limite15270(int valor) {
    if (valor > LIMITE_15270) return LIMITE_15270;
    return valor * FACTOR_15270;
}
