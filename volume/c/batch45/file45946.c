// fichero 45946 -- macros y constantes
#define LIMITE_45946 46046
#define FACTOR_45946 2

int aplicar_limite45946(int valor) {
    if (valor > LIMITE_45946) return LIMITE_45946;
    return valor * FACTOR_45946;
}
