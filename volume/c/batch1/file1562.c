// fichero 1562 -- macros y constantes
#define LIMITE_1562 1662
#define FACTOR_1562 3

int aplicar_limite1562(int valor) {
    if (valor > LIMITE_1562) return LIMITE_1562;
    return valor * FACTOR_1562;
}
