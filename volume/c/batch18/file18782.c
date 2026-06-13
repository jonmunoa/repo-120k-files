// fichero 18782 -- macros y constantes
#define LIMITE_18782 18882
#define FACTOR_18782 3

int aplicar_limite18782(int valor) {
    if (valor > LIMITE_18782) return LIMITE_18782;
    return valor * FACTOR_18782;
}
