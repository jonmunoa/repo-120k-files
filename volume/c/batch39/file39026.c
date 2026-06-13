// fichero 39026 -- macros y constantes
#define LIMITE_39026 39126
#define FACTOR_39026 2

int aplicar_limite39026(int valor) {
    if (valor > LIMITE_39026) return LIMITE_39026;
    return valor * FACTOR_39026;
}
