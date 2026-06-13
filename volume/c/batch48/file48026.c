// fichero 48026 -- macros y constantes
#define LIMITE_48026 48126
#define FACTOR_48026 2

int aplicar_limite48026(int valor) {
    if (valor > LIMITE_48026) return LIMITE_48026;
    return valor * FACTOR_48026;
}
