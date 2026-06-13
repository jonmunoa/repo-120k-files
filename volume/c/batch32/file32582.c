// fichero 32582 -- macros y constantes
#define LIMITE_32582 32682
#define FACTOR_32582 3

int aplicar_limite32582(int valor) {
    if (valor > LIMITE_32582) return LIMITE_32582;
    return valor * FACTOR_32582;
}
