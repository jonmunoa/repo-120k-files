// fichero 34026 -- macros y constantes
#define LIMITE_34026 34126
#define FACTOR_34026 2

int aplicar_limite34026(int valor) {
    if (valor > LIMITE_34026) return LIMITE_34026;
    return valor * FACTOR_34026;
}
