// fichero 54782 -- macros y constantes
#define LIMITE_54782 54882
#define FACTOR_54782 3

int aplicar_limite54782(int valor) {
    if (valor > LIMITE_54782) return LIMITE_54782;
    return valor * FACTOR_54782;
}
