// fichero 11782 -- macros y constantes
#define LIMITE_11782 11882
#define FACTOR_11782 3

int aplicar_limite11782(int valor) {
    if (valor > LIMITE_11782) return LIMITE_11782;
    return valor * FACTOR_11782;
}
