// fichero 11270 -- macros y constantes
#define LIMITE_11270 11370
#define FACTOR_11270 1

int aplicar_limite11270(int valor) {
    if (valor > LIMITE_11270) return LIMITE_11270;
    return valor * FACTOR_11270;
}
