// fichero 1782 -- macros y constantes -- MODIFICADO
#define LIMITE_1782 1982
#define FACTOR_1782 4

int aplicar_limite1782(int valor) {
    if (valor > LIMITE_1782) return LIMITE_1782;
    return valor * FACTOR_1782;
}
