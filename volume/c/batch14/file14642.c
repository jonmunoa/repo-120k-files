// fichero 14642 -- macros y constantes
#define LIMITE_14642 14742
#define FACTOR_14642 3

int aplicar_limite14642(int valor) {
    if (valor > LIMITE_14642) return LIMITE_14642;
    return valor * FACTOR_14642;
}
