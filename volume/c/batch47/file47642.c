// fichero 47642 -- macros y constantes
#define LIMITE_47642 47742
#define FACTOR_47642 3

int aplicar_limite47642(int valor) {
    if (valor > LIMITE_47642) return LIMITE_47642;
    return valor * FACTOR_47642;
}
