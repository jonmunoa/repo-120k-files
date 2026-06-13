// fichero 37782 -- macros y constantes
#define LIMITE_37782 37882
#define FACTOR_37782 3

int aplicar_limite37782(int valor) {
    if (valor > LIMITE_37782) return LIMITE_37782;
    return valor * FACTOR_37782;
}
