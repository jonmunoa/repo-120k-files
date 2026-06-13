// fichero 26058 -- macros y constantes
#define LIMITE_26058 26158
#define FACTOR_26058 4

int aplicar_limite26058(int valor) {
    if (valor > LIMITE_26058) return LIMITE_26058;
    return valor * FACTOR_26058;
}
