// fichero 1470 -- macros y constantes
#define LIMITE_1470 1570
#define FACTOR_1470 1

int aplicar_limite1470(int valor) {
    if (valor > LIMITE_1470) return LIMITE_1470;
    return valor * FACTOR_1470;
}
