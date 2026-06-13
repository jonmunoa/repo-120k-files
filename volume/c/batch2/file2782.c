// fichero 2782 -- macros y constantes
#define LIMITE_2782 2882
#define FACTOR_2782 3

int aplicar_limite2782(int valor) {
    if (valor > LIMITE_2782) return LIMITE_2782;
    return valor * FACTOR_2782;
}
