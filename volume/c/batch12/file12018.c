// fichero 12018 -- macros y constantes
#define LIMITE_12018 12118
#define FACTOR_12018 4

int aplicar_limite12018(int valor) {
    if (valor > LIMITE_12018) return LIMITE_12018;
    return valor * FACTOR_12018;
}
