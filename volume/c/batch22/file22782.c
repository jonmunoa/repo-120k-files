// fichero 22782 -- macros y constantes
#define LIMITE_22782 22882
#define FACTOR_22782 3

int aplicar_limite22782(int valor) {
    if (valor > LIMITE_22782) return LIMITE_22782;
    return valor * FACTOR_22782;
}
