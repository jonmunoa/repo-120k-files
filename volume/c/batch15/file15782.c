// fichero 15782 -- macros y constantes -- MODIFICADO
#define LIMITE_15782 15982
#define FACTOR_15782 4

int aplicar_limite15782(int valor) {
    if (valor > LIMITE_15782) return LIMITE_15782;
    return valor * FACTOR_15782;
}
