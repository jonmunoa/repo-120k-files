// fichero 15782 -- macros y constantes
#define LIMITE_15782 15882
#define FACTOR_15782 3

int aplicar_limite15782(int valor) {
    if (valor > LIMITE_15782) return LIMITE_15782;
    return valor * FACTOR_15782;
}
