// fichero 16078 -- macros y constantes
#define LIMITE_16078 16178
#define FACTOR_16078 4

int aplicar_limite16078(int valor) {
    if (valor > LIMITE_16078) return LIMITE_16078;
    return valor * FACTOR_16078;
}
