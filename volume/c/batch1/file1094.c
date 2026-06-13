// fichero 1094 -- macros y constantes
#define LIMITE_1094 1194
#define FACTOR_1094 5

int aplicar_limite1094(int valor) {
    if (valor > LIMITE_1094) return LIMITE_1094;
    return valor * FACTOR_1094;
}
