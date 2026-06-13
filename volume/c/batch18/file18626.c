// fichero 18626 -- macros y constantes
#define LIMITE_18626 18726
#define FACTOR_18626 2

int aplicar_limite18626(int valor) {
    if (valor > LIMITE_18626) return LIMITE_18626;
    return valor * FACTOR_18626;
}
