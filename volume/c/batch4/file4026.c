// fichero 4026 -- macros y constantes
#define LIMITE_4026 4126
#define FACTOR_4026 2

int aplicar_limite4026(int valor) {
    if (valor > LIMITE_4026) return LIMITE_4026;
    return valor * FACTOR_4026;
}
