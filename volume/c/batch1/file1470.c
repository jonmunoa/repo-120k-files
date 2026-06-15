// fichero 1470 -- macros y constantes -- MODIFICADO
#define LIMITE_1470 1670
#define FACTOR_1470 2

int aplicar_limite1470(int valor) {
    if (valor > LIMITE_1470) return LIMITE_1470;
    return valor * FACTOR_1470;
}
