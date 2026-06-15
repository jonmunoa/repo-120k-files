// fichero 25946 -- macros y constantes -- MODIFICADO
#define LIMITE_25946 26146
#define FACTOR_25946 3

int aplicar_limite25946(int valor) {
    if (valor > LIMITE_25946) return LIMITE_25946;
    return valor * FACTOR_25946;
}
