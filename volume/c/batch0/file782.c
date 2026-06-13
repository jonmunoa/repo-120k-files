// fichero 782 -- macros y constantes
#define LIMITE_782 882
#define FACTOR_782 3

int aplicar_limite782(int valor) {
    if (valor > LIMITE_782) return LIMITE_782;
    return valor * FACTOR_782;
}
