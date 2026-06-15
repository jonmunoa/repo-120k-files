// fichero 28946 -- macros y constantes -- MODIFICADO
#define LIMITE_28946 29146
#define FACTOR_28946 3

int aplicar_limite28946(int valor) {
    if (valor > LIMITE_28946) return LIMITE_28946;
    return valor * FACTOR_28946;
}
