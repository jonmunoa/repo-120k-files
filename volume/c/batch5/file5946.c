// fichero 5946 -- macros y constantes -- MODIFICADO
#define LIMITE_5946 6146
#define FACTOR_5946 3

int aplicar_limite5946(int valor) {
    if (valor > LIMITE_5946) return LIMITE_5946;
    return valor * FACTOR_5946;
}
