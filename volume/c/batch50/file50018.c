// fichero 50018 -- macros y constantes
#define LIMITE_50018 50118
#define FACTOR_50018 4

int aplicar_limite50018(int valor) {
    if (valor > LIMITE_50018) return LIMITE_50018;
    return valor * FACTOR_50018;
}
