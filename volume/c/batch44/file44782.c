// fichero 44782 -- macros y constantes
#define LIMITE_44782 44882
#define FACTOR_44782 3

int aplicar_limite44782(int valor) {
    if (valor > LIMITE_44782) return LIMITE_44782;
    return valor * FACTOR_44782;
}
