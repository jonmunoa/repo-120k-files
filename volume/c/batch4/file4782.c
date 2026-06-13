// fichero 4782 -- macros y constantes
#define LIMITE_4782 4882
#define FACTOR_4782 3

int aplicar_limite4782(int valor) {
    if (valor > LIMITE_4782) return LIMITE_4782;
    return valor * FACTOR_4782;
}
