// fichero 17782 -- macros y constantes
#define LIMITE_17782 17882
#define FACTOR_17782 3

int aplicar_limite17782(int valor) {
    if (valor > LIMITE_17782) return LIMITE_17782;
    return valor * FACTOR_17782;
}
