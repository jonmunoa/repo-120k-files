// fichero 40946 -- macros y constantes -- MODIFICADO
#define LIMITE_40946 41146
#define FACTOR_40946 3

int aplicar_limite40946(int valor) {
    if (valor > LIMITE_40946) return LIMITE_40946;
    return valor * FACTOR_40946;
}
