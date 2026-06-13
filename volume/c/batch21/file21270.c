// fichero 21270 -- macros y constantes
#define LIMITE_21270 21370
#define FACTOR_21270 1

int aplicar_limite21270(int valor) {
    if (valor > LIMITE_21270) return LIMITE_21270;
    return valor * FACTOR_21270;
}
