// fichero 12582 -- macros y constantes -- MODIFICADO
#define LIMITE_12582 12782
#define FACTOR_12582 4

int aplicar_limite12582(int valor) {
    if (valor > LIMITE_12582) return LIMITE_12582;
    return valor * FACTOR_12582;
}
