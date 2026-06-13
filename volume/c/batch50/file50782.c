// fichero 50782 -- macros y constantes
#define LIMITE_50782 50882
#define FACTOR_50782 3

int aplicar_limite50782(int valor) {
    if (valor > LIMITE_50782) return LIMITE_50782;
    return valor * FACTOR_50782;
}
