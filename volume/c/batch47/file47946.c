// fichero 47946 -- macros y constantes -- MODIFICADO
#define LIMITE_47946 48146
#define FACTOR_47946 3

int aplicar_limite47946(int valor) {
    if (valor > LIMITE_47946) return LIMITE_47946;
    return valor * FACTOR_47946;
}
