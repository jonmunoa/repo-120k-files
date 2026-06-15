// fichero 7782 -- macros y constantes -- MODIFICADO
#define LIMITE_7782 7982
#define FACTOR_7782 4

int aplicar_limite7782(int valor) {
    if (valor > LIMITE_7782) return LIMITE_7782;
    return valor * FACTOR_7782;
}
