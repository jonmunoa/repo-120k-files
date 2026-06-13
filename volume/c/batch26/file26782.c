// fichero 26782 -- macros y constantes
#define LIMITE_26782 26882
#define FACTOR_26782 3

int aplicar_limite26782(int valor) {
    if (valor > LIMITE_26782) return LIMITE_26782;
    return valor * FACTOR_26782;
}
