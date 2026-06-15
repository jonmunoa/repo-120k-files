// fichero 8782 -- macros y constantes -- MODIFICADO
#define LIMITE_8782 8982
#define FACTOR_8782 4

int aplicar_limite8782(int valor) {
    if (valor > LIMITE_8782) return LIMITE_8782;
    return valor * FACTOR_8782;
}
