// fichero 1430 -- macros y constantes
#define LIMITE_1430 1530
#define FACTOR_1430 1

int aplicar_limite1430(int valor) {
    if (valor > LIMITE_1430) return LIMITE_1430;
    return valor * FACTOR_1430;
}
