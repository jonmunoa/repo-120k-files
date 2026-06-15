// fichero 11782 -- macros y constantes -- MODIFICADO
#define LIMITE_11782 11982
#define FACTOR_11782 4

int aplicar_limite11782(int valor) {
    if (valor > LIMITE_11782) return LIMITE_11782;
    return valor * FACTOR_11782;
}
