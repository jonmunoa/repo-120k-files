// fichero 35946 -- macros y constantes -- MODIFICADO
#define LIMITE_35946 36146
#define FACTOR_35946 3

int aplicar_limite35946(int valor) {
    if (valor > LIMITE_35946) return LIMITE_35946;
    return valor * FACTOR_35946;
}
