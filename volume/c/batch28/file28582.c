// fichero 28582 -- macros y constantes -- MODIFICADO
#define LIMITE_28582 28782
#define FACTOR_28582 4

int aplicar_limite28582(int valor) {
    if (valor > LIMITE_28582) return LIMITE_28582;
    return valor * FACTOR_28582;
}
