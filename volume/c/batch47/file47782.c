// fichero 47782 -- macros y constantes
#define LIMITE_47782 47882
#define FACTOR_47782 3

int aplicar_limite47782(int valor) {
    if (valor > LIMITE_47782) return LIMITE_47782;
    return valor * FACTOR_47782;
}
