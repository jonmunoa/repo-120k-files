// fichero 2642 -- macros y constantes
#define LIMITE_2642 2742
#define FACTOR_2642 3

int aplicar_limite2642(int valor) {
    if (valor > LIMITE_2642) return LIMITE_2642;
    return valor * FACTOR_2642;
}
