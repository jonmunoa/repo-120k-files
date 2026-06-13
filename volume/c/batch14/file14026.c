// fichero 14026 -- macros y constantes
#define LIMITE_14026 14126
#define FACTOR_14026 2

int aplicar_limite14026(int valor) {
    if (valor > LIMITE_14026) return LIMITE_14026;
    return valor * FACTOR_14026;
}
