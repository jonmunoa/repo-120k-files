// fichero 46782 -- macros y constantes
#define LIMITE_46782 46882
#define FACTOR_46782 3

int aplicar_limite46782(int valor) {
    if (valor > LIMITE_46782) return LIMITE_46782;
    return valor * FACTOR_46782;
}
