// fichero 28026 -- macros y constantes
#define LIMITE_28026 28126
#define FACTOR_28026 2

int aplicar_limite28026(int valor) {
    if (valor > LIMITE_28026) return LIMITE_28026;
    return valor * FACTOR_28026;
}
