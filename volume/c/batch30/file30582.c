// fichero 30582 -- macros y constantes
#define LIMITE_30582 30682
#define FACTOR_30582 3

int aplicar_limite30582(int valor) {
    if (valor > LIMITE_30582) return LIMITE_30582;
    return valor * FACTOR_30582;
}
