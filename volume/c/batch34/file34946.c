// fichero 34946 -- macros y constantes -- MODIFICADO
#define LIMITE_34946 35146
#define FACTOR_34946 3

int aplicar_limite34946(int valor) {
    if (valor > LIMITE_34946) return LIMITE_34946;
    return valor * FACTOR_34946;
}
