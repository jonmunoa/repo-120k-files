// fichero 30270 -- macros y constantes
#define LIMITE_30270 30370
#define FACTOR_30270 1

int aplicar_limite30270(int valor) {
    if (valor > LIMITE_30270) return LIMITE_30270;
    return valor * FACTOR_30270;
}
