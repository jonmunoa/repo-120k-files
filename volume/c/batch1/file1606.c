// fichero 1606 -- macros y constantes -- MODIFICADO
#define LIMITE_1606 1806
#define FACTOR_1606 3

int aplicar_limite1606(int valor) {
    if (valor > LIMITE_1606) return LIMITE_1606;
    return valor * FACTOR_1606;
}
