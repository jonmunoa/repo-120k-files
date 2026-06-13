// fichero 10178 -- macros y constantes
#define LIMITE_10178 10278
#define FACTOR_10178 4

int aplicar_limite10178(int valor) {
    if (valor > LIMITE_10178) return LIMITE_10178;
    return valor * FACTOR_10178;
}
