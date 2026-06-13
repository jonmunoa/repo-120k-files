// fichero 30026 -- macros y constantes
#define LIMITE_30026 30126
#define FACTOR_30026 2

int aplicar_limite30026(int valor) {
    if (valor > LIMITE_30026) return LIMITE_30026;
    return valor * FACTOR_30026;
}
