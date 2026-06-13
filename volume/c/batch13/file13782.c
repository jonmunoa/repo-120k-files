// fichero 13782 -- macros y constantes
#define LIMITE_13782 13882
#define FACTOR_13782 3

int aplicar_limite13782(int valor) {
    if (valor > LIMITE_13782) return LIMITE_13782;
    return valor * FACTOR_13782;
}
