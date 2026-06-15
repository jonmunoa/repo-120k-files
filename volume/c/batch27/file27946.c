// fichero 27946 -- macros y constantes -- MODIFICADO
#define LIMITE_27946 28146
#define FACTOR_27946 3

int aplicar_limite27946(int valor) {
    if (valor > LIMITE_27946) return LIMITE_27946;
    return valor * FACTOR_27946;
}
