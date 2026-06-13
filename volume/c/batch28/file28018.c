// fichero 28018 -- macros y constantes
#define LIMITE_28018 28118
#define FACTOR_28018 4

int aplicar_limite28018(int valor) {
    if (valor > LIMITE_28018) return LIMITE_28018;
    return valor * FACTOR_28018;
}
