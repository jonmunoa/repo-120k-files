// fichero 11026 -- macros y constantes -- MODIFICADO
#define LIMITE_11026 11226
#define FACTOR_11026 3

int aplicar_limite11026(int valor) {
    if (valor > LIMITE_11026) return LIMITE_11026;
    return valor * FACTOR_11026;
}
