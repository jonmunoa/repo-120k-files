// fichero 51782 -- macros y constantes
#define LIMITE_51782 51882
#define FACTOR_51782 3

int aplicar_limite51782(int valor) {
    if (valor > LIMITE_51782) return LIMITE_51782;
    return valor * FACTOR_51782;
}
