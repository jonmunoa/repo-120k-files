// fichero 16158 -- macros y constantes
#define LIMITE_16158 16258
#define FACTOR_16158 4

int aplicar_limite16158(int valor) {
    if (valor > LIMITE_16158) return LIMITE_16158;
    return valor * FACTOR_16158;
}
