// fichero 54626 -- macros y constantes
#define LIMITE_54626 54726
#define FACTOR_54626 2

int aplicar_limite54626(int valor) {
    if (valor > LIMITE_54626) return LIMITE_54626;
    return valor * FACTOR_54626;
}
