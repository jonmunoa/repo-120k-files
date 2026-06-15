// fichero 4582 -- macros y constantes -- MODIFICADO
#define LIMITE_4582 4782
#define FACTOR_4582 4

int aplicar_limite4582(int valor) {
    if (valor > LIMITE_4582) return LIMITE_4582;
    return valor * FACTOR_4582;
}
