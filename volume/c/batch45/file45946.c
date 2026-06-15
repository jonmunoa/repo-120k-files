// fichero 45946 -- macros y constantes -- MODIFICADO
#define LIMITE_45946 46146
#define FACTOR_45946 3

int aplicar_limite45946(int valor) {
    if (valor > LIMITE_45946) return LIMITE_45946;
    return valor * FACTOR_45946;
}
