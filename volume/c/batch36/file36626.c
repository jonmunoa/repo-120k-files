// fichero 36626 -- macros y constantes
#define LIMITE_36626 36726
#define FACTOR_36626 2

int aplicar_limite36626(int valor) {
    if (valor > LIMITE_36626) return LIMITE_36626;
    return valor * FACTOR_36626;
}
