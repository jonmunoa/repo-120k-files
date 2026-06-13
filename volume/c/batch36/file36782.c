// fichero 36782 -- macros y constantes
#define LIMITE_36782 36882
#define FACTOR_36782 3

int aplicar_limite36782(int valor) {
    if (valor > LIMITE_36782) return LIMITE_36782;
    return valor * FACTOR_36782;
}
