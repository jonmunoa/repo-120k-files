// fichero 7782 -- macros y constantes
#define LIMITE_7782 7882
#define FACTOR_7782 3

int aplicar_limite7782(int valor) {
    if (valor > LIMITE_7782) return LIMITE_7782;
    return valor * FACTOR_7782;
}
