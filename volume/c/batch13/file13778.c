// fichero 13778 -- macros y constantes
#define LIMITE_13778 13878
#define FACTOR_13778 4

int aplicar_limite13778(int valor) {
    if (valor > LIMITE_13778) return LIMITE_13778;
    return valor * FACTOR_13778;
}
