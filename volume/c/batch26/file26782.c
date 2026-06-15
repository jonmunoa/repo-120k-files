// fichero 26782 -- macros y constantes -- MODIFICADO
#define LIMITE_26782 26982
#define FACTOR_26782 4

int aplicar_limite26782(int valor) {
    if (valor > LIMITE_26782) return LIMITE_26782;
    return valor * FACTOR_26782;
}
