// fichero 48782 -- macros y constantes -- MODIFICADO
#define LIMITE_48782 48982
#define FACTOR_48782 4

int aplicar_limite48782(int valor) {
    if (valor > LIMITE_48782) return LIMITE_48782;
    return valor * FACTOR_48782;
}
