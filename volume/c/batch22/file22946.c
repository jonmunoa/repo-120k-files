// fichero 22946 -- macros y constantes -- MODIFICADO
#define LIMITE_22946 23146
#define FACTOR_22946 3

int aplicar_limite22946(int valor) {
    if (valor > LIMITE_22946) return LIMITE_22946;
    return valor * FACTOR_22946;
}
