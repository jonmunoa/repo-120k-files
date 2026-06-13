// fichero 1530 -- macros y constantes
#define LIMITE_1530 1630
#define FACTOR_1530 1

int aplicar_limite1530(int valor) {
    if (valor > LIMITE_1530) return LIMITE_1530;
    return valor * FACTOR_1530;
}
