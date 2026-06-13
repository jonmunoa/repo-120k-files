// fichero 25782 -- macros y constantes
#define LIMITE_25782 25882
#define FACTOR_25782 3

int aplicar_limite25782(int valor) {
    if (valor > LIMITE_25782) return LIMITE_25782;
    return valor * FACTOR_25782;
}
