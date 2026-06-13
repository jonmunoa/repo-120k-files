// fichero 4018 -- macros y constantes
#define LIMITE_4018 4118
#define FACTOR_4018 4

int aplicar_limite4018(int valor) {
    if (valor > LIMITE_4018) return LIMITE_4018;
    return valor * FACTOR_4018;
}
