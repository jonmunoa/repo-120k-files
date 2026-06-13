// fichero 6026 -- macros y constantes
#define LIMITE_6026 6126
#define FACTOR_6026 2

int aplicar_limite6026(int valor) {
    if (valor > LIMITE_6026) return LIMITE_6026;
    return valor * FACTOR_6026;
}
