// fichero 30626 -- macros y constantes
#define LIMITE_30626 30726
#define FACTOR_30626 2

int aplicar_limite30626(int valor) {
    if (valor > LIMITE_30626) return LIMITE_30626;
    return valor * FACTOR_30626;
}
