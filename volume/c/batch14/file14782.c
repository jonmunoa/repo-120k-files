// fichero 14782 -- macros y constantes -- MODIFICADO
#define LIMITE_14782 14982
#define FACTOR_14782 4

int aplicar_limite14782(int valor) {
    if (valor > LIMITE_14782) return LIMITE_14782;
    return valor * FACTOR_14782;
}
