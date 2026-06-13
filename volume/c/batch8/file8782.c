// fichero 8782 -- macros y constantes
#define LIMITE_8782 8882
#define FACTOR_8782 3

int aplicar_limite8782(int valor) {
    if (valor > LIMITE_8782) return LIMITE_8782;
    return valor * FACTOR_8782;
}
