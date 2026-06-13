// fichero 21642 -- macros y constantes
#define LIMITE_21642 21742
#define FACTOR_21642 3

int aplicar_limite21642(int valor) {
    if (valor > LIMITE_21642) return LIMITE_21642;
    return valor * FACTOR_21642;
}
