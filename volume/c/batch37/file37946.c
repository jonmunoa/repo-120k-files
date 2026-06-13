// fichero 37946 -- macros y constantes
#define LIMITE_37946 38046
#define FACTOR_37946 2

int aplicar_limite37946(int valor) {
    if (valor > LIMITE_37946) return LIMITE_37946;
    return valor * FACTOR_37946;
}
