// fichero 6782 -- macros y constantes
#define LIMITE_6782 6882
#define FACTOR_6782 3

int aplicar_limite6782(int valor) {
    if (valor > LIMITE_6782) return LIMITE_6782;
    return valor * FACTOR_6782;
}
