// fichero 30582 -- macros y constantes -- MODIFICADO
#define LIMITE_30582 30782
#define FACTOR_30582 4

int aplicar_limite30582(int valor) {
    if (valor > LIMITE_30582) return LIMITE_30582;
    return valor * FACTOR_30582;
}
