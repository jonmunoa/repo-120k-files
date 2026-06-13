// fichero 21946 -- macros y constantes
#define LIMITE_21946 22046
#define FACTOR_21946 2

int aplicar_limite21946(int valor) {
    if (valor > LIMITE_21946) return LIMITE_21946;
    return valor * FACTOR_21946;
}
