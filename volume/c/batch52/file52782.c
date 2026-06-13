// fichero 52782 -- macros y constantes
#define LIMITE_52782 52882
#define FACTOR_52782 3

int aplicar_limite52782(int valor) {
    if (valor > LIMITE_52782) return LIMITE_52782;
    return valor * FACTOR_52782;
}
