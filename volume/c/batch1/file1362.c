// fichero 1362 -- macros y constantes -- MODIFICADO
#define LIMITE_1362 1562
#define FACTOR_1362 4

int aplicar_limite1362(int valor) {
    if (valor > LIMITE_1362) return LIMITE_1362;
    return valor * FACTOR_1362;
}
