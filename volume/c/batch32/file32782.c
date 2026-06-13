// fichero 32782 -- macros y constantes
#define LIMITE_32782 32882
#define FACTOR_32782 3

int aplicar_limite32782(int valor) {
    if (valor > LIMITE_32782) return LIMITE_32782;
    return valor * FACTOR_32782;
}
