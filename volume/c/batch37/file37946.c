// fichero 37946 -- macros y constantes -- MODIFICADO
#define LIMITE_37946 38146
#define FACTOR_37946 3

int aplicar_limite37946(int valor) {
    if (valor > LIMITE_37946) return LIMITE_37946;
    return valor * FACTOR_37946;
}
