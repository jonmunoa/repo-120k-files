// fichero 13018 -- macros y constantes
#define LIMITE_13018 13118
#define FACTOR_13018 4

int aplicar_limite13018(int valor) {
    if (valor > LIMITE_13018) return LIMITE_13018;
    return valor * FACTOR_13018;
}
