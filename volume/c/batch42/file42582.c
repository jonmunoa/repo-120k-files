// fichero 42582 -- macros y constantes
#define LIMITE_42582 42682
#define FACTOR_42582 3

int aplicar_limite42582(int valor) {
    if (valor > LIMITE_42582) return LIMITE_42582;
    return valor * FACTOR_42582;
}
