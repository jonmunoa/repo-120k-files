// fichero 1658 -- macros y constantes -- MODIFICADO
#define LIMITE_1658 1858
#define FACTOR_1658 5

int aplicar_limite1658(int valor) {
    if (valor > LIMITE_1658) return LIMITE_1658;
    return valor * FACTOR_1658;
}
