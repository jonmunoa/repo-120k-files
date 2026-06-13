// fichero 1018 -- macros y constantes
#define LIMITE_1018 1118
#define FACTOR_1018 4

int aplicar_limite1018(int valor) {
    if (valor > LIMITE_1018) return LIMITE_1018;
    return valor * FACTOR_1018;
}
