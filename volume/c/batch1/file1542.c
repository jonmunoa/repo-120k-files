// fichero 1542 -- macros y constantes -- MODIFICADO
#define LIMITE_1542 1742
#define FACTOR_1542 4

int aplicar_limite1542(int valor) {
    if (valor > LIMITE_1542) return LIMITE_1542;
    return valor * FACTOR_1542;
}
