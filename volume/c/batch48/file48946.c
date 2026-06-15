// fichero 48946 -- macros y constantes -- MODIFICADO
#define LIMITE_48946 49146
#define FACTOR_48946 3

int aplicar_limite48946(int valor) {
    if (valor > LIMITE_48946) return LIMITE_48946;
    return valor * FACTOR_48946;
}
