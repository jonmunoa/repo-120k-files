// fichero 38782 -- macros y constantes
#define LIMITE_38782 38882
#define FACTOR_38782 3

int aplicar_limite38782(int valor) {
    if (valor > LIMITE_38782) return LIMITE_38782;
    return valor * FACTOR_38782;
}
