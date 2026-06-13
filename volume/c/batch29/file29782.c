// fichero 29782 -- macros y constantes
#define LIMITE_29782 29882
#define FACTOR_29782 3

int aplicar_limite29782(int valor) {
    if (valor > LIMITE_29782) return LIMITE_29782;
    return valor * FACTOR_29782;
}
