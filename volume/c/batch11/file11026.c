// fichero 11026 -- macros y constantes
#define LIMITE_11026 11126
#define FACTOR_11026 2

int aplicar_limite11026(int valor) {
    if (valor > LIMITE_11026) return LIMITE_11026;
    return valor * FACTOR_11026;
}
