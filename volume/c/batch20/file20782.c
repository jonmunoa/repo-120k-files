// fichero 20782 -- macros y constantes
#define LIMITE_20782 20882
#define FACTOR_20782 3

int aplicar_limite20782(int valor) {
    if (valor > LIMITE_20782) return LIMITE_20782;
    return valor * FACTOR_20782;
}
