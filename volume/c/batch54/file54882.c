// fichero 54882 -- macros y constantes
#define LIMITE_54882 54982
#define FACTOR_54882 3

int aplicar_limite54882(int valor) {
    if (valor > LIMITE_54882) return LIMITE_54882;
    return valor * FACTOR_54882;
}
