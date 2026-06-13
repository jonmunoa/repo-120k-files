// fichero 23782 -- macros y constantes
#define LIMITE_23782 23882
#define FACTOR_23782 3

int aplicar_limite23782(int valor) {
    if (valor > LIMITE_23782) return LIMITE_23782;
    return valor * FACTOR_23782;
}
