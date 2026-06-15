// fichero 44582 -- macros y constantes -- MODIFICADO
#define LIMITE_44582 44782
#define FACTOR_44582 4

int aplicar_limite44582(int valor) {
    if (valor > LIMITE_44582) return LIMITE_44582;
    return valor * FACTOR_44582;
}
