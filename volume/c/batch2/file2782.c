// fichero 2782 -- macros y constantes -- MODIFICADO
#define LIMITE_2782 2982
#define FACTOR_2782 4

int aplicar_limite2782(int valor) {
    if (valor > LIMITE_2782) return LIMITE_2782;
    return valor * FACTOR_2782;
}
