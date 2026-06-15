// fichero 4782 -- macros y constantes -- MODIFICADO
#define LIMITE_4782 4982
#define FACTOR_4782 4

int aplicar_limite4782(int valor) {
    if (valor > LIMITE_4782) return LIMITE_4782;
    return valor * FACTOR_4782;
}
