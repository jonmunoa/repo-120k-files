// fichero 16782 -- macros y constantes
#define LIMITE_16782 16882
#define FACTOR_16782 3

int aplicar_limite16782(int valor) {
    if (valor > LIMITE_16782) return LIMITE_16782;
    return valor * FACTOR_16782;
}
