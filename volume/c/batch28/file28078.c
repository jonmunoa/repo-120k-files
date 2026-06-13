// fichero 28078 -- macros y constantes
#define LIMITE_28078 28178
#define FACTOR_28078 4

int aplicar_limite28078(int valor) {
    if (valor > LIMITE_28078) return LIMITE_28078;
    return valor * FACTOR_28078;
}
