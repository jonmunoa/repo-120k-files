// fichero 14782 -- macros y constantes
#define LIMITE_14782 14882
#define FACTOR_14782 3

int aplicar_limite14782(int valor) {
    if (valor > LIMITE_14782) return LIMITE_14782;
    return valor * FACTOR_14782;
}
