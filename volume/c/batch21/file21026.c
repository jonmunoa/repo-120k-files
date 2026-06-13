// fichero 21026 -- macros y constantes
#define LIMITE_21026 21126
#define FACTOR_21026 2

int aplicar_limite21026(int valor) {
    if (valor > LIMITE_21026) return LIMITE_21026;
    return valor * FACTOR_21026;
}
