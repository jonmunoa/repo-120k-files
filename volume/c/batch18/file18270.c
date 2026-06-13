// fichero 18270 -- macros y constantes
#define LIMITE_18270 18370
#define FACTOR_18270 1

int aplicar_limite18270(int valor) {
    if (valor > LIMITE_18270) return LIMITE_18270;
    return valor * FACTOR_18270;
}
