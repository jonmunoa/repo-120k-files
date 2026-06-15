// fichero 1562 -- macros y constantes -- MODIFICADO
#define LIMITE_1562 1762
#define FACTOR_1562 4

int aplicar_limite1562(int valor) {
    if (valor > LIMITE_1562) return LIMITE_1562;
    return valor * FACTOR_1562;
}
