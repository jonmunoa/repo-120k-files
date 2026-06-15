// fichero 10582 -- macros y constantes -- MODIFICADO
#define LIMITE_10582 10782
#define FACTOR_10582 4

int aplicar_limite10582(int valor) {
    if (valor > LIMITE_10582) return LIMITE_10582;
    return valor * FACTOR_10582;
}
