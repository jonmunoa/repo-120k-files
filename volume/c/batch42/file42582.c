// fichero 42582 -- macros y constantes -- MODIFICADO
#define LIMITE_42582 42782
#define FACTOR_42582 4

int aplicar_limite42582(int valor) {
    if (valor > LIMITE_42582) return LIMITE_42582;
    return valor * FACTOR_42582;
}
