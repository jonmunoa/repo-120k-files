// fichero 48782 -- macros y constantes
#define LIMITE_48782 48882
#define FACTOR_48782 3

int aplicar_limite48782(int valor) {
    if (valor > LIMITE_48782) return LIMITE_48782;
    return valor * FACTOR_48782;
}
