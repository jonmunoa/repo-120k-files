// fichero 12782 -- macros y constantes
#define LIMITE_12782 12882
#define FACTOR_12782 3

int aplicar_limite12782(int valor) {
    if (valor > LIMITE_12782) return LIMITE_12782;
    return valor * FACTOR_12782;
}
