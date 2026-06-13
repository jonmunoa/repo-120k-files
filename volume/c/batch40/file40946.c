// fichero 40946 -- macros y constantes
#define LIMITE_40946 41046
#define FACTOR_40946 2

int aplicar_limite40946(int valor) {
    if (valor > LIMITE_40946) return LIMITE_40946;
    return valor * FACTOR_40946;
}
