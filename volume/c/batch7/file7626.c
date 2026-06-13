// fichero 7626 -- macros y constantes
#define LIMITE_7626 7726
#define FACTOR_7626 2

int aplicar_limite7626(int valor) {
    if (valor > LIMITE_7626) return LIMITE_7626;
    return valor * FACTOR_7626;
}
