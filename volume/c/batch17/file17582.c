// fichero 17582 -- macros y constantes -- MODIFICADO
#define LIMITE_17582 17782
#define FACTOR_17582 4

int aplicar_limite17582(int valor) {
    if (valor > LIMITE_17582) return LIMITE_17582;
    return valor * FACTOR_17582;
}
