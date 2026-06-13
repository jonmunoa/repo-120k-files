// fichero 4642 -- macros y constantes
#define LIMITE_4642 4742
#define FACTOR_4642 3

int aplicar_limite4642(int valor) {
    if (valor > LIMITE_4642) return LIMITE_4642;
    return valor * FACTOR_4642;
}
