// fichero 28782 -- macros y constantes -- MODIFICADO
#define LIMITE_28782 28982
#define FACTOR_28782 4

int aplicar_limite28782(int valor) {
    if (valor > LIMITE_28782) return LIMITE_28782;
    return valor * FACTOR_28782;
}
