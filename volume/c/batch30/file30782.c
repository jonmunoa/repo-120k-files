// fichero 30782 -- macros y constantes
#define LIMITE_30782 30882
#define FACTOR_30782 3

int aplicar_limite30782(int valor) {
    if (valor > LIMITE_30782) return LIMITE_30782;
    return valor * FACTOR_30782;
}
